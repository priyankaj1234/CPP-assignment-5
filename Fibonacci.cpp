#include<iostream>
using namespace std;
int main()
{
    int i,n,t1=0,t2=1,nextterm=0;
    cout<<endl<<"Enter number of terms : ";
    cin>>n;

    cout<<endl<<"Fibonacci Series :"<<t1<<","<<t2<<",";
    nextterm=t1+t2;

    while(nextterm<=n)
    {
        cout<<nextterm<<",";

        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }

    return 0;

}