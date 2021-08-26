#include<stdio.h>
int main()
{

    int A[3][4],i,c;
    printf(" Enter Any  Numbers=");
    for(i=0;i<3;i++)
    {
        for(c=0;c<4;c++)
        {
            printf("\nA[%d][%d]=",i,c);
            scanf("%d",&A[i][c]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(c=0;c<4;c++)

        {
            printf("%d\n",A[i][c]);
        }
        printf("\n");
    }



    getch();


}
