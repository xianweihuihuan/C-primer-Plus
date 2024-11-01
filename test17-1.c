#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct dianying{
    char *name;
    struct dianying*next;
    struct dianying*prev;
}dianying;
void chushihua(dianying*a){
    a->next=NULL;
    a->prev=NULL;
}
void weicha(dianying*phead,char str[]){
    dianying*pcur = phead;
    while(pcur->next){
        pcur = pcur->next;
    }
    dianying* plist =(dianying*)malloc(sizeof(dianying));
    plist->name =str;
    pcur->next = plist;
    plist->prev = pcur;
    plist->next =NULL;
}
int main(){
    dianying a;
    chushihua(&a);
    weicha(&a,"a");
    weicha(&a,"b");
    weicha(&a,"c");
    weicha(&a,"d");
    dianying *b =a.next;
    while(b){
        printf("%s ",b->name);
        b=b->next;
    }
    printf("\n");
    b=a.next;
    while(b->next){
        b=b->next;
    }
    while(b){
        printf("%s ",b->name);
        b=b->prev;
    }
    return 0;
}