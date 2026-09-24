#include <stdio.h>
int main() {
    float num;
    printf("Enter a number\n");
    scanf("%f",&num);
    printf("Your number with 2 decimal places %.2f\n",num);
    printf("Your number with 6 decimal places %.6f\n",num);
}
