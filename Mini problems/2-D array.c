#include <stdio.h>
void main()
{
 int i, j , s ;
 int a[3][3] = { 3, 6, 9, 2, 5, 8, 1, 4, 7 };
 int b[3][3] = { 5, 9, 10, 5, 4, 7, 2, 8, 1 };
 for( i = 0; i < 3; i++)
 {
    for( j = 0, s = 0; j < 3; j++){
       s = s + a[j][i]+ b[i][j];
    }
    printf("\n %d", s);
  }
}
