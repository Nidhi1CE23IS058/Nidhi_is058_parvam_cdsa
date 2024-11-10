#include<stdio.h>
void main(){
   int i=5,j=15;
    while(i<=15){
        do{
             j--;
        }while (j>=5);
        i++;
    }
    printf("%d",i*j);
}

