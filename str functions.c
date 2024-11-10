#include<stdio.h>
#include<string.h>
int main(){
    char arr[15]={'c','i','t','y','c','o','l','l','e','g','e','\0'};
    //Count the no of characters and store the count into length.
    int lenght=strlen(arr);
    printf("Total lenght=%d\n",lenght);

char str1[20]="City Engineering";
char str2[10]="College";
   strcat(str1,str2);
printf("%s",str1);

}