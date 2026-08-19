// Scientefic Calculator
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
void print_menu();
int fac(int a)
{
    int f1 = 1;
    if (a > 1)
    {
        return a * fac(a - 1);
    }
    else
    {
        return a;
    }
}
int main()
{
    int ch;
    float a = 0, b = 0;
    while (1)
    {
        print_menu();
        scanf("%d", &ch);
        switch (ch)
        {

        case 0: // Absolute
        {
            float n0;
            printf("Enter a number = ");
            scanf("%f", &n0);
            if (n0 < 0)
            {
                float v0 = n0 * (-1);
                printf("The Absolute value of [%0.2f] is %0.2f\n", n0, v0);
            }
            else
            {
                printf("The Absolute value of [%0.2f] is %0.2f\n", n0, n0);
            }
            break;
        }
        case 2: // Addition
        {
            printf("ADDITION\n");
            printf("Enter 1st number = ");
            scanf("%f", &a);
            printf("Enter 2nd  number = ");
            scanf("%f", &b);
            printf("The sum of %0.2f and %0.2f is = %0.2f", a, b, a + b);
            break;
        }

        case 3: // Subtraction
        {
            printf("SUBTRACTION\n");
            printf("Enter 1st number = ");
            scanf("%f", &a);
            printf("Enter 2nd  number = ");
            scanf("%f", &b);
            printf("The difference between %0.2f and %0.2f is = %0.2f", a, b, a - b);
            break;
        }

        case 4: // Advance Addition/Subtraction
        {
            printf("ADVANCE ADDITION / SUBTRACTION\n");
            int n;
            float sum = 0;
            printf("Enter number of items = ");
            scanf("%d", &n);
            float arr[n];
            for (int i = 0; i < n; i++)
            {
                scanf("%f", &arr[i]);
                sum += arr[i];
            }
            printf("The sum of %d items is = %0.2f", n, sum);
            break;
        }

        case 5: // Multiplication
        {
            printf("MULTIPLICATION\n");
            printf("Enter 1st number = ");
            scanf("%f", &a);
            printf("Enter 2nd  number = ");
            scanf("%f", &b);
            printf("The product of %0.2f and %0.2f is = %0.2f", a, b, a * b);
            break;
        }

        case 6: // Division
        {
            printf("DIVISION\n");
            printf("Enter 1st number = ");
            scanf("%f", &a);
            printf("Enter 2nd  number = ");
            scanf("%f", &b);
            if (b == 0)
            {
                printf("Math Error");
                return 0;
            }
            else
            {
                printf("The Division (Quotient) of %0.2f and %0.2f is = %0.2f", a, b, a / b);
            }
            break;
        }

        case 7: // Power
        {
            printf("POWER\n");
            printf("Enter number = ");
            scanf("%f", &a);
            printf("Enter exponent/power/indices = ");
            scanf("%f", &b);
            printf("The Power is = %0.2f", pow(a, b));
            break;
        }

        case 8: // Square root
        {
            printf("SQUARE ROOT\n");
            printf("Enter number = ");
            scanf("%f", &a);
            printf("The Square root is = %0.2f", sqrt(a));
            break;
        }

        case 9: // Factorial
        {
            printf("FACTORIAL\n");
            int fact = 1;
            int n;
            printf("Enter the number for Fctorial = ");
            scanf("%d", &n);
            printf("The Factorial of %d is = %d", n, fac(n));
            break;
        }

        case 10: // Trigonometry
        {
            printf("TRIGONOMETRY\n");
            float a;
            char ch9;
            printf("Enter the angle = ");
            scanf("%f", &a);
            float angle = a * PI / 180; // angle to radian
            printf("Enter A for sin\n");
            printf("Enter B for cos\n");
            printf("Enter C for tan\n");
            printf("Enter D for cot\n");
            printf("Enter E for sec\n");
            printf("Enter F for cosec\n");
            scanf(" %c", &ch9);
            switch (ch9)
            {
            case 'A': // sin θ
            {
                printf("sin%c\n", 233);
                printf("sin(%0.2f) = %0.4f\n", a, sin(angle));
                break;
            }

            case 'B': // cos θ
            {
                printf("cos%c\n", 233);
                printf("cos(%0.2f)=%0.4f\n", a, cos(angle));
                break;
            }

            case 'C': // tan θ
            {
                printf("tan%c\n", 233);
                int b = (int)a;

                if (b % 180 == 90) // tan undefined at 90, 270, 450...
                {
                    printf("Value not defined\n");
                    return 0;
                }
                else
                {
                    printf("tan(%0.2f) = %0.4f\n", a, tan(angle));
                }
                break;
            }
            case 'D': // cot θ
            {
                printf("cot%c\n", 233);
                int b = (int)a;
                if (b % 180 == 0 || b % 180 == 180)
                {
                    printf("Value not defined\n");
                    return 0;
                }
                else
                {
                    printf("cot(%0.2f) = %0.4f\n", a, 1 / tan(angle));
                }
                break;
            }

            case 'E': // sec θ
            {
                printf("sec%c\n", 233);
                int b = (int)a;
                if (b % 180 == 90)
                {
                    printf("Value not defined\n");
                    return 0;
                }
                else
                {
                    printf("sec(%0.2f) = %0.4f\n", a, 1 / cos(angle));
                }
                break;
            }

            case 'F': // cosec θ
            {
                printf("cosec%c\n", 233);
                int b = (int)a;
                if (b % 180 == 0 || b % 180 == 180)
                {
                    printf("Value not defined\n");
                    return 0;
                }
                else
                {
                    printf("cosec(%0.2f) = %0.4f\n", a, 1 / sin(angle));
                }
                break;
            }

            default:
            {
                printf("INVALID INPUT");
                break;
            }
            }
            break;
        }

        case 11: // Inverse Trigonometry
        {
            char ch10;
            printf("Enter A for Sin inverse\n");
            printf("Enter B for Cos inverse\n");
            printf("Enter C for Tan inverse\n");
            printf("Enter D for Cot inverse\n");
            printf("Enter E for Sec inverse\n");
            printf("Enter F for Cosec inverse\n");
            scanf(" %c", &ch10);
            switch (ch10)
            {
            case 'A': // Sin Inverse
            {
                float s1; // for sin inverse
                printf("Enter the Domain between -1 and 1 = ");
                scanf("%f", &s1);
                if (!(s1 >= -1 && s1 <= 1))
                {
                    printf("Input Domain is not in range");
                    return 0;
                }
                float vs1 = asin(s1);
                float vs2 = vs1 * 180 / PI; // Radian to angle
                printf("The value of sin inverse at %0.2f is %0.4f%c", s1, vs2, 248);
                break;
            }

            case 'B': // Cos Inverse
            {
                float c1; // for cos inverse
                printf("Enter the Domain between -1 and 1 = ");
                scanf("%f", &c1);
                if (!(c1 >= -1 && c1 <= 1))
                {
                    printf("Input Domain is not in range");
                    return 0;
                }
                float vc1 = acos(c1);
                float vc2 = vc1 * 180 / PI; // Radian to angle
                printf("The value of cos inverse at %0.2f is %0.4f%c", c1, vc2, 248);
                break;
            }

            case 'C': // Tan Inverse
            {
                float t1;
                printf("Enter the Domain in real numbers = ");
                scanf("%f", &t1);
                float vt1 = atan(t1);
                float vt2 = vt1 * 180 / PI; // Radian to angle
                printf("The value of tan inverse at %0.2f is %0.4f%c", t1, vt2, 248);
                break;
            }

            case 'D': // Cot Inverse
            {
                float cot1;
                printf("Enter the Domain in real numbers = ");
                scanf("%f", &cot1);
                float vcot1 = (PI / 2) - atan(cot1);
                float vcot2 = vcot1 * 180 / PI; // Radian to angle
                printf("The value of cot inverse at %0.2f is %0.4f%c", cot1, vcot2, 248);
                break;
            }

            case 'E': // Sec Inverse
            {
                float se1;
                printf("Enter the domain excluding values between -1 and 1 = ");
                scanf("%f", &se1);
                if (se1 > -1 && se1 < 1)
                {
                    printf("Input Domain is not in range");
                    return 0;
                }
                float vse1 = acos(1 / se1);
                float vse2 = vse1 * 180 / PI; // Radian to angle
                printf("The value of sec inverse at %0.2f is %0.4f%c", se1, vse2, 248);
                break;
            }

            case 'F': // Cosec Inverse
            {
                float cs1;
                printf("Enter the domain excluding values between -1 and 1 = ");
                scanf("%f", &cs1);
                if (cs1 > -1 && cs1 < 1)
                {
                    printf("Input Domain is not in range");
                    return 0;
                }
                float vcs1 = asin(1 / cs1);
                float vcs2 = vcs1 * 180 / PI; // Radian to angle
                printf("The value of sec inverse at %0.2f is %0.4f%c", cs1, vcs2, 248);
                break;
            }

            default:
            {
                printf("INVALID CHOICE");
                break;
            }
            }
            break;
        }
        case 12: // log
        {
            char ch11;
            printf("Enter A for Natural log[loge]\n");
            printf("Enter B for Common log[log10]\n");
            printf("Enter C for General log\n");
            scanf(" %c", &ch11);
            switch (ch11)
            {
            case 'A': // Natural Log[loge]
            {
                printf("NATURAL LOG\n");
                float a11;
                printf("Enter a positive number greater than 0 = ");
                scanf("%f", &a11);
                if (a11 <= 0)
                {
                    printf("log is undefined");
                }
                float v11a = log(a11);
                printf("Natural log of %0.2f is %0.4f\n", a11, v11a);
                break;
            }

            case 'B': // Common log[log10]
            {
                printf("COMMON LOG\n");
                float b11;
                printf("Enter a positive number greater than 0 = ");
                scanf("%f", &b11);
                if (b11 <= 0)
                {
                    printf("log is undefined");
                }
                float v11b = log10(b11);
                printf("Common log of %0.2f is %0.4f\n", b11, v11b);
                break;
            }

            case 'C': // General log
            {
                printf("GENERAL LOG\n");
                float c11, bc11;
                printf("Enter a positive number greater than 0 = ");
                scanf("%f", &c11);
                printf("Enter the base = ");
                scanf("%f", &bc11);
                float v11c = log(c11) / log(bc11);
                printf("General log Base %f of %0.2f is %0.4f\n", bc11, c11, v11c);
                break;
            }

            default:
            {
                printf("INVALID CHOICE");
                break;
            }
            }
            break;
        }

        case 13:
        {
            char ch12;
            printf("Enter A for Base_10 Exponent\n");
            printf("Enter B for Base_e Exponent\n");
            printf("Enter C for General Base Exponent\n");

            scanf(" %c", &ch12);
            switch (ch12)
            {

            case 'A': // Base_10 exponent
            {
                printf("BASE_10 EXPONENT\n");
                float a12;
                printf("Enter the Exponent = ");
                scanf("%f", &a12);
                float v12a = pow(10, a12);
                printf("Base_10 Eponent of 10^%0.2f = %f", a12, v12a);
                break;
            }

            case 'B': // Base_e exponent
            {
                printf("BASE_e EXPONENT\n");
                float b12;
                printf("Enter the Exponent = ");
                scanf("%f", &b12);
                float v12b = exp(b12);
                printf("Base_e Exponent of 10^%0.2f = %f", b12, v12b);
                break;
            }

            case 'C': // General Base Exponent
            {
                printf("GENERAL BASE EXPONENT\n");
                float c12, bc12;
                printf("Enter the Exponent = ");
                scanf("%f", &c12);
                printf("Enter the Base = ");
                scanf("%f", &bc12);
                float v12c = pow(bc12, c12);
                printf("General Exponent = %0.2f^%0.2f = %f", bc12, c12, v12c);
                break;
            }
            default:
            {
                printf("INVALID CHOICE");
                break;
            }
            }
            break;
        }

        case 14: // Combination
        {
            int n13, p13, f1 = 1, f2 = 1, f3 = 1;
            float comb = 0; // combination
            printf("Enter n = ");
            scanf("%d", &n13);
            printf("Enter p = ");
            scanf("%d", &p13);
            if (!(n13 >= p13))
            {
                printf("p is greater than n");
                return 0;
            }
            f1 = fac(n13);
            f2 = fac(n13 - p13);
            f3 = fac(p13);
            comb = f1 / (f2 * f3);
            printf("The Combination is = %0.2f", comb);
            break;
        }

        case 15: // Permutation
        {
            int n14, p14, f1 = 1, f2 = 1;
            float perm = 0; // permutation
            printf("Enter n = ");
            scanf("%d", &n14);
            printf("Enter p = ");
            scanf("%d", &p14);
            if (!(n14 >= p14))
            {
                printf("p is greater than n");
                return 0;
            }
            f1 = fac(n14);
            f2 = fac(n14 - p14);
            perm = f1 / f2;
            printf("The Permutation is = %0.2f", perm);
            break;
        }

        default:
        {
            printf("INVALID CHOICE");
            break;
        }
        }
    }
    return 0;
}

void print_menu()
{
    printf("MENU FOR SCIENTIFIC CALCULATOR :-\n");
    printf("1. Absolute number\n");
    printf("2. Addition\n");
    printf("3. Subtraction\n");
    printf("4. Advance Addition\n");
    printf("5. Multiplication\n");
    printf("6. Division\n");
    printf("7. Power\n");
    printf("8. Square root\n");
    printf("9. Factorial\n");
    printf("10. Trigonometry\n");
    printf("11. Inverse Trigonometry\n");
    printf("12. log\n");
    printf("13. Anti log(Exponent)\n");
    printf("14. Combination\n");
    printf("15. Permutation\n");
    printf("0. EXIT\n");
}
