#include <string>
#include <iostream>
using namespace std;

struct Pessoa {
    string nome;
    string endereco;
    string cpf;
    int idade;

};

typedef Pessoa QueueEntry;

#ifndef QUEUE_H
#define QUEUE_H

class Queue {
	public:
		Queue();
		~Queue();
		void append(QueueEntry x);
		void serve(QueueEntry &x);
		bool empty();
		bool full();
		void clear();
		int size();
		void getFront(QueueEntry &x);
		void getRear(QueueEntry &x);
        void imprimirQueue();
	private:
		int count;
		int head;
		int tail;
		static const int MaxQueue = 2;
		QueueEntry vetor[MaxQueue+1];
};

#endif