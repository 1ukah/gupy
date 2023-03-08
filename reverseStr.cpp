#include <iostream>
#include <string>

using namespace std;

void reverseStr(string& str)
{
    size_t strTam = str.length();

    for (int i = 0; i < strTam / 2; i++)
        swap(str[i], str[strTam - i - 1]);
}

int main()
{
    string str;

    cout << "Escreva uma palavra/frase: ";

    getline(cin, str);
    reverseStr(str);

    cout << "String ao contrario: " << str;

    return 0;
}