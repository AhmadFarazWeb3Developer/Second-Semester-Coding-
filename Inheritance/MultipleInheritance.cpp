#include <iostream>
using namespace std;

// Parent Class Shape
class Shape
{
protected:
    double Width;
    double Height;

public:
    // setting width
    void setWidth(double width)
    {
        Width = width;
    }

    // setting height
    void setHeight(double height)
    {
        Height = height;
    }

    // getting area
    double getArea()
    {
        return Height * Width;
    }
};

// Child CLass -> Rectangle
class Rectangle : public Shape
{
public:
    // Rectangle Area calculation
    double Area()
    {
        return getArea();
    }
};

// Child Class -> Triangle
class Triangle : public Shape
{
public:
    // Triangle Area Calculation
    double Area()
    {
        return (getArea() / 2);
    }
};

// GrandChild Class -> Trapezoid
class Trapezoid : public Triangle, public Rectangle
{
public:
    // Trapezoid Area calculation
    double Area()
    {
        return Triangle::Area() + Rectangle::Area();
    }
    // Trapzeoid constructor
    Trapezoid(double width, double height)
    {
        // setting trianle height
        Triangle::Width = width;
        Triangle::Height = height;
        // setting Rectangle height
        Rectangle::Width = width;
        Rectangle::Height = height;
    }
};

int main()
{
    double height, width;
    cout << "------Enter Details for Trapezoid ------" << endl;
    //  Entering height
    cout << "\n\tEnter Height : ";
    cin >> height;
    // Entering Width
    cout << "\tEnter Width : ";
    cin >> width;
    // setting Width for Trapezoid object
    Trapezoid tpd(width, height);
    // printing details of Area methods
    cout << "\n-----Area of different shapes----- " << endl;
    cout << "\n\tTrapezoid : " << tpd.Area() << " m^2";
    cout << "\n\tArea of Triangle : " << tpd.Triangle::Area() << " m^2";
    cout << "\n\tArea of Rectangle : " << tpd.Rectangle::Area() << " m^2" << endl;
    return 0;
}