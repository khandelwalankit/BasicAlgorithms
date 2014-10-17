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
        void print_val()
        {
            cout << "Private values: " << pvt1 <<"\t"<< pvt2 << endl;
            cout << "Protected values: " << prot1 <<"\t"<< prot2 << endl;
            cout << "Private values: " << pub1 <<"\t"<< pub2 << endl;
        };
        virtual void classy_virtual(){};
        virtual void classy_virtual_base()
        {
            pub1 = 100;
        }
};
class child1 : public base{
    public:
    child1() : base(){};
    child1(int _pvt1,int _pvt2, int _prot1, int _prot2, int _pub1, int _pub2) : base(_pvt1,_pvt2,_prot1,_prot2,_pub1,_pub2) 
    {
        cout << "Here 3"<<endl ;
    };
    
    void classy_virtual()
    {
        pub1 = 10;
    }
    void classy_virtual_base()
    {
        base::classy_virtual_base();
    }

};

int main(int argc, char**argv)
{
    base b1; // Calls the constructor
    base b2(1,2,3,4,5,6); // Calls the overidden constructor
    child1 c1(8,9,0,1,2,3); 
    base *b3 = new child1();
    b1.print_val();
    b2.print_val();
    c1.classy_virtual();
    c1.print_val();
    //b3->classy_virtual(); //invokes classy_virtual of the child class
    b3->classy_virtual_base(); //invokes the virtual function of the child1 which inturn calls base virtual function
    (*b3).print_val();
    return 0;
}

