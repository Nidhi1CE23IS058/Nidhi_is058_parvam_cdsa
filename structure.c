#include<stdio.h>
//student is composite data type
struct student
{
 int rollNo;char name[50];int semesterNumber;   /* data */
 float fees; char course[50];
};
struct student s;//s is a composite variable.student is the data type
void main(){
    printf("%d\n",s.rollNo);
    printf("%f\n",s.fees);
    s.rollNo=1001;s.fees=52000.00f;
    printf("%d\n",s.rollNo);
    printf("%f\n",s.fees);

}