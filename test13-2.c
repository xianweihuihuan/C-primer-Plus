#include<stdio.h>

int main(int argc ,char*argv[]){
    int i =0;
    int j =0;
    if(argc>2){
        FILE*ph = fopen(argv[1],"r");
        char a[100];
        fscanf(ph,"%s",a);
        while(1){
            if(a[i]=='\n'){
                i++;
                printf("\n");
                break;
            }
            printf("%c",a[i]);
            i++;
        }
        char b[100];
        FILE*pr = fopen(argv[2],"r");
        fscanf(pr,"%s",b);
        while(1){
            if(b[j]=='\n'){
                printf("\n");
                j++;
                break;
            }
            printf("%c",b[j]);
            j++;
        }
        while(a[i]!='\0'){
            printf("%c",a[i]);
            i++;
        }
        printf("\n");
        while(b[j]!='\0'){
            printf("%c",b[j]);
            j++;
        }
        fclose(ph);
        fclose(pr);
    }
    return 0;
}