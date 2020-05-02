#include <iostream>
#include <string>

using namespace std;

#pragma warning(disable:4996) // во избежание ошибки с "небезопасными" функциями

int main()
{
    setlocale(LC_ALL, "Russian");
    // 15.Подсчитать количество круглых и квадратных скобок в строке
    cout << "*Базовый уровень*" << endl << endl;
    string array;
    cout << "Введите строку с символами(без использования пробела)" << endl;
    cin >> array;
    int counter1 = 0, counter2 = 0;
    for (int i = 0; i < array.length(); i++)
    {
        if (array[i] == ')' || array[i] == '(')
        {
            counter1++;
        }
        else if (array[i] == ']' || array[i] == '[')
        {
            counter2++;
        }
    }
    cout << "Количество круглых скобок: " << counter1 << endl;
    cout << "Количество квадратных скобок: " << counter2 << endl;
    //15. В заданной строке удалить последний пробел.

    cout << endl << "Средний уровень" << endl << endl;
    char entering[] = "Get your act to gether.";
    char output[sizeof entering] = { NULL };
    char* P = strrchr(&entering[0], ' ');
    strncat(output, entering, strlen(entering) - strlen(P));
    strcat(output, P + 1);
    cout << output<<endl<<endl<<endl;
}