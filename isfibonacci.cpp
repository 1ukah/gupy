#include <iostream>

using namespace std;

int main() 
{
    int seq = 1000, a = 0,  b = 1, proxSeq = 0, atual = 0, num = 0;

    cout << "Escolhe um numero: ";
    cin >> num;
    
    if (num < 0)
    {
        cout << "Escolha um numero positivo.";
        return 0;
    } 
        
    for (proxSeq = 0; proxSeq <= seq; proxSeq++)
    {
        if (num == atual)
        {
            cout << "Esse numero pertence a sequencia.";
            return 0;
        }
        else if (proxSeq == seq && num != atual)
        {
            cout << "Esse numero nao pertence a sequencia.";
            return 0;
        }

        atual = a;
        a = b;
        b = b + atual;
    }    
    
    return 0;
}