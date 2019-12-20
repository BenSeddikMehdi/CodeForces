#include <stdio.h>
#include "CommonNumber1271E.h"

int main() {
    /* First argument of the CommonFunction must be >= of the second argument*/
    uint32_t d = commonNumber(1000000, 100);
    printf("d = %d\n", d);
    return 0;
}