//Anna Beatriz Souza e Silva - 13694103
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

Stack::Stack() {
    top = NULL;
    count = 0;
}

Stack::~Stack() {
    clear();
}

bool Stack::empty() {
    if(top==NULL) {
        return true;
    } else {
        return false;
    }
}

bool Stack::full() { //desnessário pq na alocação dinâmica o limite é o limite da memória disponível
    cout << "Memória cheia!" << endl;
    return false;
}

void Stack::push(StackEntry x) {
    StackPointer p;
    p = new StackNode;
    if(p==NULL){ //quando p=NULL é pq não há ponteiros sobrando e a memória está cheia
        cout << "Memoria insuficiente" << endl;
        abort();
    }
    p->entry = x;
    p->nextNode = top;
    top = p;
    count++;
}

void Stack::pop(StackEntry &x) {
    StackPointer p; //para poder apagar a referência ao nó excluido
    if(empty()){
        cout << "Pilha vazia!" <<endl;
        abort();
    }
    x = top->entry;
    p = top;
    top = top->nextNode;
    delete p;
    count--;

}

void Stack::clear() {
    StackEntry x;
    while(! empty()) {
        pop(x);
    }
    count = 0;
}

void Stack::getTop(StackEntry &x) {
    if(top == NULL)
    {   cout << "Pilha vazia" << endl;
        abort();
    }
    x = top->entry;
}

int Stack::size() {
    return count;
}