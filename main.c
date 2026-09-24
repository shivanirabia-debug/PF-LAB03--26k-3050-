#include <stdio.h>
#include <string.h>
int main() {
    int age;
    char name[100];
    printf("Enter your name: \n");
    scanf("%s",&name);
    printf("Enter your age: \n");
    scanf("%d",&age);
    printf("Hello %s you are %d years old\n",name,age);


}