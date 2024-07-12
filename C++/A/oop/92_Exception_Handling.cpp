#include<iostream>
using namespace std;

int main()
{
    try
    {
        int n1, n2;
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;

        if(n2 == 0)
        {
            throw -1;
        }

        double result;
        result = (double)n1 / n2;
        cout << "The result is: " << result << endl;
    }
    catch(...)
    {
        cout << "Divide by zero is not possible, try another one." << endl;
    }

    return 0;
}
