#include<stdio.h>
int main()
{
    int n,num[10],i;
    printf("How Many Number=");
    scanf("%d",&n);
    for(i=0; i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    for(i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];

    }

        printf("maximum number= %d",max);


    getch();
}
