#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 0.15 
#define TAXRATE_450 0.20 
#define TAXRATE_REST 0.25
#define OVERTIME 40 


int main()
{
    unsigned int hours = 0;
    double gross_pay = 0.0;
    double taxes = 0.0;
    double net_pay = 0.0;

    printf("Nhap so gio: ");
    scanf("%u", hours);

    if (hours <= 40)
        gross_pay = hours * PAYRATE;
    else
    {
        gross_pay = 40 * PAY_RATE;
        double overtime_pay = (hours - 40) * (PAYRATE * 1.5);
        gross_pay += overtime_pay;
    }

    if (gross_pay <= 300)
    {
        taxes = gross_pay * TAXRATE_300;
    }
    else if (gross_pay > 300 && gross_pay <= 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (gross_pay - 300) * TAXRATE_450;
    }
    else if (gross_pay > 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_450; 
        taxes += (gross_pay - 450) * TAXRATE_REST;
    }

    net_pay = gross_pay - taxes;

    printf("Your gross pay this week is: %.2f\n", gross_pay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", net_pay);

    return 0;
}