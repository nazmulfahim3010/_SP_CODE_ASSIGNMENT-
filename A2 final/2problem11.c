#include<stdio.h>
int main ()
{int buy ,sell;
scanf ("%d %d",&buy,&sell);
if (buy>sell)
{
  int loss = buy - sell;
    printf("loss of %d",loss);
}
else if (sell>buy)
{
    int profit = sell - buy;
    printf("profit of %d ",profit);

}

    return 0;
}/*Write a program that takes the cost price and selling price of an item as input and calculates the profit or loss. If there is a profit, print the amount of profit. Else if there’s loss, print the amount of loss. Otherwise print No Profit or Loss.
						
Input: 100 120
Output: Profit of 20

Input: 150 80
Output: Loss of 70
*/