#include <iostream>
using namespace std;

// Template class Array
template <class X>
class Array
{
private:
    X arr[10]; // Array of type X with size 10
    int size;  // Size of the array

public:
    // Constructor to initialize size
    Array()
    {
        size = 10;
    }

    // Method to insert value at a specific index
    void insert(int index, X value)
    {
        arr[index] = value;
    }

    // Method to get value at a specific index
    X getValue(int index)
    {
        return arr[index];
    }
};

int main()
{
    // Create instances of Array with different data types
    Array<int> o1;   // Array of integers
    Array<float> o2; // Array of floats

    // Insert values into the arrays
    o1.insert(0, 10);
    o2.insert(1, 20.5f);

    // Print a newline for better output formatting
    cout << endl;
    return 0;
}