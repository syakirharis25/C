#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){

    int index = 6;
    do {
        printf("%d\n", index);
        index++;
    } while(index <= 5);

    return 0;
}
