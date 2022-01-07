#include <stdio.h>
int main()
{
    int userInput = 0, radius_Length = 0, breadth = 0;
    float area = 0.0f;
    printf("enter 11 to check Area of Circle\n");
    printf("enter 22 to check Area of Rectangle\n");
    printf("enter 33 to check Area of Square\n");
    printf("enter 44 to check Area of Trianglen\n");

    printf("Enter your choice ");
    scanf("%d", &userInput);
    switch (userInput)
    {
    case 11:
        printf("Enter the radius value ");
        scanf("%d", &radius_Length);
        area = 3.14 * radius_Length * radius_Length;

        printf("The Area of the Circle is %4.2f ", area);

        break;
    case 22:
        printf("Enter the Length value ");
        scanf("%d", &radius_Length);
        printf("Enter the breadth value ");
        scanf("%d", &breadth);
        area = radius_Length * breadth;
        printf("The Area of the  Rectangle  is %4.2f",area);

        break;
    case 33:
         printf("Enter the side value ");
        scanf("%d", &radius_Length);
     
        area = 4*(radius_Length);
        printf("The Area of the  Rectangle  is %4.2f",area);

        break;
    case 44:
         printf("Enter the height value ");
        scanf("%d", &radius_Length);
        printf("Enter the base value ");
        scanf("%d", &breadth);
        area = 0.5*radius_Length*breadth;
        printf("The Area of the  Rectangle  is %4.2f",area);

        break;

    default:
        printf("enter any valid input ");
        break;
    }
    return 0;
}