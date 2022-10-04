#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    int x1,x2,y1,y2;
    cout << "x1: ";
    cin >> x1;

    cout << "x2: ";
    cin >> x2;

    cout << "y1: ";
    cin >> y1;

    cout << "y2: ";
    cin >> y2;

    cout << (x1 * x2) + (y1 * y2) << "\n";
    return 0;
}
