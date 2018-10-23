#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,d;
    int c=0, f=0;
    
    cout<<"Please enter a decimal number";
    cin>>a;
    if(a<2)
    {
        cout<<a;
    }
    else
    {
        c++;
        b=a%2;
        a/=2;
        d=pow(10,c);
        f=f+b*d;
    
    }
    
    cout<<"The binary system is:"<<f<<endl;
    
}
