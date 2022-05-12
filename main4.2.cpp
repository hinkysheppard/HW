#include <iostream>
#include <string>
using namespace std;

int main()
{
    string login = "alina";
    string password = "2222";
    string log1;
    string pass;
    for (int i=0; i<3; i++)
    {
        cout << i+1 << " попытка ввода логина:";
        cin >> log1;
        if (log1 == login)
        {
            cout << "Логин принят. Введите пароль: " << endl;
            cin >> pass;
            if (pass == password)
            {
                cout << "Доступ разрешен!";
                return 0;
            }
            else
                cout << "Доступ запрещен!";
                return 0;
        }
    }
}