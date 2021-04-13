#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    float area,radius,h,b,length,breadth;
    printf("\nenter 1 for finding Area of Circle .\n");
    printf("\nenter 2 for finding Area of Triangle .\n");
    printf("\nenter 3 for finding Area of Rectangle .\n");
    scanf("%d",&number);


    if(number==1){
            printf("Plz enter the amount of radius : ");
            scanf("%f",&radius);
     area = 3.14159*radius*radius;
     printf("the area of Circle is = %.2f\n",area);
    }
    if(number==2){
               printf("\n\nEnter the height of the Triangle: ");
                scanf("%f", &h);
                printf("\n\nEnter the base of the Triangle: ");
                scanf("%f", &b);

                area = (h*b)/2;
                printf("\nThe Area of the triangle is: %.2f\n", area);
    }
    if(number==3){
                 printf("\nEnter the Length of Rectangle : ");
                scanf("%f", &length);

                printf("\nEnter the Breadth of Rectangle : ");
                scanf("%f", &breadth);

                area = length * breadth;
                printf("\nArea of Rectangle is: %.2f \n\n", area);
    }


    return 0;
}
