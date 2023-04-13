#include <iostream>
using namespace std; 

int max( int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y; 
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    

    int m = max(a,b);

    cout<<"Max number is: "<<m;
    return 0; 


}