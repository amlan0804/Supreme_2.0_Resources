#include <iostream>
using namespace std;

int main()
{
    int n,f=1;
    cout<<"Enter number: ";
    cin>>n;
    while(n>0){
        f*=n;
        n--;
    }
    cout<<"The factorial is: "<<f;
    return 0;
}