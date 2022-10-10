#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    int num;
    float z, b, a, quest, nonres, res;
    cout << "enter number of x: ";
    cin >> num;
    for(int i = 1; i <= num; i++)
    {
    cout << "Enter values Z, B, A, quest для X" << i << ":" << endl;
    cout << "enter z: ";
    cin >> z;
    cout << "enter b: ";
    cin >> b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter quest: ";
    cin >> quest;

    nonres = pow(z, 3) - b + pow(a, 2) / pow(tan(quest), 2);
    res = res + nonres;
    }
    cout << "\nresult = " << res << endl;
 
    return 0;
}
