#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    float avg;

    
       for(i=1; i<=10; i++)
    {
        cout<<endl<<"Enter numbers : ";
        cin>>n;
        sum=sum+n;
    }

    avg=sum/10.0;

    cout<<endl<<"Sum of 10 muners : "<<sum;
    cout<<endl<<"Avg of 10 munbers : "<<avg;

    return 0;
}