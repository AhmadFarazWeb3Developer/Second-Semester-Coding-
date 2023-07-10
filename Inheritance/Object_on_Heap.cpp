#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int Area()
    {
        return length * breadth;
    }
    int Perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle *p, temp; // Inside Stack
    p = &temp;
    p->length = 10;
    p->breadth = 9;

    Rectangle *q = new Rectangle(); // Inside Heap
    q->length = 3;
    q->breadth = 3;

    cout << "p:" << endl;
    cout << "length: " << p->length << " breadth: " << p->breadth << endl;
    cout << "q:" << endl;
    cout << "length: " << q->length << " breadth: " << q->breadth << endl;

    cout << "Area of p: " << p->Area() << endl;
    cout << "Perimeter of p: " << p->Perimeter() << endl
         << endl;
    cout << "Area of q: " << q->Area() << endl;
    cout << "Perimeter of q: " << q->Perimeter() << endl;
}