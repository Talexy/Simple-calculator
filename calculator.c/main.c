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
        printf("7. Percentage\n");
        printf("8.Quadratic equation\n");
        printf("9.Square root\n");
        printf("10. Cubic\n");
        printf("11. ln\n");
        printf("12. Log base 10(log10)\n");
        printf("13. Exit\n");
        printf("Choose an operation (1-13): ");
        if (scanf("%d", &choice) != 1){
            printf("Invalid input!Please input a number between 1-13.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 13) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 7) {
            printf("Enter first number: ");
          if (scanf("%lf", &a) != 1){
             printf("Invalid input!Please input a number.\n");
             while(getchar() != '\n');
             continue;
            }
            printf("Enter second number: ");
             if (scanf("%lf", &b) != 1){
                printf("Invalid input!Please input a number.\n");
                while(getchar() != '\n');
                continue;
             }
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
                case 7:
                    printf("Result: %.2lf",(a/100)*b);
                    break;
        }
}                else if (choice == 8){
                    //Quadratic equation
                    double a,b,c, discriminant, root1, root2,realPart,imagPart;
                    printf("Quadratic equation: ax^2+bx+c=0\n");
                    printf("Enter coefficients a,b,c:");
                   if (scanf("%lf %lf %lf", &a, &b, &c) != 1){
                      printf("Invalid input!Please input a number.\n");
                      while(getchar() != '\n');
                      continue;
                   }
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
                else if (choice == 9){
                    //Square root
                     printf("Enter a number:");
                    if (scanf("%lf",&a)!= 1){
                        printf("Invalid input!Please input a number.\n");
                        while (getchar() != '\n');
                        continue;
                    }
                    if (a<0){
                    printf("square root of number is not real.\n");
                    printf("result:sqrt(%.2lf)=%.2lfi\n",a,sqrt(-a));
                    }else
                    {
                    printf("result:sqrt(%.2lf)=%.2lfi\n",a,sqrt(a));
                        }
                }
                else if (choice==10){
                    double a;
                    printf("Enter a number:");
                   if (scanf("%lf",&a) != 1){
                    printf("Invalid input!Please input a number.\n");
                        while (getchar()!= '\n');
                        continue;
                   }
                    printf("%.2lf cubed = %.2lf\n", a, a*a*a);
                }
                else if (choice==11){
                    printf("Enter a number:");
                if (scanf("%lf",&a) != 1){
                    printf("Invalid input!Please input a number.\n");
                    while(getchar()!= '\n');
                    continue;
                }
                    if(a>0){
                        printf("ln(%.2lf)=%.2lf\n",a,log(a));
                    }else{
                    printf("Natural log is undefined for zero and negative numbers.\n");
                    }
                }
                else if (choice==12){
                    printf("Enter a number:");
                   if (scanf("%lf",&a)!= 1){
                    printf("Invalid input!Please input a number.\n");
                    while(getchar()!= '\n');
                    continue;
                   }
                    if (a>0){
                        printf("log10(%.lf)= %.2lf\n",a,log10(a));
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


