#include <iostream>

using namespace std;

int main()
{
    float a, b, f;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter f: ";
    cin >> f;
    cout << "result: ";
    cout <<((a + b - f / a) + f * a * a - (a + b)) << endl;


 
    return 0;
}
