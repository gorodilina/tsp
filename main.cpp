#include "header.h"
using namespace std;

double Sup1=0;

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
        }
    }

    for (int i=0; i<N; i++)
    {
         double min=min_elem(M[i]);
         if (min<inf1)
         {
             Sup1+=min;
         }
         for (int j = 0; j < N; j++)
            if (M[i][j]!=inf1)
            {
                M[i][j]-=min;
            }
    }
little_method(M, Sup1);
return 0;
}
