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
    // this function is dy/dyt
    // the derivative of y with respect to t
    return(2- exp(-4*t) - 2*y);
}

int main()
{
    vector<double> t, y, fun;
    // set t0 at 0
    t.push_back(0); // t0 initial condition
    y.push_back(1); // y initial condition 
    
    double const h = 0.01; 

    // this is the step size 
    //
    // changing this step size to a smaller step size would increase accuracy 
    // up until a certain point

    // start looping
    for (int i = 1; i < MAX; i++) {
        t.push_back(h*i);
        fun.push_back(f(t[i-1],y[i-1]));
        y.push_back(y[i-1] + h *fun[i-1]);
        cout << " f[" << i-1 << "] : " << fun[i-1] << " at y[" << i-1 << "] is " << y[i] << endl;
    }

    return 0;
}
