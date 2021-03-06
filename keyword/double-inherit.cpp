#include <iostream>
#include <string>

class Color {
protected:
  int color;
  void getcolor () {}
};

class Shape  {
protected:
  std::string name;
public:
  Shape (const char* _name) : name(_name) {}
  double area () { return 0; }
};

class Circle : public Shape, public Color {
private:
  double radius;
public:
  Circle (double _radius) : radius(_radius), Shape("circle") {}
  double area () { return 3.14 * radius * radius; }
};

class Square : public Shape {
protected:
  double side;
public:
  Square (double _side) : side(_side), Shape("square") {}
  double area () { return side*side; }
};

class Rectangle : public Square {
private:
  double side2;
public:
  Rectangle (double _side) : Square(_side), side2(_side) { name = "rectangle"; }
  Rectangle (double _side1, double _side2) : Square(_side1), side2(_side2) {}
  double area () { return side * side2; }
};


int main (int argc, char *argv[])
{
  Circle c(2);
  Shape& p1(c);
  std::cout << "Circle's area (through shape)  = " << p1.area() << std::endl;
  std::cout << "Circle's area (through circle) = " << c.area() << std::endl;

  Square s(1);
  Shape& p2(s);
  std::cout << "Square's area (through shape)  = " << p2.area() << std::endl;
  std::cout << "Square's area (through square) = " << s.area() << std::endl;

  Rectangle r(1, 2);
  Shape &p3(r);
  Square &p4(r);
  std::cout << "Rectangle's area (through shape)     = " << p3.area() << std::endl;
  std::cout << "Rectangle's area (through square)    = " << p4.area() << std::endl;
  std::cout << "Rectangle's area (through rectangle) = " << r.area() << std::endl;
}
