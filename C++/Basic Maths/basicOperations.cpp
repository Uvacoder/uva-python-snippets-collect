#include <iostream>
using namespace std;

// program to add two numbers

int main()
{
    float num1, num2, sum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "Sum is: " << sum;
    return 0;
}


//============================================================================
//============================================================================


// program to add n number of integers

int main() {
    int num, sum = 0, i, n;
    cout << "How many number do you want to add? : ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum = sum + num;
    }
    cout << "Sum is : " << sum;
    return 0;
}

//============================================================================
//============================================================================
// program to subtract two numbers

int main()
{
    int num1, num2, sub;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    sub = num1 - num2;
    cout << "Subtraction is: " << sub;
    return 0;
}


//============================================================================
//============================================================================


// program to multiply two numbers

int main()
{
    int num1, num2, mul;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    mul = num1 * num2;
    cout << "Multiplication is: " << mul;
    return 0;
}


//============================================================================
//============================================================================


// program to divide two numbers

int main()
{
    float num1, num2, div;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    div = num1 / num2;
    cout << "Division is: " << div;
    return 0;
}


//============================================================================
//============================================================================