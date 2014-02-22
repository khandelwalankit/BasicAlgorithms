#include<iostream>
#include<cstdlib>

using namespace std;
void print_matrix(double *Mat, int mat_size)
{
    cout<< "Matrix is: " <<endl;
    for(int i=0;i<mat_size;i++)
    {
        for(int j=0;j<mat_size;j++)
        {
            cout << Mat[i*mat_size+j] <<'\t';
        }
        cout<<endl;
    }
}
void in_place_transpose(double *Mat, int mat_size)
{
    //Transposing through Swaping of upper triangle by lower triangle
    for(int i=0;i<mat_size;i++)
    {
        for(int j=i;j<mat_size;j++)
        {
            double temp = Mat[i*mat_size+j];
            Mat[i*mat_size+j] = Mat[j*mat_size+i];
            Mat[j*mat_size+i] = temp;
        }
    }
}
void in_place_shift(double *Mat, int mat_size)
{
    int col_shift_left = 0;
    int col_shift_right = mat_size - 1;
    while(col_shift_right >= col_shift_left)
    {
        for(int i=0;i<mat_size;i++)
        {
            int temp = Mat[i*mat_size+col_shift_left];
            Mat[i*mat_size+col_shift_left] = Mat[i*mat_size+col_shift_right];
            Mat[i*mat_size+col_shift_right] = temp;
        }
        col_shift_right--;
        col_shift_left++;
    }
}
void rotate_matrix(double *Mat, int mat_size)
{
    in_place_transpose(Mat, mat_size);
    in_place_shift(Mat, mat_size);
}
int main(int nargs , char **argv)
{
    int mat_size =5;
    double *Mat = (double*)malloc(mat_size*mat_size*sizeof(double));
    int count =0;
    for(int i=0;i<mat_size;i++)
    {
        for(int j=0;j<mat_size;j++)
        {
            Mat[i*mat_size+j] = ++count;
        }
    }
    print_matrix(Mat,mat_size);
    rotate_matrix(Mat,mat_size);
    print_matrix(Mat,mat_size);

    return 0;
}
