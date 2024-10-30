#include<stdio.h>

int main(){
    double a[3][5];
    for(int i = 0;i<3;i++){
        int j =0;
        for(j;j<5;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    double he1 = 0,he2 = 0,he3 = 0,he = 0;
    int i = 0;
    for(int j = 0;j<5;j++){
        he1+=a[i][j];
    }
    i++;
    for(int j = 0;j<5;j++){
        he2+=a[i][j];
    }
    i++;
    for(int j = 0;j<5;j++){
        he3+=a[i][j];
    }
    he = he1+he2+he3;
    double sum =0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<5;j++){
            if(sum<a[i][j]){
                sum = a[i][j];
            }
        }
    }
    printf("平均数1=%lf,平均数2=%lf,平均数3=%lf,总平均数=%lf,最大值=%lf",he1/5,he2/5,he3/5,he/15,sum);
    return 0;
}