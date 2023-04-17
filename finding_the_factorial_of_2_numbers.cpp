#include <iostream>
using namespace std; 

int factorial(int n)
{
    // Base case : factorial of 0 is 1
    if (n == 0)
    {
        return 1; 
    }
    else
    {
        // Recursive case : multiply n with factorial of n-1
        return n * factorial(n - 1);

    }
}
int main()
{
    // Number for which factorial is to be calculated
    int num;
    cin>>num; 

    // call the factorial function and store the result
    int result = factorial(num);

    // Display the factorial
    cout<<"The factorial of" << num << "is : " << result << endl;

    return 0; 
}