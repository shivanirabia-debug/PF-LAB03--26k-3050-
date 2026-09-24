#include <stdio.h>
int main() {
    int x,y;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&x,&y);
    int sum=x+y;
    int difference=x-y;
    int product=x*y;
    float quotient=x/y;
    printf("sum:%d\n",sum);
    printf("difference:%d\n",difference);
    printf("product:%d\n",product);
    printf("quotient%d\n",quotient);
}
