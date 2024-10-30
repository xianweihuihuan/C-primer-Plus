#include<stdio.h>

int main(){
    int arr1[7];
    for(int i =0;i<7;i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[3];
    for(int i = 0;i<3;i++){
        arr2[i] = arr1[2+i]; 
    }
    for(int i = 0;i<3;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}