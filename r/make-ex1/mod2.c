#include <stdio.h>
#include "mod1.h"
#include "mod2.h"

void mod2_func() {
    printf("Inside module 2\n");
    mod1_func();
}
