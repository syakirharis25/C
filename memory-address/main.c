#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 30;
    int * pAge = &age;

    printf("age's memory address: %p\n", &age);

    return 0;
}
