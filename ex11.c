#include <stdio.h>
#include <math.h>

int main()
{   
    int A, B, L;
    float C;
    A = 2;
    B = 7;
    C = 3.5;
    L = 0;
    if (B/A == C || B/A != C){
        printf("V");
    } else {
        printf("F");
    }
    return 0;
}
