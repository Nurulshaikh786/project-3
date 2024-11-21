#include<stdio.h>
main(){
	int i,first_dig,last_dig,sum;
	printf("Enter a number : ");
	scanf("%d",&i);
	last_dig=i%10;
	while(i>=10){
		i/=10;
	}
	first_dig=i;
	sum=first_dig+last_dig;
	printf("The sum of %d and %d of the number  is :  %d",first_dig,last_dig,i,sum);
	
	
}
