#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    int rolln;
    printf("Enter name and roll number: \n");
    scanf("%s%d",&name,&rolln);
    printf("Name:%s\n",name);
    printf("Roll Number:%d\n",rolln);
    printf("\t tabbed line");
    printf("\n new line");
}
