#include<iostream>
#include<cstdlib>
#include<vector>

/*
    widget w; is default initilaization of object w of class widget
    widget w(); It looks like it is calling the constructor widget:widget() but because of ambiguity it calls the function named w of return type widget. This is almost resolved in c++11
    widget w{}; This removes ambiguity by calling constructor of class widget only. In C++11. This is never a function declaration
    widget w = x; or widget w = {x}; is copy initialization and never termed as assignment
    auto w = x; and auto w = widget{x} are also copy initialization but here left hand side would be deduced exactly as right hand side. If x is type of other class then widget, in that case w will also be of type of x;
*/


using namespace std;

class widget
{
    int categoryid;
    double price;
    public:
        widget() : categoryid(0),price(0.0){}
        widget(int cat_id, double pr) : categoryid(cat_id),price(pr){}
    
    double get_price(int c_id)
    {
        if(categoryid == c_id)
            return (price);
    }        
};

int main(int argc, char *argv[])
{
    widget w{}; //Default initialization
    widget w1{1,10.5}; 
    auto w2 = w1;
    int i(100.234);
    int a{100.234};
    cout << "Value of i is :"<<i<<endl;
    cout << "Value of a is :"<<a<<endl;
    cout<<"Value of Price for widget w "<<w.get_price(0)<<endl;
    cout<<"Value of Price for widget w2 "<<w2.get_price(1)<<endl;
    return 0;
}
