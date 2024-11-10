#include<stdio.h>
void main(){
    //Complier converts this statement into
    //int *const arr={100,290,112,56,289,11}
    int arr[5]={100,290,112,56,289,11};
    int * const ptr=&arr[o];
    arr++;
    ptr++;
    arr[2]=25;
    *(ptr+5)=119;
}