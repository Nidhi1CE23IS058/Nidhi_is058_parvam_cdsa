#include<stdio.h>
void main(){
    int i=100,j=2,c=i/2;
    //3.4 is double by default. In C language ,fractional values are considered as
    //double by default.
    float f=3.4;//3.4 is taken as double,but automatically convered to float.
    float t=5.4f;//5.4 must taken as a floating point value.
    float o=100.00F;
    printf("%.2f",(o/j));

    int n=f;//Narrowing conversion.(loss of data)
    printf("\n%d\n",n);

//Casting(<data-type>) In c language casting is optional.
    int n1=100;float f1=n1;//Widening conversion .No data loss 
    printf("%f\n", f1);

}