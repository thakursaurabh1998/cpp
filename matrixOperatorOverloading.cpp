#include<iostream>

using namespace std;

class matrix
{
    int row,col;
    int **mat;
public:
    friend matrix operator +(matrix&, matrix&);
    friend matrix operator -(matrix&, matrix&);
    matrix(int x, int y)
    {
        row = x;
        col = y;
        mat = new int*[row];
        for(int i=0;i<row;i++)
            mat[i] = new int[col];
    }

    void create()
    {
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                cin >> mat[i][j];
    }

    void display()
    {
        for(int i=0;i<row;i++)
        {    
            for(int j=0;j<col;j++)
                cout << mat[i][j] << "\t";
            cout << endl;
        }
    }
};


matrix operator +(matrix &a, matrix &b)
{
    matrix res(a.row,b.col);
    for(int i=0;i<res.row;i++)
        for(int j=0;j<res.col;j++)
            res.mat[i][j] = a.mat[i][j] + b.mat[i][j];

    return res;
}

matrix operator -(matrix &a, matrix &b)
{
    matrix res(a.row,b.col);
    for(int i=0;i<res.row;i++)
        for(int j=0;j<res.col;j++)
            res.mat[i][j] = a.mat[i][j] - b.mat[i][j];

    return res;
}


int main()
{
    int row,col,i,j;
    cin >> row >> col;

    matrix m1(row,col);
    matrix m2(row,col);
    matrix m3(row,col);
    m1.create();
    m2.create();

    m3 = m1 + m2;
    m3.display();
    m3 = m1 - m2;
    m3.display();

    return 0;
}