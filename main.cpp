#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main () {
setlocale (LC_ALL, "Russian");
// =============================== ЗАДАЧА 1
double x, y;
cout<<"Введите число для X: ";
cin>>x;
if (x > -19 && x < 0)
    y = x - (1.0 / x) + pow(x , 2);
else if (x >= 0)
    y = (1 - x) + pow(x , 2);
else y = pow(tan(13 * x - 1), 3);
cout << "Результат: " << y << endl;

/*=============================== ЗАДАНИЕ НА ЛАБОРАТОРНУЮ РАБОТУ
1*/
cout<<"Введите число для X: ";
    cin>>x;
cout<<"Введите число для Y: ";
    cin>>y;
if(x < y)
    x *= 2;
cout<<"X = "<<x<<endl;
cout<<"Y = "<<y<<endl;
    return 0;
}