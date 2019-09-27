#include <stdio.h>
#include "helper.h"

int main(void) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("ave: %d\n", ave(arr, 10));

    char* s = "hahahahahaha";
    printf("len of '%s': %d\n", s, slen(s));


    int b[10];
    print_inta(arr, 10);
    print_inta(b, 10);
    arrcopy(arr, b, 10);
    print_inta(b, 10);


    return 0;

}
