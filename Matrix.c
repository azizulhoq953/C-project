#include<stdio.h>
int main()
//Diagonal Matrix
{
    int A[3][3],i,j,sum=0;
    printf("Enter Matrix Elemant=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    //Printing The Matrix
    printf("\n Entered Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");

        }


//Sum Of Diagonal

printf("Diagonal Elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("%d \n",A[i][j]);
                sum=sum+A[i][j];

            }
        }


    }
    printf("\n Number Of Diagonal =%d\n",sum);


getch();
}
