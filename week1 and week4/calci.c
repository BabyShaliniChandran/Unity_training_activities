/*
#include <stdio.h>

int main(){

int integer_1,integer_2;
char oprator;

scanf("%lf %c %lf", &integer_1, &oprator, &integer_2);

if (oprator=='+'){
printf("%.2lf",integer_1+integer_2);
}

else if (oprator == '-'){
printf("%.2lf",integer_1-integer_2);
}

else if (oprator == '*'){
printf("%.2lf",integer_1*integer_2);
}

else if (oprator == '/'){
printf("%.2lf",integer_1/integer_2);
}

else{
printf("The oprator is not valid");
}
return 0;
}


*/



#include <stdio.h>

int main(){

// inalizing the variable
double integer_1,integer_2,result;
char oprator;
int flag=1;

// getting input
scanf("%lf %c %lf", &integer_1, &oprator, &integer_2);

// switch case
switch(oprator){

case '+':
	result=integer_1+integer_2;
	break;

case '-':
	result=integer_1-integer_2;
	break;

case '*':
	result=integer_1*integer_2;
	break;

case '/':
	if (integer_2 != 0){
	result=integer_1/integer_2;
	}
	else{
	printf("zero division error");
	flag=0;
	} 
	break;

default:
	printf("The oprator is not valid");
}

// check the result have decimals values
if (flag){
if (result==(int) result){
	printf("%d",(int)result);
}else{
	printf("%lf",result);
}
}

return 0;
}