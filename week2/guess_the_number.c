#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
	
	int number,guess,attempt=0,high=100,low=0,i=0;
	srand(time(0));
	number=rand()% 100+1 ;
	
	while (i==0){
		printf("enter your guess from %d-%d : ",low,high);
		scanf("%d",&guess);
		if (guess == number){
			printf("your guess it right in %d attempt.\n",attempt++);
			break;
		}
		else if (guess> number){
			high=guess;
			printf("you guess is too high /:/( \n");
			attempt++;
		} 
		else{
		
			low=guess;
			printf("you guess is too low /:/( \n");
			attempt++;
		}
	}
}

			