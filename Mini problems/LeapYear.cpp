#include<stdio.h>
int main( void ){
	int year;
	year = 2012;
	if( year % 4 == 0 ){ // start of first if
		if( year % 100 == 0 ){ // start of second if
			if( year % 400 == 0 ){ // start of third if
				printf( "Leap Year..\n" );
			}else{ 
				printf( "Not Leap Year..\n" );
			} // end of third if
		}else{
			printf( "Leap Year..\n" );
		} // end of second if
	}else{
		printf( "Not Leap Year..\n" );
	} // end of first if
	return 0;
}