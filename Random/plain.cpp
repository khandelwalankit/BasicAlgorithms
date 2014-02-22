#include <iostream>

class Shape  {
protected:
  std::string name;
public:
  double area () { return 0; };
};

class Circle : public Shape {
private:
  double radius;
public:
  Circle (double _radius) : radius(_radius) {}
  double area () { return 3.14 * radius * radius; }
};

class Square : public Shape {
protected:
  double side;
public:
  Square (double _side) : side(_side) {}
  double area () { return side*side; }
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
}
