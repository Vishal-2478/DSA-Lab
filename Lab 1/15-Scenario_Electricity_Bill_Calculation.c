/*
Q15. Scenario – Electricity Bill Calculation
Scenario: A company charges electricity bill as:
• For first 100 units: ₹5/unit
• Next 100 units: ₹7/unit
• Above 200 units: ₹10/unit
 */

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of units: ");
    scanf("%d", &n);
    int bill = 0;
    if (n <= 100)
    {
        bill = n * 5;
    }
    else if (n >= 100 && n <= 200)
    {
        bill = (100 * 5) + ((n - 100) * 7);
    }
    else if (n > 200)
    {
        int prevoiusUnitsBill = (100 * 5) + (100 * 7);
        bill = prevoiusUnitsBill + (n - 200) * 10;
    }
    printf("Bill: %d", bill);
}