#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand((unsigned int)time(NULL));
    FILE*pf = fopen("test.txt","w");
    for(int i = 0;i<20;i++){
        for(int j =0;j<30;j++){
            int a=rand()%10;
            fprintf(pf,"%d",a);
        }
        fputc('\n',pf);
    }
    fclose(pf);
    FILE*pr = fopen("test.txt","r");
    for(int i = 0;i<620;i++){
        char a = fgetc(pr);
        if(a=='\n'){
            printf("\n");
            continue;
        }
        else if(a=='0'){
            printf(" ");
        }
        else if(a=='1'){
            printf(".");
        } 
         else if(a=='2'){
            printf("'");
        } 
         else if(a=='3'){
            printf(":");
        } 
         else if(a=='4'){
            printf("~");
        } 
         else if(a=='5'){
            printf("*");
        } 
         else if(a=='6'){
            printf("=");
        } 
         else if(a=='7'){
            printf("+");
        } 
         else if(a=='8'){
            printf("&");
        } 
         else if(a=='9'){
            printf("#");
        } 
    }
    
    return 0;
}