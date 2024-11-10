#include<stdio.h>
int main(){
    int i=5,j=10;
    do{
        printf("I=%d",i);
    }while (i< j--)
    do{
        printf("I=%d",i);
}while(i < --j)
    do{
        printf("*******\n");
    }while(0);
}