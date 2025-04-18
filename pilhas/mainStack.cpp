//Anna Beatriz Souza e Silva - 13694103
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main() {
    Stack Pilha;
 
    string palavra;
    cout << "Insira a palavra: ";
    cin >> palavra;
    for(int i = 0; i<palavra.length(); i++) {
        Pilha.push(palavra[i]);
    }

    cout << "Palavra ao contrario: ";

    for(int i = 0; i<palavra.length(); i++) {
        char x;
        Pilha.pop(x);
        cout << x;
    }

    cout << endl;

    return 0;
}