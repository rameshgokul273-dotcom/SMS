#include <stdio.h>
#define PI 3.14159
int main(){
    printf("The value of PI is:%.2f\n",PI);
    float radius;
    scanf("%f",&radius);
    printf("The area is:%.2f\n", PI*radius*radius);
    printf("The perimeter is:%.2f",2*PI*radius);
    return 0;
}