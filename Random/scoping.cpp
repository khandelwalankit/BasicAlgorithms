#include <iostream>

namespace FOO {
  void foo (int x) { std::cout << "In FOO::foo " << x << std::endl; }
};

void foo () { std::cout << "In ::foo" << std::endl; }

class A {
public:
  virtual void foo () { std::cout << "In A::foo" << std::endl; }
  void fee () { this->foo(); }
};

class B : public A {
public:
  void foo () { std::cout << "In B::foo" << std::endl; }
  void fee () { A::foo(); }
};


int main ()
{
  using FOO::foo;
  B b;
  A& a(b);

  std::cout << "Virtual function tests:" << std::endl;
  b.fee();
  b.foo();
  a.fee();

  std::cout << std::endl << "Scoping test:" << std::endl;
  // Note that you need to uncomment the following for the compiler to be able "see" foo
  // even though it has already been defined in the global scope
  //void foo ();
  //foo();
  foo(10);
}
