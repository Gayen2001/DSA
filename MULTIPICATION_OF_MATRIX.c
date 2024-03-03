#include<Stdio.h>
int main(){
int arr[400][400];
int i, j,r1,c1;
printf("Enter the row and column size:\n");
scanf("%d%d",&r1,&c1);
printf("Enter the element of first matrix:\n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
    scanf("%d",&arr[i][j]);
}
}

int arr2[400][400];
int r2,c2;
printf("Enter the size of row and column :");
scanf("%d%d",&r2,&c2);
printf("enter the element second matrix:\n");
for(i=0;i<r2;i++){
 for(j=0;j<c2;j++){
    scanf("%d",&arr2[i][j]);
 }
 
}

printf("Your first matrix:\n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
    printf("%d\t",arr[i][j]);
    }
    printf("\n");
}
printf("\nYour second matrix:\n");
for(i=0;i<r2;i++){
 for(j=0;j<c2;j++){
    printf("%d\t",arr2[i][j]);
 }
 printf("\n");
}
int arr3[400][400];
int k;
int r3=r1;
int c3=c2;
int n=c1;
if(n==r2){

for(i=0;i<r3;i++){
 for(j=0;j<c3;j++){
    for(k=0;k<n;k++){
    arr3[i][j]=arr3[i][j]+(arr[i][k]*arr2[k][j]);
    }
 }
}
printf("\nMultification of your given  two matrix:\n");
for(i=0;i<r3;i++){
 for(j=0;j<c3;j++){
    printf("%d\t",arr3[i][j]);
    }
    printf("\n");
 }
}
else{
	printf("\nERROR ! Can not posible the multipication of given matrix. becouse first matrix column and second matrix row are different.");
}
 return 0;
 }