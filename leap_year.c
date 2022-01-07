#include<stdio.h>
int main(){
int year_Input=0;
printf("enter the year to check whether it is a leap year or not ");
scanf("%d",&year_Input);
if((year_Input%4==0)||(year_Input%100==0 && year_Input%400==0)){
   
    
        printf("%d is a leap year ",year_Input);
    }
    else
    {
        printf("%d is not a leap year ",year_Input);
    }
return 0;
}
