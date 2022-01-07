#include<stdio.h>
int main() {
	int sub1=0,sub2=0,sub3=0,sub4=0,sub5=0,total=0,total_Marks=0;
	int percentage=0;
	printf("enter the total marks of examination ");
	scanf("%d",&total_Marks);
	printf("enter the marks of first subject ");
	scanf("%d",&sub1);
	printf("enter the marks of seconf subject ");
	scanf("%d",&sub2);
	printf("enter the marks of third subject ");
	scanf("%d",&sub3);
	printf("enter the marks of fourth subject ");
	scanf("%d",&sub4);
	printf("enter the marks of fifth subject ");
	scanf("%d",&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	printf("the total marks obtained is %d\n",total);
	percentage=total/5;
	printf("the percentage obtained based on the total marks is %d\n",percentage);
	printf("examination held on %d marks\n",total_Marks);
	if(percentage>80) {
		printf("A+");
	} else if(percentage>=65 && percentage<=80) {
		printf("A");
	}

	else if(percentage>=50 && percentage<=65) {
		printf("B");
	} else if(percentage>=42 && percentage<=50) {
		printf("C");
	} else if(percentage<42) {
		printf("Fail");
	}
	return 0;
}