#include<iostream>

using namespace std;

class matrix
{
    int m[3][3];
public:
    void input()
    {
        cout << "Enter elements of matrix" << endl;
        int i,j;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                cin >> m[i][j];
    }

    void display()
    {
        cout << "Matrix is: " << endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                cout << m[i][j] << "\t";
            cout << endl;
        }
    }

    friend matrix trans(matrix);
};

matrix trans(matrix m1)
{
    matrix m2;
    int i, j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            m2.m[i][j] = m1.m[i][j];
    
    return m2;
}

int main()
{
    matrix mat1, mat2;
    mat1.input();
    mat1.display();
    mat2 = trans(mat1);
    mat2.display();

    return 0;
}