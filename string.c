//Using arrays to store the string 
#include<stdio.h>
int main(){
    char name[5]={'c','i','t','y','c','o','l','l','g','e''\0'};
    printf("%s\n",name);
    printf("%c\n",name[1]);
    printf("%c\n",name[3]);

    for(int j=0;j<=3;j++){
        printf("%c\t",name[j]);
    }

    for(int j=0;name[j]!='\0';j++){
        printf("%c\t",name[j]);

    

    }
}