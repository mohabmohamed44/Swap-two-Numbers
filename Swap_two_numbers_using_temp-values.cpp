#include <iostream>
using namespace std;

int main() {
    int m = 15 , n = 100, temp;
    cout << "Before Swapping" << endl;
    cout << "m = " << m << " , n = " << n << endl;

    temp = m;
    m = n;
    n = temp;

    cout << endl << "After Swapping" << endl;
    cout << "m = " << m << " , n = " << n << endl;
    return 0;    
}