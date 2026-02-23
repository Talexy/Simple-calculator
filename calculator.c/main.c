#include <stdio.h>
#include <math.h>   // for pow()
int main() {
    int choice;
    double a, b;
 while (1) {
        printf("\n--- Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7.Quadratic equation\n");
        printf("8.Square root\n");
        printf("9. Cubic\n");
        printf("10. ln\n");
        printf("11. Log base 10(log10)\n");
        printf("12. Exit\n");
        printf("Choose an operation (1-12): ");
        scanf("%d", &choice);

        if (choice == 12) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 6) {
            printf("Enter first number: ");
            scanf("%lf", &a);
            printf("Enter second number: ");
            scanf("%lf", &b);
            switch (choice) {
                case 1:
                    printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
                    break;
                case 2:
                    printf("Result: %.2lf - %.2lf = %.2lf\n", a, b, a - b);
                    break;
                case 3:
                    printf("Result: %.2lf * %.2lf = %.2lf\n", a, b, a * b);
                    break;
                case 4:
                    while (b == 0) {
                        printf("Division by zero is not allowed.\n");
                        printf("Please enter a non-zero number: ");
                        scanf("%lf", &b);
                    }
                    printf("Result: %.2lf / %.2lf = %.2lf\n", a, b, a / b);
                    break;
                case 5:
                    // modulus works only with integers
                    while ((int)b == 0) {
                        printf("Modulus by zero is not allowed.\n");
                        printf("Please enter a non-zero integer: ");
                        scanf("%lf", &b);
                    }
                    printf("Result: %d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
                    break;
                case 6:
                    printf("Result: %.2lf ^ %.2lf = %.2lf\n", a, b, pow(a, b));
                    break;
        }
}                else if (choice == 7){
                    //Quadratic equation
                    double a,b,c, discriminant, root1, root2,realPart,imagPart;
                    printf("Quadratic equation: ax^2+bx+c=0\n");
                    printf("Enter coefficients a,b,c:");
                    scanf("%lf %lf %lf", &a, &b, &c);
                    discriminant = b*b - 4*a*c;
                    if (discriminant >0){
                        root1=(-b+sqrt(discriminant))/(2*a);
                        root2=(-b-sqrt(discriminant))/(2*a);
                        printf("two real roots:%.2lf and %2lf\n",root1,root2);
                    }else if (discriminant==0){
                        root1=-b/(2*a);
                        printf("one real root: %.2lf\n",root1);
                    }else {
                         realPart=-b/(2*a);
                         imagPart=sqrt(-discriminant)/(2*a);
                         printf("complex roots: %.2lf + %.2lfi and %.2lf-%.2lfi\n",realPart,imagPart,realPart,imagPart);
                    }
                }
                else if (choice == 8){
                    //Square root
                     printf("Enter a number:");
                     scanf("%lf",&a);
                    if (a<0){
                    printf("square root of number is not real.\n");
                    printf("result:sqrt(%.2lf)=%.2lfi\n",a,sqrt(-a));
                    }else
                    {
                    printf("result:sqrt(%.2lf)=%.2lfi\n",a,sqrt(a));
                        }
                }
                else if (choice==9){
                    double a;
                    printf("Enter a number:");
                    scanf("%lf",&a);
                    printf("%.2lf cubed = %.2lf\n", a, a*a*a);
                }
                else if (choice==10){
                    printf("Enter a number:");
                    scanf("%lf",&a);
                    if(a>0){
                        printf("ln(%.2lf)=%.2lf\n",a,log(a));
                    }else{
                    printf("Natural log is undefined for zero and negative numbers.\n");
                    }
                }
                else if (choice==11){
                    printf("Enter a number:");
                    scanf("%lf",&a);
                    if (a>0){
                        printf("log10(%.2lf)= %.2lf\n",a,log10(a));
                    }else{
                    printf("log base 10 is undefined for zero and negative numbers.\n");
                    }
                }
            else{
            printf("Invalid choice. Please select a valid option.\n");
            }
    }

    return 0;
    }


