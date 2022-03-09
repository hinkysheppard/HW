#include <iostream>
 
using namespace std;
 
int getNod(int x, int y);
 
int main()
{
 
    int a1, b1, a2, b2, res1, res2, nod;  
    
    char c;
 
        cout<<"Введите числитель первой дроби-> "<<endl;
        cin>>a1;
        cout<<"Введите знаменатель первой дроби-> "<<endl;
        cin>>b1;
        cout<<"Введите числитель второй дроби-> "<<endl;
        cin>>a2;
        cout<<"Введите знаменатель первой дроби-> "<<endl;
        cin>>b2;
        cout<<"Введите действие (+,-,*,/)-> "<<endl;
        cin >> c;
 
    switch (c)
        {
    case '+':
        {
            res1 = a1*b2+a2*b1;
            res2 = b1*b2;
            
            nod = getNod(res1, res2);
            res1 /= nod; res2 /= nod;
            
            cout << res1 << "\n - \n" << res2 << endl;
            break;
        }
    case '-':
        {
            res1 = a1*b2-a2*b1; 
            res2 = b1*b2;
 
            nod = getNod(res1, res2);
            res1 /= nod; res2 /= nod;
            
            cout << res1 << "\n - \n" << res2 << endl;
            break;
        }
    case '*':
        {
            res1 = a1*a2; 
            res2 = b1*b2;
 
            nod = getNod(res1, res2);
            res1 /= nod; res2 /= nod;
            
            cout << res1 << "\n - \n" << res2 << endl;
            break;
        }
    case '/':
        {
            res1 = a1*b2; 
            res2 = a2*b1;
 
            nod = getNod(res1, res2);
            res1 /= nod; res2 /= nod;
            
            cout << res1 << "\n - \n" << res2 << endl;
            break;
        }
    default:
            cout << "Введено неверное действие, пробуйте снова." << endl;
        
    }
 
 
    return 0;
}

int getNod(int x, int y)
{ 
    if (y == 0)  
        return x;  
    return getNod(y, x % y);
}
