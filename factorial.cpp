#include<iostream>
using namespace std;
int main()
{
    int n,i,fact=1;

    cout<<endl<<"Enter no for factorial : ";
    cin>>n;

    for(i=n; i>0; --i)
    {
        fact= fact*i;
    }

    cout<<endl<<"Factorial of "<<n<<" is : "<<fact;
    return 0;
    
}