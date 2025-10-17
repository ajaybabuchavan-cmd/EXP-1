#include <stdio.h>
int main()
{
    float phy, chem, math, avg;

    printf("Enter marks in Physics: ");
    scanf("%f", &phy);

    printf("Enter marks in Chemistry: ");
    scanf("%f", &chem);

    printf("Enter marks in Mathematics: ");
    scanf("%f", &math);

    avg = (phy + chem + math) / 3;

    printf("\nAverage of PCM = %.2f\n", avg);

    (avg >= 50) ? printf("Eligible for admission.\n") : printf("Not eligible for admission.\n");

    return 0;
}