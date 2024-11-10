#include<stdio.h>
#include<string.h>
void main(){
    int count=0;
    char str[100];
    char vowels[]={'a','e','i','o','u','\0'};
    printf("Enter the string:");
    scanf("%[^\n]%*c", &str);
    printf("THe vowels in the given string is:\n");
    for (int i=0;i<strlen(str);i++){
        for(int j=0;vowels[j]!='\0';j++){
            if (str[i]==vowels[j]){
                count++;
                printf("%c\n",str[i]);
            }
        }
    }
printf("\n The count of the vowels:%d\n",count);
    

}