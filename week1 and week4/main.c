#include <stdio.h>
#include "calcii.h"

int main(){
	printf("enter the integer 1:");
	scanf("%d",&int1);
	printf("enter the integer 2:");
	scanf("%d",&int2);
	
	printf("addition of two numbers:%d\n",add(int1,int2));
	printf("subration of two numbers:%d",sub(int1,int2));
	return 0;
}