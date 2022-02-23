#include <iostream> 

using namespace std;

float a; // Глобальная переменная (расстояние в дюймах, сторона прямоуг)
float b; // Глобальная переменная (расстояние в см, сторона прямоуг)
void fync(); // Перевод дюймов в сантиметры
void S(); // Площадь прямоугольника

int main()
{
    int number;
    cout << "Выберите действие:" << "\n 1 - Перевод дюймов в сантиметры \n 2 - Площадь прямоугольника \n";
    cin >> number;
    switch(number) 
{
    case 1:
        fync();
        break;
    case 2:
        S();
        break;
    default:
        cout << "Такого действия нет";
        break;
}

    return 0;
}

void fync()
{
    cout << "Расстояние в дюймах = ";
    cin >> a;
    
    b = a * 2.54;
    cout << "Расстояние в сантиметрах = " << b << endl;
}
void S()
{
    cout << "1 Сторона прямоугольника = ";
    cin >> a;
    
    cout << "\n2 Сторона прямоугольника = ";
    cin >> b;
    
    cout << "\nПлощадь прямоугольника = " << a * b;
    
}