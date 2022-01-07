#include<stdio.h>
int main(){
int i=0,sum=0;
for(i=0;i<10;i++)
{
    if(i%2==0){
continue;
    }
sum=sum+i;
    
    
}
printf("the sum of odd number is %d ",sum);
return 0;
}