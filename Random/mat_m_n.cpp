#include <iostream>
#include <cstdlib>
#include <vector>
#include <math.h>

using namespace std;

void mat_m(int *mat, int size)
{
    std::vector<int> m;
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            if(mat[i+j*size] == 0)
                m.push_back(i+j*size);

    std::vector<int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it)
    {
        //cout<<" "<< *it;
        int col = floor(*it/size);
        int row = *it % size;

        for(int i = 0; i<size;i++)
        {
            mat[i+col*size] = 0;
            mat[row+i*size] = 0;
        }
    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
            cout<<" " <<mat[i+j*size];
        cout<<endl;
    }
    cout<<endl;
}
int main(int argc, char **argv)
{
    int size = atoi(argv[1]);
    int *mat = new int[size*size]();
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            mat[i+j*size] = rand()%10;

    cout <<"input" <<endl; 
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
            cout<<" " <<mat[i+j*size];
        cout<<endl;
    }
    cout<<endl;
    mat_m(mat,size);
    return 0;
}

