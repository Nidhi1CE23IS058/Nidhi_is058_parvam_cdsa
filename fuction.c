#include<stdio.h>
void sum(int n1,int n2)//function definition

{

    int c=n1+n2;
    printf("%d\n",c);
    n1++;n2++;
    sum(n1,n2);
    
}
void main(){ 
    
   int a=100,b=200;
   
    sum(a,b);//fuction call
    printf("2 number added..");
}
