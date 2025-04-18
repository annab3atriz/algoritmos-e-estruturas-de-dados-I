#include <string>
#include <iostream>
#include "Queue.h" 
using namespace std;


Queue::Queue() {
	head = 1;
	tail = MaxQueue;
	count = 0;
}

Queue::~Queue() {
	
}

void Queue::append(QueueEntry x) {
	if(full()) {
		cout << "fila cheia" << endl;
		abort();
	} 
	if(tail == MaxQueue) {
		tail = 1;
	} else {
		tail++;
	}
	//ou ainda tail = (tail % max) + 1;
	vetor[tail] = x;
	count++;

}


void Queue::serve(QueueEntry &x) {
	if(empty()) {
		cout << "Fila vazia!" << endl;
		abort();
	}
	x = vetor[head];
	head = (head % MaxQueue) + 1;
	count--;
}



void Queue:: clear() {
	head = 1;
    tail = MaxQueue;
	count = 0;
}

bool Queue::full() {
	if(count==MaxQueue) {
		return true;
	} else {
		return false;
	}
}

bool Queue::empty() {
	if(count == 0) {
		return true;
	} else {
		return false;
	}
}

void Queue::getFront(QueueEntry &x){
	if(empty()) {
		cout << "Lista vazia!" << endl;
		abort();
	}
	x = vetor[head];
}

void Queue::getRear(QueueEntry &x){
	if(empty()) {
		cout << "Lista vazia!" << endl;
		abort();
	} 
	x = vetor[tail];
}

int Queue::size() {
	return count;
}

void Queue::imprimirQueue() {
    int tamanho = count;
    for(int i = 0; i < tamanho; i++) {
        int indice = ((head + i - 1) % MaxQueue + 1);
        cout << "Nome: " << vetor[indice].nome << endl;
        cout << "CPF: " << vetor[indice].cpf << endl;
        cout << "Endereço: " << vetor[indice].endereco << endl;
        cout << "idade: " << vetor[indice].idade << endl;
        cout << "--------------------------------------------" << endl;

    }
    

}