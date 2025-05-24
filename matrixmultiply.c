//matrix multiply
#include<stdio.h>
#include<math.h>
void multiply(int r1,int c1, int r2,int c2, int arr1[r1][c1],int arr2[r2][c2]){
    int arr3[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            arr3[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                arr3[i][j]=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("The result of matrix multiplication is:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
int main(){
int r1,r2,c1,c2;
printf("enter row of 1st matrix: \n");
scanf("%d",&r1);
printf("enter col of 1st matrix: \n");
scanf("%d",&c1);
int arr1[r1][c1];
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
    scanf("%d",&arr1[i][j]);
    }
}
printf("enter row of 2nd matrix: \n");
scanf("%d",&r2);
printf("enter row of 2nd matrix: \n");
scanf("%d",&c2);
int arr2[r2][c2];
for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
    scanf("%d",&arr2[i][j]);
    }
}
multiply(r1,c1,r2,c2,arr1,arr2);

return 0;
}