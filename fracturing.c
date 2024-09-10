#include <stdio.h>
#include <math.h>
#define PI 3.14159

double getDistance(double x1, double x2, double y1, double y2){
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    return distance;
}

double calculateDistance(){
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %lf\n", distance);
    
    return distance;
}

double calculatePerimeter(){
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double radius = getDistance() / 2;
    double perimeter = 2 * PI * radius;
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    
    return 3.0;
}

double calculateArea(){
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double radius = getDistance() / 2;
    double area = PI * pow(radius, 2);
    printf("The area of the city encompassed by your request is %lf\n", area);
    
    return 2.0;
}

double calculateWidth(){
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double width = getDistance();
    printf(" The width of the city encompassed by your request is %lf\n", width);
    
    return 1.0;
}

double calculateHeight(){
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double height = getDistance();
    printf("The height of the city encompassed by your request is %lf\n", height);
    
    return 1.0;
}

int main(int argc, char **argv) {

  double calculateDistance();
  double calculatePerimeter();
  double calculateArea();
  double calculateWidth();
  double calculateHeight();

  return 0;
}
