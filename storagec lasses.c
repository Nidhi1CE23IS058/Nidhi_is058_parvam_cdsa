#include<stdio.h>
void sum(){
   static int n1=100,n2=200;
    int c=n1+n2;
    printf("C=%d\n",c);
    n1++;n2++;
}
int n;
void main(){
    register int i=0;
    int t;//Automatic variables
    printf("%d\n",t);
    printf("%d\n",n);
    
    sum();
    sum();
    sum();
    sum();
}