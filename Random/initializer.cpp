#include<iostream>
#include<cstdlib>

using namespace std;

class base {
    private:
        int pvt1; 
        int pvt2;
    protected:
        int prot1;
        int prot2;
    public:
        int pub1;
        int pub2;
        
        base():pvt1(0),pvt2(0),prot1(0),prot2(0),pub1(0),pub2(0)
        {
            cout<<"Here"<<"\n";
        };
        base(int _pvt1,int _pvt2, int _prot1, int _prot2, int _pub1, int _pub2) : pvt1(_pvt1), pvt2(_pvt2), prot1(_prot1), prot2(_prot2), pub1(_pub1), pub2(_pub2)
        {
            cout<<"Here2"<<"\n";
        };
        base(int _pub2) : pub2(_pub2){};
        void print_val()
        {
            cout << "Private values: " << pvt1 <<"\t"<< pvt2 << endl;
            cout << "Protected values: " << prot1 <<"\t"<< prot2 << endl;
            cout << "Private values: " << pub1 <<"\t"<< pub2 << endl;
        };
        ~base()
        {
            cout << "Here4" <<endl;
        }
        int return_pub2()
        {
            return(pub2);
        }

};

class Foo
{
    public:
        // single parameter constructor, can be used as an implicit conversion
        explicit Foo (int foo) : m_foo (foo) 
        {
        }

        int GetFoo () { return m_foo; }

    private:
        int m_foo;
};

void initialize_Foo(Foo b)
{
    int i = b.GetFoo();

}
int main(int argc, char**argv)
{
    base b1; // Calls the constructor
    base b2(1,2,3,4,5,6); // Calls the overidden constructor
    b2.pub2 = 7;
    base *b4 = new base(3,4,5,6,7,8);
    base b3(b2); // Creates the different instance of b3 with all values same as in b2 but constructor is not called - Copy Constructor
    //base b4{b3}; // Copy constructor
    //base *b2 = new base(); // calls the constructor
    //int i{1.2};
    b1.print_val();
    b2.print_val();
    b3.print_val();
    //cout<<i;
    //Foo b =10;  // If Explicit keyword is not present only for one parameter
    Foo b = Foo(10);
    delete b4;
    //b4.print_val();
    //cout<<"Address of pub1 of b2 and b3: " << &b3.pub1 << "\t" << &b4.pub1 <<endl;
    return 0;
}

