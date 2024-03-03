#include<stdio.h>


void display(int arr[],int size){
       for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int Binary_searce(int *arr,int size ,int ch){
    int low =0;
    int high=size-1;
    while(low<=high){
        int mid =(low+high)/2;
        if (arr[mid]==ch){
            return mid;
        }
        if (arr[mid]<ch){
            low =mid+1;
        }
        else{
            high=mid-1;
        }
    }
return printf("The element not found in this array");
}


int main()
{
    int arr[1000];
    int size,ch;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the element of array in sorted order otherwise binary search can not posible :\n");
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your array is ....................\n");
    display(arr,size);
    printf("Enter which element are search you\n");
    scanf("%d",&ch);
    int f=Binary_searce(arr,size,ch);
    printf("The element %d found in position %d ",ch,f);
    return 0;
}