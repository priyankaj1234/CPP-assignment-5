#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;

    cout<<endl<<"Enter number for multiplication table : ";
    cin>>n;

    for(i=1; i<=10; i++)
    {
        cout<<endl<<n<<"*"<<i<<"="<<n*i;
    }

    return 0;
}

