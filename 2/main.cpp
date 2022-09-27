#include <iostream>

int main() {
    using namespace std;
    int num,n1,n2,n3,n4,n5;
    cout<<"Введите число - "<<"\n";
    cin >> num;
    n1 = num/10000;
    n2 = (num/1000)%10;
    n3 = (num/100)%10;
    n4 = (num/10)%10;
    n5 = num%10;
    cout << ((n1*100) + (n2*10) + n3) /((n4*10) + n5);
    return 0;
}
