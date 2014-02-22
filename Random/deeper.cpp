#include<iostream>

class Shape {
protected:
    std::string name;
public:
    double area() {return 0;}
};

class Circle:public Shape
{
private:
    double radius;
public: 
    Circle(double _radius) : radius(_radius) {}
    double area () {return 3.14 * radius * radius ;}
};

class Square:public Shape
{
protected:
    double side1;
public:
    Square(double _side1) : side1(_side1) {}
    double area () {return side1*side1; }
};

class Rectangle:public Square
{
private:
    double side2;
public:
    Rectangle(double _side2) : Square(_side2), side2(_side2) {}
    Rectangle(double _side1, double _side2) : Square(_side1) , side2(_side2) {}
    double area () { return side1 * side2 ;}
};

int main (int argc, char** argv)
{
    Circle c(2);
    Shape& p1(c);
    std::cout << "Circle's area (through Shape) = " << p1.area() << std::endl;
    std::cout << "Circle's area (through Circle) = " << c.area() << std::endl;

    Square s(1);
    Shape& p2(s);
    std::cout << "Square's area (through Shape) = " << p2.area() << std::endl;
    std::cout << "Square's area (through square) = " << s.area() << std::endl;
    
    Rectangle r(1,2);
    Square& p4(r);
    Shape& p3(r);
    std::cout << "Rectangle's area (through Shape) = " << p3.area() << std::endl;
    std::cout << "Rectangle's area (through Square) = " << p4.area() << std::endl;
    std::cout << "Rectangle's area (through Rectangle) = " << r.area() << std::endl;
    return 0;
}


