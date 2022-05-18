#include <iostream>
#include <map>
#include <fstream>

using namespace std;

const int N = 256;

map <string, int> L;
map <string, int>::iterator it;

void ReadFile()
{
	cout << endl << "ReadFile:  " << endl; //Для красоты 
	char S[N] = { ""}; //В S будут считываться строки 

	ifstream in1("file2.txt"); //Открыли файл для чтения
	while (!in1.eof()) //Будем читать информацию пока не дойдем до конца файла
	{
		in1.getline(S, N); //Построчное считывание информации в S 
		cout << S << endl; //Вывод очередной строки на экран 
	}
	in1.close();  //Закрыли открытый файл
}

int main()
{
	ifstream Fin("file.txt");
	ofstream Fout("file2.txt");
	string s;
	int p = L.count(s);
	while (Fin >> s) L[s]++;
	{int p;
	p = L.count(s);
	if (p == 1)
		L[s] ++;
	else
		L.insert(pair <string, int>(s, 1));
	}
	for (it = L.begin(); it != L.end(); it++)
		Fout << it->first << " " << it->second << endl;
	
	ReadFile();

	return 0;
}