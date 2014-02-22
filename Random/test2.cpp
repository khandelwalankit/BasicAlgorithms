#include<iostream>
#include<cstdlib>

using namespace std;
class A
{
    public:
    static int m3;
    int m1;
    int m2;

    void init_m1(int x)
    {
        m1=x;
    }
    void init_m2(int x)
    {
        m2=x;
    }
    /*void A::set_class_var(int x)
    {
        A::m3 = x;
    }*/
    void print_data()
    {
        cout << "M1" << m1 <<"\n";
        cout << "M2" << m2 <<"\n";
        cout << "M3" << A::m3 <<"\n";
    }
};

class B : public A
{
    public:
    int m4;
    
    void init_m1()
    {
        m1=10;
    }

    void init_m4(int x)
    {
        m4=x;
    }

    void print_data()
    {
        cout << "M1" << m1 <<"\n";
        cout << "M2" << m2 <<"\n";
        cout << "M3" << A::m3 <<"\n";
        cout << "M4" << m4 <<"\n";
    }
};

int A::m3(15);
int main(int argc, char** argv)
{
    A *foo,*fee;
    foo = new B;
    foo->init_m1(11);
    foo->init_m2(12);
    //foo->init_m4(13);
    //A::set_class_var(15);
    foo->print_data();
    delete foo;

    return 0;
}


