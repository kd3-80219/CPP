#include<iostream>
using namespace std;

class matrix
{
    private:
            int **matrix1;
            int **matrix2;
            int reslt[2][2];
            int row;
            int col;
    public :

    matrix()
    {

    }
    matrix(int row,int col)
    {   
        this->row = row;
        this->col = col;
        this->matrix1 = new int *[row];
        this->matrix2 = new int *[row];
        for(int i=0;i<row;i++)
        {
            this->matrix1[i] = new int [col];   
        }
        for(int i=0;i<row;i++)
        {
            this->matrix2[i] = new int [col];
        }
    }
    
    void accept()
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<"Enter Matrix 1 Element["<<i<<"]["<<j<<"] = ";
                cin>>this->matrix1[i][j];
            }
        }

        cout<<"\n";

         for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<"Enter Matrix 2 Element["<<i<<"]["<<j<<"] = ";
                cin>>this->matrix2[i][j];
            }
        }
    }

    void MatrixDisplay()
    {
        cout<<"Matrix 1 Elements :"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<this->matrix1[i][j]<<" ";
            }
            cout<<"\n";
        }
            
        cout<<"Matrix 2 Elements :"<<endl;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<this->matrix2[i][j]<<" ";
            }
            cout<<"\n";
        }

    }
    void result()
    {
        add(*matrix1,*matrix2);
        subtract(*matrix1,*matrix2);
        multiply(*matrix1,*matrix2);
    }

    void add(int *matrix1,int *matrix2)
    {
        cout<<"\nAddition Of Matrix :"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<this->matrix1[i][j]+this->matrix2[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    void subtract(int *matrx1,int *matrix2)
    {
        cout<<"\nSubtraction Of Matrix :"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<this->matrix1[i][j]-this->matrix2[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    void multiply(int *matrix1,int *matrix2)
    {
        int result[row][col],i,j,k;
        cout<<"\nMultipliction Of Matrix :"<<endl;
        for( i=0;i<row;i++)
        {
            for( j=0;j<col;j++)
            {
                result[i][j]=0;
                for( k=0;k<row;k++)
                {
                    result[i][j] =result[i][j]+ this->matrix1[i][k] * this->matrix2[k][j]; 
                }
                cout << result[i][j] << "\t";
            }
            cout<<"\n";
        }
    }

    void transpose()
    {
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                reslt[i][j] = this->matrix1[j][i];
            }
            cout<<"\n";
        }

        cout<<"Transpose of Matrix 1 :"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<reslt[i][j]<<" ";
            }
            cout<<"\n";
        }

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                reslt[i][j] = this->matrix2[j][i];
            }
            cout<<"\n";
        }

        cout<<"Transpose of Matrix 2 :"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<reslt[i][j]<<" ";
            }
            cout<<"\n";
        }

    }

    // void AddMatrix()
    // {
    //     cout<<"Addition Of Matrix :"<<endl;
    //     for(int i=0;i<row;i++)
    //     {
    //         for(int j=0;j<col;j++)
    //         {
    //             cout<<this->matrix1[i][j]+this->matrix2[i][j]<<" ";
    //         }
    //         cout<<"\n";
    //     }

    // }
    ~matrix()
    {
        for(int i=0;i<2;i++)
        {
            delete matrix1[i];
            delete matrix2[i];
        }
        delete[]matrix1;
        delete[]matrix2;
    }

};

int main()
{
   
    matrix m(2,2);
    m.accept();
    m.MatrixDisplay();
    m.result();
    m.transpose();


}
