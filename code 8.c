

int main() {
    char operator;
    double num1, num2, result;

    // Ask user for the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to clear the input buffer

    // Ask user for the two operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch case to handle the arithmetic operations
    switch (operator) {

        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            break;

        default:
            printf("Error! '%c' is an invalid operator.\n", operator);
            break;
    }

    return 0;
}
