#include <stdio.h>
#include "limits.h"


int main()
{
    printf("size of INT on this machine is : %ld ", sizeof(int));
    printf("size of FLOAT on this machine is : %ld ", sizeof(float));
    printf("size of DOUBLE on this machine is : %ld ", sizeof(double));
    printf("size of LONG DOUBLE on this machine is : %ld ", sizeof(long double));
    printf("size of LONG LONG on this machine is : %ld ", sizeof(long long));
    printf("size of SHORT on this machine is : %ld ", sizeof(short));
    printf("===============================================\n");
    printf("the max value of an INT on this machine is : %d ", INT_MAX);
    printf("\n\t unsigned : %u \n", UINT_MAX);
    printf("the min value of an INT on this machine is : %d ", INT_MIN);
    printf("\n\t unsigned : %u \n", 0);
    printf("the max value of a SHORT on this machine is : %d ", SHRT_MAX);
    printf("\n\t unsigned : %u \n", USHRT_MAX);
    printf("the min value of a SHORT on this machine is : %d ", SHRT_MIN);
    printf("\n\t unsigned : %u \n", 0);
    printf("the min value of a LONG on this machine is : %ld ", LONG_MIN);
    printf("\n\t unsigned : %u \n", 0);
    printf("the max value of a LONG on this machine is : %ld ", LONG_MAX);
    printf("\n\t unsigned : %lu \n", ULONG_MAX);

    return 0;
}
