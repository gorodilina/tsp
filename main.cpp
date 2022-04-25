#include "header.h"
using namespace std;

const int inf1=1E9;
const int inf2=1E9;
double sup1=0;
double sup2=0;

double infinum=0;

/*struct pt
{
    //int id;
    double x,y;
};*/

/*double dist( pt a, pt b )
{
    return sqrt( pow( a.x - b.x, 2 ) + pow( a.y - b.y, 2 ) );
}*/

/*double min_elem (vector<double> &v)
{
    int N=v.size();
    double min = v[0];
    for (int j = 0; j < N; j++)
         {
              if(v[j] < min)
              {
                  min = v[j];
              }
         }
    return min;
}

double max_elem (vector<double> &v)
{
    int N=v.size();
    double max = v[0];
    for (int j = 0; j < N; j++)
         {
              if(v[j] > max)
              {
                  max = v[j];
              }
         }
    return max;
}

vector<vector<double>> min_row (vector<vector<double>> &M)
{
    int N=M.size();
    for (int i=0; i<N; i++)
    {
         double min=min_elem(M[i]);
         if (min<inf1)
         {
             sup1+=min;
             //infinum+=min;
         }
         for (int j = 0; j < N; j++)
            if (M[i][j]!=inf1)
            {
                M[i][j]-=min;
            }
    }
    return M;
}

vector<vector<double>> coeffs (vector<vector<double>> &M)
{
    int N=M.size();
    vector<vector<double>> c(N, vector<double> (N));
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            if (M[i][j]!=0)
                c[i][j]=0;
            else
            {
                vector <double> row=M[i];
                row [j]=inf1;
                vector <double> column (N);
                for (int k=0; k<N; k++)
                {
                    column[k]=M[k][j];
                }
                column[i]=inf1;
                double min=min_elem(row)+min_elem(column);
                c[i][j]=min;
                row.clear();
                column.clear();
            }
        }
    }
    return c;
}

void show_mat(vector<vector<double>> &M)
{
    int N=M.size();
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            cout<< M[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

pt max_coeff (vector<vector<double>> &C)
{
    int N=C.size();
    vector <double> maxs(N);
    for (int i=0; i<N; i++)
    {
        maxs[i]=max_elem(C[i]);
    }
    double max=max_elem(maxs);
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
        {
            if (C[i][j]==max)
            {
                return {i, j};
                maxs.clear();
                break;
            }
        }
}

vector<vector<double>> get_M1 (vector<vector<double>> &M, vector<vector<double>> &C)
{
    int N=C.size();
    pt maxc=max_coeff(C);
    int i=maxc.x, j=maxc.y;
    //cout<<i<<" "<< j<<endl;
    vector<vector<double>> M1=M;
    M1[j][i]=inf1;
    M1.erase(M1.begin()+i);
    for (int k=0; k<N-1; k++)
        M1[k].erase(M1[k].begin()+j);
    return M1;
}

vector<vector<double>> get_M2 (vector<vector<double>> &M, vector<vector<double>> &C)
{
    int N=C.size();
    pt maxc=max_coeff(C);
    int i=maxc.x, j=maxc.y;
    //cout<<i<<" "<< j<<endl;
    vector<vector<double>> M2=M;
    sup2=C[i][j];
    M2[i][j]=inf2;
    return M2;
}

*/



int main()
{
    int N;
    cin >> N;
    vector<vector<double>> M (N, vector<double> (N));
    vector<pt> tmp (N);
    for (int i=0; i<N; i++)
    {
 	    double x, y;
    	cin >> x >> y;
   	    pt newone = {x, y};
   	    tmp[i]=newone;
    }

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            if (i!=j)
            {
                M[i][j]=dist(tmp[i], tmp[j]);
            }
            else M[i][j]=inf1;
            //cout<< M[i][j]<<" ";
        }
        //cout<<endl;
    }
//show_mat(M);
M=min_row(M);
infinum+=sup1;
little_method(M);
return 0;
}
