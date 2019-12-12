#include <stdio.h>

int main() {
    int R0 = 7;
    int R1 = 5;
    int R2 = 0;
loop:    
    // while (R0 > 0) { //
    if (R0<=0) goto endLoop; 
      R2 = R2 + R1;
      R0 = R0 - 1;
      printf("R0=%d R1=%d R2=%d\n", R0, R1, R2);
    // }
    goto loop;
endLoop:    
    printf("R2=%d\n", R2);
}
