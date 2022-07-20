/*Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/
#include<stdio.h>
int main()
{
    float a,b,c;//sides of a triangle
    printf("Enter the 3 sides of a triangle : ");
    scanf("%f %f %f",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
    {
        printf("The triangle is valid");

    }
    else
        printf("The traiangle is not vaild");
    return 0;
}
