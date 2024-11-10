#include<stdio.h>
void main(){
    int t=700;
    const int *p=&t;
    //(*p)++;//connot change the value  of t using the pointer p
    t++;
    printf("%d\n",t);

}