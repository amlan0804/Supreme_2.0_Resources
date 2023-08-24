#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    int max=a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    cout<<"Max of "<<a<<", "<<b<<" and "<<c<<" is "<<max;        
    return 0;
}