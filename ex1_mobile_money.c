/* Name: JAKIRA JUMA FAHAD */
/* Student Number: 25/U/BIO/01374/PD */

#include <stdio.h>

int main(void)
{
     double amount, fee_percent, fee_amount, total_deducted;
     //Inputs from the user
    printf("Enter amount to send ");
    scanf("%lf",&amount);
    printf("Enter fee_percent (%%):");
    scanf("%lf",&fee_percent);
     //Calculate fee amount
    fee_amount=(fee_percent/100)*amount;

    //Displays the calculated value of the amount
    printf("Fee Amount   %.2f\n", fee_amount);
//Amount deducted is calculated by the formula
    total_deducted=amount+fee_amount;
     printf("Total Amount Deducted:%.2f\n", total_deducted);

    return 0;
}
