#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,l,m;

    int ****A;

    A=(int ****)malloc(4*sizeof(int***));

    for(i=0;i<4;i++)
    {
        A[i]=(int ***)malloc(4*sizeof(int**));

        for(j=0;j<4;j++)
        {
            A[i][j]=(int **)malloc(4*sizeof(int*));

            for(k=0;k<4;k++)
            {
                A[i][j][k]=(int *)malloc(4*sizeof(int));
            }
        }
    }

    int value=1;

    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            for(k=0;k<4;k++)
                for(l=0;l<4;l++)
                    A[i][j][k][l]=value++;

    int B1[2][2][2];
    int B2[2][2][2];

    for(j=0;j<2;j++)
        for(k=0;k<2;k++)
            for(l=0;l<2;l++)
            {
                B1[j][k][l]=A[3][j+2][k+1][l+2];
            }

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            for(k=0;k<2;k++)
            {
                B2[i][j][k]=A[i][j][k][0];
            }

    int Temp[2][2][2];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            for(k=0;k<2;k++)
                Temp[i][j][k]=B2[i][k][j];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            for(k=0;k<2;k++)
                B2[i][j][k]=Temp[i][j][k];

    int C[2][2][2];

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                C[i][j][k]=0;

                for(m=0;m<2;m++)
                {
                    C[i][j][k]+=B1[i][j][m]*B2[i][m][k];
                }
            }
        }
    }

    int vector[8];

    int index=0;

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            for(k=0;k<2;k++)
                vector[index++]=C[i][j][k];

    int sum=0;

    for(i=0;i<8;i++)
        sum+=vector[i];

    printf("Sum = %d\n",sum);

    return 0;
}