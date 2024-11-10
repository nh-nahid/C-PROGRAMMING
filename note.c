// Basic C

#include <stdio.h>

int main(){
    printf("hello world");
    return 0;
}

// Different %

#include <stdio.h>

int main(){
    int age = 21;
    double pi = 3.14;
    char star = 'N';

    printf("My age %d \n" , age);
    printf("The value of pi is %f \n" , pi);
    printf("First character of my name is %c \n" , star);

    return 0;
}


// Summation

#include <stdio.h>

int main(){
   
   int a,b;
   printf("Enter first number:");
   scanf("%d", &a);

   printf("Enter second number:");
   scanf("%d", &b);

   printf("Summation of these number is: %d", a + b);

    return 0;
}

// Area calculation of a square & circle

#include <stdio.h>

int main(){
    int side;
    printf("Enter the side of square: ");
    scanf("%d", &side);

    printf("The area is: %d \n", side * side);

    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("Area of the circle is: %f", 3.14 * radius * radius);

    return 0;
    
}