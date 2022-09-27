#include <iostream>
#define _USE_MATH_DEFINES
#include<cmath>
int main(){
    setlocale(LC_ALL, "Russian");
    using namespace std;
    int n;
    double S,r;
    cout << "Введите количество сторон - " << "\n";
    scanf("%d",&n);
    cout << "Введите радиус окружности - " << "\n";
    scanf("%lf",&r);
    S = (pow(r, 2) * n * sin(2 * M_PI / n)) * 0.5;
    printf("площадь правильного %d-угольника окружности радиуса r=%lf-угольника ,равна S=%lf",n,r,S);
    return 0;
}
