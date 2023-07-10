#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void Draw()
    {
        cout << "Shape class method\n"
             << endl;
    }
};
class Circle : public Shape
{
public:
    void Draw()
    {
        cout << "Circle class method called\n"
             << endl;
    }
};
class Rectangle : public Shape
{
public:
    void Draw()
    {
        cout << "Rectangle class method called\n"
             << endl;
    }
};

class Triangle : public Shape
{
public:
    void Draw()
    {
        cout << "Triangle class method called\n"
             << endl;
    }
};
int main()
{
    Shape *ptr;
    int choice;
    cout << "\nplease select a shape to draw (1-Circle, 2-Rectangle , 3-Triangle)";
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
}
