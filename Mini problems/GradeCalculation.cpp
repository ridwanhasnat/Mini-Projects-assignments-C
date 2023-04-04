#include<stdio.h>
int main( void ){
	float grade;
	scanf("%f" , &grade );
	if( grade >= 94 && grade <= 100 ){
		printf("A+ \n");
	}else if( grade >= 88 && grade < 94 ){
		printf("A \n");
	}else if( grade >= 82 && grade < 88 ){
		printf("A- \n");
	}else if( grade >= 76 && grade < 82 ){
		printf("B+ \n");
	}else if( grade >= 70 && grade < 76 ){
		printf("B \n");
	}else if( grade >= 64 && grade < 70 ){
		printf("B- \n");
	}else{
		printf("Fail \n");
	}
	return 0;
}