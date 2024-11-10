#include<stdio.h>
int main(){
    printf("%c\n",'A');
    printf("%s\n","A");
    char ch='B';
    printf("%c\n",ch);
    printf("%d\n",ch);// Method 1 to finding ASCII value.
    ch++;
    printf("%d\n",ch);
    printf("%c\n",ch);

    int i=ch;// Convert charcter to integer. Method 2 to finding ASCII value.
    printf("%d\n",i);
    i +=32;
    ch=i;
    printf("%c\n",ch);
}
