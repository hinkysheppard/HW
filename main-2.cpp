#include <iostream>

using namespace std;



int main(){
     
    char oper;
    int a = 0;
    int b = 0;
    int num = 0;
    int c[num] = {};
    int d[num] = {};
    
    cout << "Введите значение 1: ";
    cin >> a;
    cout << endl << "Введите значение 2: ";
    cin >> b;
    
    cout << endl << "Введите количество элементов массива " << endl;
    cin >> num;
    
    cout << endl;
    cout << "Заполните массив 1: ";
    
    for(int j = 0; j < num; j++)
    {
        cin >> c[j];
        cout << endl;
    }
    
    cout << endl;
    cout << "Заполните массив 2: ";
    
    for(int k = 0; k < num; k++)
    {
        cin >> d[k];
        cout << endl;
    }
    
    cout << endl;
    
    
    cout << "Выберите действие - +" << endl;
    cin >> oper;
    
    switch (oper){
        case '+':
        cout << "Результат 1: " << a + b << endl;
        cout << "Результат массива: ";
        for (int x = 0; x < num; x++)
        {
            cout << c[x] + d[x] << endl;
        }
        break;
        case '-':
        cout << "Результат: " << a - b << endl;
        cout << "Результат массива: ";
        for (int x = 0; x < num; x++)
        {
            cout << c[x] - d[x] << endl;
        }
        break;
        
        default:
        cout << "Такого действия нет" << endl;
    }
    
    
    
return 0;
}
