#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,m;

    int ***A;

    A=(int ***)malloc(4*sizeof(int**));

    for(i=0;i<4;i++)
    {
        A[i]=(int **)malloc(4*sizeof(int*));

        for(j=0;j<4;j++)
            A[i][j]=(int *)malloc(4*sizeof(int));
    }

    int value=1;

    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            for(k=0;k<4;k++)
                A[i][j][k]=value++;

    int B1[2][2];
    int B2[2][2];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            B1[i][j]=A[3][i+2][j+2];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            B2[i][j]=A[0][i][j];

    int temp;

    temp=B2[0][1];
    B2[0][1]=B2[1][0];
    B2[1][0]=temp;

    int C[2][2];

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            C[i][j]=0;

            for(m=0;m<2;m++)
                C[i][j]+=B1[i][m]*B2[m][j];
        }
    }

    int vector[4];

    int index=0;

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            vector[index++]=C[i][j];

    int sum=0;

    for(i=0;i<4;i++)
        sum+=vector[i];

    printf("Sum = %d\n",sum);

    return 0;
}