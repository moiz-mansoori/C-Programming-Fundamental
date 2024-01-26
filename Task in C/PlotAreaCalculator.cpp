//Write a C program (LandPlotAreaAnalysis.c) that calculates and analyzes the areas of given land plots.
// The program should determine and display the largest plot along with its area. The land plot data is provided in a multidimensional array, 
// and the area calculation involves specific geometric parameters for each plot

#include <stdio.h>
#include <math.h>

double calculateArea(double a, double b, double angle) {
    return 0.5 * a * b * sin(angle);
}
int main() {
    int numPlots = 6;
    double plots[numPlots][3];
    double data[][3] = {
        {137.4, 80.9, 0.78},
        {155.2, 92.62, 0.89},
        {149.3, 97.93, 1.35},
        {160.0, 100.25, 9.00},
        {155.6, 68.95, 1.25},
        {149.7, 120.0, 1.75}
    };

    for (int i = 0; i < numPlots; i++) {
        for (int j = 0; j < 3; j++) {
            plots[i][j] = data[i][j];
        }
    }

    double largestArea = 0;
    int largestPlotNo = 0;

    printf("Plot No.   Area\n");
    for (int i = 0; i < numPlots; i++) {
        double area = calculateArea(plots[i][0], plots[i][1], plots[i][2]);
        printf("%d         %.2lf\n", i + 1, area);

        if (area > largestArea) {
            largestArea = area;
            largestPlotNo = i + 1;
        }
    }
    printf("\nThe largest area is %.2lf in Plot No. %d\n", largestArea, largestPlotNo);

    return 0;
}










