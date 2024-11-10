#include<stdio.h>
int main(){
    int arr[]={1,5,15,20};

    for (int i=0;i<4;i++){
        printf("I=%d",i);
    switch(arr[i]){
        case  1 ... 6:
        printf("%d in range 1 to 6\n",arr[i]);
        case 7 ... 20:
        printf("%d in range 7 to 20\n",arr[i]);
        default:
        printf("%d not in array\n",arr[i]);
    }
     
}
return 0;
}