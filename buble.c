#include<stdio.h>

int main(){

int i,j,size=6;

int arr[]={10,9,3,1,4,2};

for(i=0; i < size-1; i++){

    for(j=0; j<size-1; j++){

    if( arr[j]>arr[j+1]){

        int swap=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=swap;

    }}
}
printf("\nAfter Sorting \n");
for(i=0; i<size; i++){
    printf("%d ",arr[i]);
}

printf("\n");
return 0;
}
