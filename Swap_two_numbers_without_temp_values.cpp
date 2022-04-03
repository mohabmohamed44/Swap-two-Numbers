#include <iostream>
using namespace std;

int main() {
    int m = 15, n= 100;

    cout << "Before Swapping: " << endl;
    cout << "m = " << m << " , n = " << n << endl;

    // process of Swapping of 2 numbers...
    m = m + n;
    n = m - n;
    m = m - n;

    cout << endl << "After Swapping: " << endl;
    cout << "m = " << m << " , n = " << n << endl;
    return 0; 
}