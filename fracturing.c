//********************************************************
// fracturing.c
// Author: Fox Lowman
// UCFID: 5677936
// Class: COP 3223, Professor Parra
// Purpose: This program asks for points and prints
// distance, perimeter, area, width, and height.
// The main purpose of this assignment is to check my
// ability to use fracturing
// Input: point values
//
// Output: (to the command line) point values, distance, 
// perimeter, area, width, and height
// //********************************************************

//including libraries for printf(), scanf(), and fabs()
#include <stdio.h>
#include <math.h>

//defining pi as per the assignment stipulations
#define PI 3.14159

//defining my functions so I can call them in main
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

//defining my main function
int main(int argc, char **argv)
{
    //calling the required functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    //returning 0 for the autograder
    return 0;  
}

//this function calculates distance.
double calculateDistance()
{
    //asking for the first point
    double x1, x2, y1, y2;
    printf("input x1:\n");
    scanf(" %lf", &x1);
    printf("input y1:\n");
    scanf(" %lf", &y1);

    //printing the first point
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    
    //asking for the second point
    printf("input x2:\n");
    scanf(" %lf", &x2);
    printf("input y2:\n");
    scanf(" %lf", &y2);

    //printing the second point
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    //calculating the distance, I used fabs to get the absolute value of the answer as distance should be positive.
    double distance = fabs((y2-y1)/(x2-x1));

    //printing the distance calculated
    printf("The distance between the two points is %lf\n", distance);

    //returning the value for distance
    return distance;
}

//this function calculates the perimeter of a shape, assuming that shape is a quadrilateral and that inputs are valid.
double calculatePerimeter()
{
    //calling calculateDistance() four times to get inputs for the sides of the shape
    double line1 = calculateDistance();
    double line2 = calculateDistance();
    double line3 = calculateDistance();
    double line4 = calculateDistance();

    //calculating the perimeter
    double perimeter = line1 + line2 + line3 + line4;
    
    //printing the perimeter
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    
    //I thought that this function was easy to make given that I assumed that the shape was a quadrilateral. I don't think it would have been much more difficult to calculate for any shape using while loops.
    return 1;
}

//this function calculates the area of a shape given the length and the width, assuming that the shape is a rectangle or rhombus
double calculateArea()
{
    //informing the user to input coordinates for the base
    printf("Input the (x,y) coordinates for the base of your shape.");

    //calling a function to allow and store user input
    double line1 = calculateDistance();

    //informing the user to input coordinates for the height
    printf("Input the (x,y) coordinates for the height of your shape.");

    //calling a function to allow and store user input
    double line2 = calculateDistance();

    //using returned values to calculate area
    double area = line1 * line2;

    //printing the calculated area
    printf("The area of the city encompassed by your request is %lf\n", area);

    //This function was also easy given my chosen limitations. I could calculate for a variety of different shapes by prompting the user for what shape they are inputting lines from by using if-else statements.
    return 1;
}

//this function is essentially the line function, meaning it works for any shape
double calculateWidth()
{
    //informing the user to input coordinates for width
    printf("Input the x,y valyes of your width line");

    //calling a function to allow and store user input
    double line1 = calculateDistance();

    //printing the calculated distance between the points, basically printing the width
    printf("The width of the city encompassed by your request is %lf\n", line1);

    //This function was easy to make, but limited in functionality as it depends a lot on the user knowing certain information about the shape.
    return 1;
}

//this function is essentially the line function, meaning it also works for any shape
double calculateHeight()
{ 
    //informing the user to input coordinates for height
    printf("Input the x,y valyes of your height line");
    
    //calling a function to allow and store user input
    double line1 = calculateDistance();

    //printing the height
    printf("The height of the city encompassed by your request %lf\n", line1);
    
    //I copy pasted this function and changed two words. 
    return 1;
}

//Final Notes: Codespaces would not load for me so I ended up doing this in visual studio and directly uploaded my source and .exe files into the github. I am not sure if that was the appropriate action to take.