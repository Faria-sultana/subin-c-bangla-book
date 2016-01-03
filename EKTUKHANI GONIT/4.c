#include <stdio.h>

int main()
{
    double loan_amount,interest_rate,number_of_years,

    total_amount,monthly_amount;

    scanf("%lf",&loan_amount);

    scanf("%lf",&interest_rate);

    scanf("%lf",&number_of_years);

    total_amount=loan_amount+loan_amount*interest_rate/100.00;

    monthly_amount=total_amount/(number_of_years*12);

    printf("%0.2lf",total_amount);

    printf("%0.2lf",monthly_amount);

    return 0;
}
