#include<stdio.h>
#include<math.h>
int main(){
int n;
char ch;
float celsius, fahrenheit;
int a, b, c, smallest;
printf("1. check char, dig, sp ch \n 2. convert temp \n 3. small among 3");
scanf("%d",&n);
switch(n){
    case 1:
                printf("Enter a character: ");
                scanf(" %c", &ch);  
                if (ch >= '0' && ch <= '9') {
                    printf("It is a digit.\n");
                } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                    printf("It is an alphabet character.\n");
                } else {
                    printf("It is a special character.\n");
                }
                break;

            case 2:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &celsius);
                fahrenheit = (celsius * 9 / 5) + 32;
                printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
                break;

            case 3:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &c);
                smallest = a;
                if (b < smallest) smallest = b;
                if (c < smallest) smallest = c;
                printf("The smallest number is: %d\n", smallest);
                break;

            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
}
return 0;
}