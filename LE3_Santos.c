#include <stdio.h>
#include <stdlib.h> // needed for system()

int main() {
    char name[50], section[20];
    double num1, num2;

    printf("Enter your complete name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your section: ");
    fgets(section, sizeof(section), stdin);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("\n=== Student Information ===\n");
    printf("Name   : %s", name);
    printf("Section: %s", section);

    printf("\n=== Arithmetic Operations ===\n");
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);

    if (num2 != 0)
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
    else
        printf("Division by zero is not allowed.\n");

    // 👇 Keeps window open until user presses a key
    system("pause");

    return 0;
}
