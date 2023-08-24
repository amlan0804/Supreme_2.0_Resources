#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime=1;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=2; i<n;i++){
        if(n%i==0){
            cout<<"Not Prime";
            isPrime=0;
            break;
        }
    }
    if(isPrime)
        cout<<"Prime";
    return 0;
}
