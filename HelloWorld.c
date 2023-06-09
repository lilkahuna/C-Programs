//standard I/O
#include <stdio.h>

char name[] = "Brodie";
// this creates a pointer
int* ptr = &name;

// void basically means no return value
void myFunction(int age){
    // %p is a format specifyer for pointers
    printf("Memory address: %p", ptr);
}

int main(){
    // %s is a format specifyer
    printf("%s\n", name);
    myFunction(10);
}

