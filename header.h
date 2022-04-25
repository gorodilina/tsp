#include <bits/stdc++.h>

using namespace std;

const int inf1=1E9;
const int inf2=1E9;

struct pt
{
    double x,y;
};

double dist( pt a, pt b );

double min_elem (vector<double> &v);

double max_elem (vector<double> &v);

vector<vector<double>> min_row (vector<vector<double>> &M);

vector<vector<double>> coeffs (vector<vector<double>> &M);

void show_mat(vector<vector<double>> &M);

pt max_coeff (vector<vector<double>> &C);

vector<vector<double>> get_M1 (vector<vector<double>> &M, vector<vector<double>> &C);

vector<vector<double>> get_M2 (vector<vector<double>> &M, vector<vector<double>> &C);

void little_method(vector<vector<double>> &M, double Sup1);

