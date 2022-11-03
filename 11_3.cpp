#include <iostream>
#include <string>
using namespace std;
class Rectangle
{
private:
    double length, width;

public:
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    double area()
    {
        return length * width;
    }
    double perimeter()
    {
        return (length + width) * 2;
    }
};
class Furniture
{
private:
    double weight, price;
    string color;

public:
    Furniture(double weight, double price, string color)
    {
        this->price = price;
        this->color = color;
        this->weight = weight;
    }
    void getter();
};
void Furniture::getter()
{
    cout << weight << ' ' << price << ' ' << color << endl;
}
int main()
{
    Rectangle rect(1, 2);
    cout << rect.area()<<endl;
    Furniture furn(1,2,"RED");
    furn.getter();
}