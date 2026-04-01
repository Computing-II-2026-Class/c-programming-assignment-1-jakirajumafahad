/* Name: JAKIRA JUMA FAHAD */
/* Student Number: 25/U/BIO/01374/PD */

#include <stdio.h>

int main(void)
{
   
int units;
float cost_per_unit,total_bill;

 /*Get the input from the user*/
printf("Enter units consumed ");
scanf("%d", &units);

printf("Enter cost per unit ");
scanf("%f", &cost_per_unit);

 /*Calculates the total bill*/
total_bill = (units * cost_per_unit);

  //Display Result
printf("\nTotal bill: %.2f UGX\n",total_bill);


    return 0;
}
