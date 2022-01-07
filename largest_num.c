#include<stdio.h>
int main(){
int num1=0,num2=0,num3=0;
printf("Enter first number ");
scanf("%d",&num1);
printf("Enter second number ");
scanf("%d",&num2);
printf("Enetr third number ");
scanf("%d",&num3);
if(num1>num2 && num1>num3){
    printf("%d is greater than %d and %d\n",num1,num2,num3);
}

else if(num2>num1 && num2>num3){
    printf("%d is greater than %d and %d\n",num2,num1,num3);

}

else if(num3>num2 && num3>num1){
    printf("%d is greater than %d and %d\n",num3,num2,num1);
}





return 0;
}
