#include<stdio.h>

void myFunction(char name[], int age){
    printf("%s.%d\n", name, age);
}

    int main() {
    char r;
        printf ("Enter Name: " ) ;
        scanf ("%c", &r) ;
        // printf ("Name = %s\n");
    int k;
        printf ("Enter Age: " ) ;
        scanf ("%d", &k) ;
    // int old;
    // scanf ("%d", &old);
    if (k <= 50) {
        printf("Just a kid");
    } else if (k >= 50){
        printf("Danm old man");
    } else {
        printf("try again");
    }
}
    
// char array = %s
// int array = %d