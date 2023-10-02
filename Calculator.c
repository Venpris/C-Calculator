#include <stdio.h>
#include <math.h>

int main() {
    float value_one, value_two, result;
    char operator;

    while (1) { // Loops until EOF is input
        printf("Enter calculation:\n");
        int scan_result = scanf("%f %c %f", &value_one, &operator, &value_two);

        while ((ch = getchar()) != '\n' && ch != EOF); // Clear input buffer

        if (scan_result == EOF) {
            printf("Goodbye!");
            break;
        } else if (scan_result != 3) {
            printf("Input must have 3 arguments.\n\n");
            continue;
        }

        switch (operator) {
            case '+': result = value_one + value_two;
                break;

            case '-': result = value_one - value_two;
                break;

            case '*': result = value_one * value_two;
                break;

            case '/':
                if (value_two == 0) {
                    printf("Can't divide by zero.\n\n");
                    continue;
                }

                result = value_one / value_two;
                break;

            case '^': result = pow(value_one, value_two);
                break;

            default:
                printf("Invalid operator.\n");
                continue;
        }

        printf("%.9g %c %.9g = %.3g\n\n", value_one, operator, value_two, result);
    }

    return 0;
}