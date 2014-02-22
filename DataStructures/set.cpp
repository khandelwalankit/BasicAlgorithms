#include<iostream>
#include<cstdlib>
#include<set>
#include<unordered_set>
#include<vector>

using namespace std;

int main(int argc, char **argv)
{
    set<string> first;
    unordered_set<string> second;
    vector<string> myints;
    myints.push_back("Mercury");
    myints.push_back("Venus");
    myints.push_back("Earth");
    myints.push_back("Mars");
    myints.push_back("Jupiter");
    myints.push_back("Saturn");
    myints.push_back("Uranus");
    myints.push_back("Neptune");
    vector<string>::const_iterator c1;
    for (c1 = myints.begin(); c1!=myints.end(); c1++)
    {
        cout << *c1 <<endl;
        first.insert(*c1);
        second.insert(*c1);
    }
    cout<< "Output from Set" << endl;
    set<string>::const_iterator c2;
    for (c2 = first.begin();c2!=first.end();c2++)
    {
        cout << *c2 <<endl;
    }
    cout<< "Output from unordered Set" << endl;
    unordered_set<string>::const_iterator c3;
    for(c3=second.cbegin();c3!=second.cend();c3++)
    {
        cout<< *c3 <<endl;
    }
    for ( unsigned i = 0; i < second.bucket_count(); ++i) {
        std::cout << "bucket #" << i << " contains:";
        for ( auto local_it =second.cbegin(i); local_it!= second.cend(i); ++local_it )
            std::cout << " " << *local_it;
       std::cout << std::endl;
     }


    return 0;
}
