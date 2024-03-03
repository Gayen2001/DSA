#include<stdio.h>

void display(int arr[],int size){
       for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

}
int linear_search(int *arr,int size,int ch){
    for(int i=0;i<size;i++){
        if(arr[i]==ch){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[1000000];
    int size,ch;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the element of array:\n");
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your array is ....................\n");
    display(arr,size);
    printf("Enter which element are search you\n");
    scanf("%d",&ch);
    int f=linear_search(arr,size,ch);
    printf("The element %d found in position %d ",ch,f);
    return 0;
}
