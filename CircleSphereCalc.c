#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main () 
{
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double pi = 3.14159;
    char shape[50] = "";
    char measurement[50] = "";
    char choice[10] = "";
    char newMeasurement [50] = "";

    printf("This program calculates the area, surface area, and volume of a sphere/circle! \n");
    printf("Please enter the radius: ");
    scanf("%lf", &radius);

    printf("Please enter the unit of measurement (cm, in): ");
    scanf("%s", measurement);

    printf("Is this a circle or a sphere? ");
    scanf("%s", shape);

    printf("Would you like to change the measurement? (yes/no)");
    scanf("%s", choice);
    
    if(strcmp(choice, "yes") == 0 || strcmp(choice, "Yes") == 0 || strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0 ||strcmp(choice, "YES") == 0)
    {   
        if(strcmp(measurement, "cm") == 0 || strcmp(measurement, "CM") == 0 || strcmp(measurement, "Cm") == 0)
        {
            strcpy(newMeasurement, "in");
            radius = radius / 2.54;
            strcpy(measurement, newMeasurement);
            
            if(strcmp(shape, "c") == 0 || strcmp(shape, "circle") == 0  || strcmp(shape, "Circle") == 0  || strcmp(shape, "C") == 0 || strcmp(shape, "CIRCLE") == 0 )
           {
            area = pi * pow(radius, 2);
            printf("The area of the circle is: %.2lf%s\n", area, measurement);
            printf("There is no surface area, as it a 2d object.\n");
            printf("There is no volume, as it a 2d object.\n");
           }
           else if (strcmp(shape, "S") == 0 || strcmp(shape, "s") == 0 || strcmp(shape, "sphere") == 0 || strcmp(shape, "Sphere") == 0 || strcmp(shape, "SPHERE") == 0 )
           {
            surfaceArea = 4 * pi * pow(radius, 2);
            volume = (4.0/3.0) * pi * pow(radius, 3);
            printf("The area/surface area of the sphere is: %.2lf%s\n", surfaceArea, measurement);
            printf("The volume of the sphere is: %.2lf%s\n", volume, measurement);
           }
           else
           {
           printf("Invalid input, please enter either circle or sphere. \n");
           return 1;
           }


        } else if(strcmp(measurement, "in") == 0 || strcmp(measurement, "IN") == 0 || strcmp(measurement, "In") == 0)
        {
            strcpy(newMeasurement, "cm");
            radius = radius * 2.54;
            strcpy(measurement, newMeasurement);
            
            if(strcmp(shape, "c") == 0 || strcmp(shape, "circle") == 0  || strcmp(shape, "Circle") == 0  || strcmp(shape, "C") == 0 || strcmp(shape, "CIRCLE") == 0 )
           {
            area = pi * pow(radius, 2);
            printf("The area of the circle is: %.2lf%s\n", area, measurement);
            printf("There is no surface area, as it a 2d object.\n");
            printf("There is no volume, as it a 2d object.\n");
           }
           else if (strcmp(shape, "S") == 0 || strcmp(shape, "s") == 0 || strcmp(shape, "sphere") == 0 || strcmp(shape, "Sphere") == 0 || strcmp(shape, "SPHERE") == 0 )
           {
            surfaceArea = 4 * pi * pow(radius, 2);
            volume = (4.0/3.0) * pi * pow(radius, 3);
            printf("The area/surface area of the sphere is: %.2lf%s\n", surfaceArea, measurement);
            printf("The volume of the sphere is: %.2lf%s\n", volume, measurement);
           }
           else
           {
           printf("Invalid input, please enter either circle or sphere. \n");
           return 1;
           }


        }
        
    } else if(strcmp(choice, "no") == 0 || strcmp(choice, "No") == 0 || strcmp(choice, "N") == 0 || strcmp(choice, "n") == 0 || strcmp(choice, "NO") == 0)
    {
        printf("Continuing with the original measurement of %s! \n", measurement);
        if(strcmp(shape, "c") == 0 || strcmp(shape, "circle") == 0  || strcmp(shape, "Circle") == 0  || strcmp(shape, "C") == 0 || strcmp(shape, "CIRCLE") == 0 )
    {
        area = pi * pow(radius, 2);
        printf("The area of the circle is: %.2lf%s\n", area, measurement);
        printf("There is no surface area, as it a 2d object.\n");
        printf("There is no volume, as it a 2d object.\n");

    }
    else if (strcmp(shape, "S") == 0 || strcmp(shape, "s") == 0 || strcmp(shape, "sphere") == 0 || strcmp(shape, "Sphere") == 0 || strcmp(shape, "SPHERE") == 0 )
    {
        surfaceArea = 4 * pi * pow(radius, 2);
        volume = (4.0/3.0) * pi * pow(radius, 3);
        printf("The area/surface area of the sphere is: %.2lf%s\n", surfaceArea, measurement);
        printf("The volume of the sphere is: %.2lf%s\n", volume, measurement);
    }
    else
    {
        printf("Invalid input, please enter either circle or sphere. \n");
        return 1;
    }
    } else
    {
        printf("Invalid input, please enter either yes or no. \n");
        return 1;
    }

    return 0;
}