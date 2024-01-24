#include<stdio.h>

void myFunction(char name[], int age){
    printf("Hello %s.You are %d\n", name, age);
}

int main() {
    char r;
    printf ("Enter Name: \n");
    scanf ("%s", &r) ;
    int k;
    printf ("Enter Age: " );
    scanf ("%d", &k) ;

    if (k <= 50) {
       printf("Hello %c.You are %d Just a kid.\n", r, k);
    } else if (k >= 50){
       printf("Hello %c.You are %d Danm old man.\n", r, k);
    } else {
        printf("try again");
    }
}
    
// char array = %s
// int array = %d