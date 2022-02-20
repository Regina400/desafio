#include <cs50.h>
#include <stdio.h>

int main ()
{ 
    int stairs = get_int("Height: ");
    whaile(!(stairs >= 1 && stairs <= 6))
    stairs = get_int("Height: ");
    for(int i = 0; i < stairs; i++) {

    for(int j = stairs; j > i + 1; j--) {
        printf("");
    }

    for(int j = 0; j <= i; j++) {
        printf("*");
    }
        printf("\n");  
}