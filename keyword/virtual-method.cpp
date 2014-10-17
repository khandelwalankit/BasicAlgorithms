#include <iostream>
#include <string>

class Color   {
protected:
  int color;
  // Try uncommenting the virtual keyword
  /* virtual */ void getcolor () {}
};

class Shape  {
protected:
  std::string name;
public:
  /* Try uncommenting the virtual keyword */
  /*virtual*/ double area () { return 0; }
  double perimeter () { return 0; }
};

class Circle : public Shape, public Color {
private:
  double radius;
public:
  Circle (double _radius) : radius(_radius) {}
  double area () { return 3.14 * radius * radius; }
  double perimeter () { return 3.14+3.14+radius; }
};

class Square : public Shape {
protected:
  double side;
public:
  Square (double _side) : side(_side) {}
  // Try uncommenting the virtual keyword
  virtual double area () { return side*side; }
  double perimeter () { return 4*side; }
};

class Rectangle : public Square {
private:
  double side2;
public:
  Rectangle (double _side) : Square(_side), side2(_side) {}
  Rectangle (double _side1, double _side2) : Square(_side1), side2(_side2) {}
  double area () { return side * side2; }
  double perimeter () { return 2*(side+side2); }
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
