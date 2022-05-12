#include <Windows.h>
#include <exception>
#include <iostream>
using namespace std;
 
int main()
{
    int a = 0;
    int i = 0;
    cout << "Введите делимое: "
    cin >> a
    cout << endl;
    cout << "Введите делитель: "
    cin >> i;
    
    if(i = 0){
    __try
    {
        i = 1 / i;
    }
    __except(EXCEPTION_EXECUTE_HANDLER)
    {
        cout<< "Делить на 0 нельзя\r\n";
    }
    }
    else {
        cout << "Результат: "<< a / i ;
    }
    
    return 0;
}