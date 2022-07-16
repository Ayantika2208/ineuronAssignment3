/*Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>
int main()
{
 float cp,sp,profit,loss,p_percentage,l_percentage;
 printf("Enter the cost price and the selling price of the product:");
 scanf("%f %f",&cp,&sp);
 if(sp>cp)
 {
    printf("Profit");
    profit=sp-cp;
    p_percentage = ((profit/cp)*100);
    printf("\nProfit percentage = %0.2f",p_percentage);
   
 }
 else{
    printf("Loss");
    loss = cp-sp;
    l_percentage=((loss/cp)*100);
    printf("\nLoss percentage = %0.2f",l_percentage);
 }
 return 0;
}
