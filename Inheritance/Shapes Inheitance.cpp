#include <iostream>
using namespace std;
// Shape class -> Parent Class
class Shape
{
public:
    void Function()
    {
        cout << "\nThis is a Shape";
    }
};
// Polygon class -> child of Shape class
class Polygon : public Shape
{

public:
    void Function()

    {
        cout << "\n\nPolgon is a Shape";
    }
};
// Rectangle Class
class Rectangle : public Polygon
{

public:
    void Function()
    {
        cout << "\n\nRectangle is a Polygon";
    }
};
// Trianlge class
class Triangle : public Polygon
{
public:
    void Function()
    {
        cout << "\n\nTriangle is a Polygon";
    }
};
// Sqaure CLass
class Square : public Triangle, public Rectangle
{
public:
    void Function()
    {
        cout << "\n\nSquare is a Rectangle";
    }
};
int main()
{
    // polygon object
    Polygon polygon;
    // calling function of Shape
    polygon.Shape::Function();
    // Rectangle object
    Rectangle rectangle;
    // calling polygon function through Rectangle
    rectangle.Polygon::Function();
    Square sqaure;
    // Calling of Rectangle method
    sqaure.Rectangle::Function();
    sqaure.Triangle::Function();
    // calling sqaure method
    sqaure.Function();
}