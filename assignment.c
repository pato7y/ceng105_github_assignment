 #include <stdio.h>
#include <math.h>

int main(){
    printf("Hello\n");
    //the program that finds the distance between two points

    float x1, y1, x2, y2, gdistance;
    printf("Input first points x coordinate: ");
    printf("Input first points x1 coordinate: ");
    scanf("%f", &x1);
    printf("Input first points y coordinate: ");
    //to check the value of x1
    printf("Input first points y1 coordinate: ");
    scanf("%f", &y1);
    // to check the value of y1
    printf("Input second points x coordinate: ");
    scanf("%f", &x2);
    printf("Input second points y coordinate: ");
    scanf("%f", &y2);
    gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("Distance between the said points: %.4f", sqrt(gdistance));
    printf("\n");

    return 0;

}