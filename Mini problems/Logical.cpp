#include<stdio.h>
int main( void ){
	int A;
	A = 10;
	if( A > 10 && A < 20 ){
		printf("I am inside if..\n");
	}else if( A >= 20 && A <= 30 ){
		printf("I am inside first else if..\n");
	}else if( A == 40 || A > 40 ){
		printf("I am inside second else if..\n");
	}else{
		printf("I am inside else..\n");
	}
	return 0;
}