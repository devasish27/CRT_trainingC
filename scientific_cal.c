#include <stdio.h>
#include <math.h>


int main() {
    int choice;
        printf("\nScientific Calculator:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Trigonometric Functions\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                power();
                break;
            case 6:
                squareRoot();
                break;
            case 7:
                trigonometric();
                break;
            case 8:
                printf("Exiting the calculator. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option from the menu.\n");
                break;
        }

    return 0;
}

void add() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2f\n", a + b);
}

void subtract() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2f\n", a - b);
}

void multiply() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2f\n", a * b);
}

void divide() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void power() {
    double base, exp;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exp);
    printf("Result: %.2f\n", pow(base, exp));
}

void squareRoot() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num >= 0) {
        printf("Result: %.2f\n", sqrt(num));
    } else {
        printf("Error: Square root of a negative number is not defined in real numbers.\n");
    }
}

void trigonometric() {
    int ch;
    double angle, result;
    printf("Trigonometric Functions Menu:\n");
    printf("1. Sine\n");
    printf("2. Cosine\n");
    printf("3. Tangent\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    // Convert angle to radians
    angle = angle * M_PI / 180.0;

    switch (ch) {
        case 1:
            result = sin(angle);
            printf("Result (sin): %.2f\n", result);
            break;
        case 2:
            result = cos(angle);
            printf("Result (cos): %.2f\n", result);
            break;
        case 3:
            result = tan(angle);
            printf("Result (tan): %.2f\n", result);
            break;
        default:
            printf("Invalid choice. Please select a valid trigonometric function.\n");
            break;
    }
}
