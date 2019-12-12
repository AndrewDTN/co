#include <stdio.h>

int main() {
    int R0 = 7; // @0, M=7 
    int R1 = 5; // @1, M=5
    int R2 = 0; // @2, M=0
loop:           // (loop)
    // while (R0 > 0) { //
    if (R0<=0) goto endLoop; // @0, D=M, D;JLE
      R2 = R2 + R1; // @1, D=M, @2, M=D+M 
      R0 = R0 - 1;  // @0, M=M-1
      printf("R0=%d R1=%d R2=%d\n", R0, R1, R2);
    // }
    goto loop; // @loop, JMP
endLoop:    // (endLoop)
    printf("R2=%d\n", R2);
}
