#include<stdio.h>
int main() {
    int n1=3,n2=5,n3=8,n4=10;
    if(n1>n2 && n1>n3 && n1>n4) {
        printf("%d is the largest number",n1);
    }
    else if(n2>n1 && n2>n3 && n3>n4) {
        printf("%d is the largest number",n2);
    }
     else if(n3>n1 && n3>n2 && n3>n4) {
        printf("%d is the the largest number",n3);
    }
    else{
        printf("%d is the largest number",n4);
    }
    return 0;
}