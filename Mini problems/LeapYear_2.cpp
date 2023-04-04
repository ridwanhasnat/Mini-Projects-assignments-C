#include<stdio.h>
int main( void ){
	int year = 2012;
	if( year % 4 == 0 && year % 100 != 0 ) {
		printf("Leap Year..\n");
	}else if ( year % 400 == 0 ){
		printf("Leap Year..\n");
	}else{
		printf("Not Leap Year..\n");
	}
	return 0;
}