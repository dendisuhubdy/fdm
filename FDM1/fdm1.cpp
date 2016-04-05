/*************************************************************************
	> File Name: fdm1.cpp
	> Author: Dendi Suhubdy 
	> Mail: dasuhubd@ncsu.edu
	> Created Time: Mon Apr  4 20:35:20 2016
 ************************************************************************/

#include <iostream>
#include <vector>
#include <cmath>

#define MAX 100

using namespace std;

double f(double t, double y)
{
    return(2- exp(-4*t) - 2*y);
}

int main()
{
    vector<double> t, y, fun;
    // set t0 at 0
    t.push_back(0);
    y.push_back(1);
    
    double const h = 0.1;

    // start looping
    for (int i = 1; i < MAX; i++) {
        t.push_back(h*i);
        fun.push_back(f(t[i-1],y[i-1]));
        y.push_back(y[i-1] + h *fun[i-1]);
        cout << " f[" << i-1 << "] : " << fun[i-1] << " at y[" << i-1 << "] is " << y[i] << endl;
    }

    return 0;
}
