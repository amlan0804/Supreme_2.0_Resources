#include <iostream>
using namespace std;

int main()
{
    float p,r,t,SI;
    cout<<"Enter Principal, Rate of Interest and Time: ";
    cin>>p>>r>>t;
    SI = (p*r*t)/100;
    cout<<"The Simple Interest is: "<<SI;
    return 0;
}