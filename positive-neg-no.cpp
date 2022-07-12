#include<iostream>
using namespace std;
int main()
{
    int i,x,p=0,n=0,z=0;

    for(i=1; i<=10; i++)
    {
        cout<<endl<<"Enter a no : ";
        cin>>x;
        if(x>0)
        p++;
        else if(x<0)
        n++;
        else
        z++;
    }

    cout<<endl<<"Total positive no : "<<p;
    cout<<endl<<"Total negative no : "<<n;
    cout<<endl<<"Total zeros :  "<<z;

    return 0;
}