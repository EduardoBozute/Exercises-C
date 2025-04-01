#include <stdio.h>
#include <math.h>

int main()
{
    if (pow(2,4) != 4 + 2 || 2 + 3 * 5/3 % 5 > 0){
        printf("V");
    } else {
        printf("F");
    }
    return 0;
}
