#include <stdio.h>
#include <math.h>

int main()
{
    if (!((5 != 10/2) || 1 && 2 - 5 > 5 - 2 || 1)){
        printf("V");
    } else {
        printf("F");
    }
    return 0;
}
