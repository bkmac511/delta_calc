#include <iostream>

using namespace std;

int main() {

    float a;
    float b;
    float c;

    auto delta = [] (float a, float b, float c) -> float {
        return b*b-4*a*c;
    };

    cout << "Insert a: " << endl;
    cin >> a;

    cout << "Insert b: " << endl;
    cin >> b;

    cout << "Insert c: " << endl;
    cin >> c;

    double result = delta(a, b, c);
    cout << "Delta is equal to  " << result << endl;

    return 0;
}