/*Menu-driven program using Switch case*/
#include<stdio.h>

int input();
void output(float);
int pie = 3.14159;

int main()
{
    float result;
    int choice, num;
    printf("\nPress 1 to calculate area of circle \n");
    printf("Press 2 to calculate area of square \n");
    printf("Press 3 to calculate area of sphere \n");
    printf("\nEnter your choice: \n");
    choice = input();

    switch (choice)
    {
        case 1:
        {
            printf("Enter radius: \n");
            num = input();
            result = pie * num * num;
            printf("Area of circle= \n");
            output(result);
            break;
        }

        case 2:
        {
            printf("Enter side of square: \n");
            num = input();
            result = num * num;
            printf("Area of square= \n");
            output(result);
            break;
        }

        case 3:
        {
            printf("Enter radius: \n");
            num = input();
            result = 4 * (pie * num * num);
            printf("Area of sphere= \n");
            output(result);
            break;
        }

        default:
            printf("\n ##WRONG INPUT## \n");
    }
        return 0;
}

int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}

void output(float number)
{
    printf("%f \n", number);
}