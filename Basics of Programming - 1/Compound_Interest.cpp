#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float p,r,t;
    cout<<"Enter Principal, Rate of Interest and Time: ";
    cin>>p>>r>>t;
    double A = p * (pow((1 + r / 100), t));
    double CI = A- p;
    cout<<"The Compound Interest is: "<<CI;
    return 0;
}