#include<stdio.h>
main(){
	int i,j,count;
	count=0;
	printf("Enter a number : ");
	scanf("%d",&i);
	j=i;
	
	while(j!=0){
	j/=10;
	count++;
	}
	printf("Total digits of entered number : %d",count);
}
