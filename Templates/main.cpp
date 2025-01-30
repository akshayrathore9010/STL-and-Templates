#include <iostream>
using namespace std;

// The following commented-out functions are overloaded functions to find the bigger of two numbers.
// They are specific to int and float types.

// int big(int a, int b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }

// float big(float a, float b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }

// The following template function 'big' is a generic function that can handle any data type.
// It takes two parameters of the same type and returns the larger of the two.
template <class X>  
X big(X a, X b)
{
    if (a > b)
        return a;
    else
        return b;
}

// This template function 'big' is an overloaded version that can handle two parameters of different types.
// It returns the larger of the two, but the return type is the same as the type of the second parameter.
template <class X, class Y>
Y big(X a, Y b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    // Demonstrating the use of the first template function with int, float, and char types
    cout << big(4, 5) << endl;       // Output: 5
    cout << big(4.5, 5.5) << endl;   // Output: 5.5
    cout << big('a', 'b') << endl;   // Output: b

    // Demonstrating the use of the overloaded template function with mixed types
    cout << big(4, 5.5) << endl;     // Output: 5.5
    cout << big(4.5, 5) << endl;     // Output: 5
    cout << big(4.5, 5.5) << endl;   // Output: 5.5

    return 0;
}