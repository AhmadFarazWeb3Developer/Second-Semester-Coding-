#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void Draw() = 0;
    virtual void CalcArea() = 0;
    virtual void setShape() = 0;
};
// concrete Circle Class
class Circle : public Shape
{
private:
    double radius;
    const double Pi;

public:
    Circle() : radius(1.0), Pi(3.14){};
    Circle(double r) : radius(r), Pi(3.14){};
    void Draw()
    {
        cout << "\nCircle class method called\n"
             << endl;
    }
    void CalcArea()
    {
        cout << "\nArea of the Cricle is : " << (radius * radius * Pi);
    }
    void setShape()
    {
        cout << "\nPlease Enter radius of the Circle : ";
        cin >> radius;
        Circle(radius);
    }
}; // concrete Rectangle Class
class Rectangle : public Shape
{
private:
    int length, width;

public:
    Rectangle() : length(1), width(1){};
    Rectangle(int h, int w) : length(h), width(w){};
    void Draw()
    {
        cout << "\nRectangle class method called\n"
             << endl;
    }
    void CalcArea()
    {
        cout << "\nArea of the Rectangle is : " << (length * width);
    }
    void setShape()
    {
        cout << "\nPlease Enter Length of the Rectangle : ";
        cin >> length;
        cout << "\nPlease Enter Width of the Rectangle : ";
        cin >> width;
        Rectangle(length, width);
    }
}; // concrete Triangle Class
class Triangle : public Shape
{
private:
    double height, base;

public:
    Triangle() : height(1.0), base(1.0){};
    Triangle(double h, double b) : height(h), base(b){};
    void Draw()
    {
        cout << "Triangle class method called\n"
             << endl;
    }
    void CalcArea()
    {
        cout << "\nArea of the Rectangle is : " << (0.5 * height * base);
    }
    void setShape()
    {
        cout << "\nPlease Enter Height the Triangle";
        cin >> height;
        cout << "\nPlease Enter Base of the Triangle";
        cin >> base;
        Triangle(height, base);
    }
};
int main()
{
    Shape *ptr;
    int choice;
    cout << "\n---please select a shape to draw (1-Circle, 2-Rectangle , 3-Triangle)---\n";
    cout << "\nYour choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        ptr = new Circle;
        break;
    case 2:
        ptr = new Rectangle;
        break;
    case 3:
        ptr = new Triangle;
        break;
    }
    ptr->Draw();
    ptr->setShape();
    ptr->CalcArea();
}