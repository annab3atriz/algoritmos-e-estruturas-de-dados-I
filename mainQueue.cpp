#include <string>
#include <iostream>
#include "Queue.h" 
using namespace std;

void menu(Queue& segundaManha, Queue& segundaTarde,
    Queue& tercaManha, Queue& tercaTarde,
    Queue& quartaManha, Queue& quartaTarde,
    Queue& quintaManha, Queue& quintaTarde,
    Queue& sextaManha, Queue& sextaTarde) 
    
    {
    

    int n;
    cout << "============================================" << endl;
    cout << "                   MENU                     " << endl;
    cout << "============================================" << endl;

    cout << "1. Cadastro para vacinação" << endl;
    cout << "2. Mostrar fila por slot" << endl;
    cout << "3. Remoção da fila" << endl;
    cout << "4. Sair" << endl;

    cin >> n;
    cin.ignore();
    Pessoa pessoa;
    switch (n) {
        case 1:
            system("clear");
            int m, k;
            cout << "============================================" << endl;
            cout << "           Cadastro para vacinação          " << endl;
            cout << "============================================" << endl;
            cout << "Dados do paciente:" << endl;
            cout << "Nome: ";
            getline(cin, pessoa.nome);
            cout << "CPF: ";
            getline(cin, pessoa.cpf);
            cout << "Endereço: ";
            getline(cin, pessoa.endereco);
            cout << "Idade: ";
            cin >> pessoa.idade;
            cin.ignore();
            cout << endl;
            cout << "Selecione um dos períodos de vacinação dispónivel: " << endl;
            cout << endl;
            if(!segundaManha.full()) {cout << "1. Segunda de manhã" << endl;}
            if(!segundaTarde.full()) {cout << "2. Segunda de tarde" << endl;}
            if(!tercaManha.full()) {cout << "3. Terça de manhã" << endl;}
            if(!tercaTarde.full()) {cout << "4. Terça de tarde" << endl;}
            if(!quartaManha.full()) {cout << "5. Quarta de manhã" << endl;}
            if(!quartaTarde.full()) {cout << "6. Quarta de tarde" << endl;}
            if(!quintaManha.full()) {cout << "7. Quinta de manhã" << endl;}
            if(!quintaTarde.full()) {cout << "8. Quinta de tarde" << endl;}
            if(!sextaManha.full()) {cout << "9. Sexta de manhã" << endl;}
            if(!sextaTarde.full()) {cout << "10. Sexta de tarde" << endl;}

            cin >> m;
            switch (m) {
                case 1:
                    segundaManha.append(pessoa);
                    break;
                case 2:
                    segundaTarde.append(pessoa);
                    break;
                case 3:
                    tercaManha.append(pessoa);
                    break;
                case 4: 
                    tercaTarde.append(pessoa);
                    break;
                case 5:
                    quartaManha.append(pessoa);
                    break;
                case 6:
                    quartaTarde.append(pessoa);
                    break;
                case 7:
                    quintaManha.append(pessoa);
                    break;
                case 8:
                    quintaTarde.append(pessoa);
                    break;
                case 9:
                    sextaManha.append(pessoa);
                    break;
                case 10:
                    sextaTarde.append(pessoa);
            }
            cout << endl;
            cout << "0. Voltar para menu" << endl;
            cin >> k;
            if(k == 0) {
                system("clear");
            }
            break;
            
        case 2:
            cout << "Selecione o slot do qual quer ver a fila" << endl;
            cout << "1. Segunda de manhã" << endl;
            cout << "2. Segunda de tarde" << endl;
            cout << "3. Terça de manhã" << endl;
            cout << "4. Terça de tarde" << endl;
            cout << "5. Quarta de manhã" << endl;
            cout << "6. Quarta de tarde" << endl;
            cout << "7. Quinta de manhã" << endl;
            cout << "8. Quinta de tarde" << endl;
            cout << "9. Sexta de manhã" << endl;
            cout << "10. Sexta de tarde" << endl;
            cin >> m;
            switch (m) {
                case 1:
                    segundaManha.imprimirQueue();
                    break;
                case 2:
                    segundaTarde.imprimirQueue();
                    break;
                case 3:
                    tercaManha.imprimirQueue();
                    break;
                case 4: 
                    tercaTarde.imprimirQueue();
                    break;
                case 5:
                    quartaManha.imprimirQueue();
                    break;
                case 6:
                    quartaTarde.imprimirQueue();
                    break;
                case 7:
                    quintaManha.imprimirQueue();
                    break;
                case 8:
                    quintaTarde.imprimirQueue();
                    break;
                case 9:
                    sextaManha.imprimirQueue();
                    break;
                case 10:
                    sextaTarde.imprimirQueue();
                    break;
            }
            cout << endl;
            cout << "0. Voltar para menu" << endl;
            cin >> k;
            if(k == 0) {
                system("clear");
            }

            break;
        case 3:
            cout << "Selecione o slot do qual deseja remover uma pessoa" << endl;
            cout << "1. Segunda de manhã" << endl;
            cout << "2. Segunda de tarde" << endl;
            cout << "3. Terça de manhã" << endl;
            cout << "4. Terça de tarde" << endl;
            cout << "5. Quarta de manhã" << endl;
            cout << "6. Quarta de tarde" << endl;
            cout << "7. Quinta de manhã" << endl;
            cout << "8. Quinta de tarde" << endl;
            cout << "9. Sexta de manhã" << endl;
            cout << "10. Sexta de tarde" << endl;

            cin >> m;
            switch (m) {
                case 1:
                    segundaManha.serve(pessoa);
                    cout << "Nome " << pessoa.nome << endl;
                    cout << "CPF: " << pessoa.cpf << endl;
                    cout << "Endereço: " << pessoa.endereco << endl;
                    cout << "Idade: " << pessoa.idade << endl;
                    break;
                case 2:
                    segundaTarde.serve(pessoa);
                    cout << "Nome " << pessoa.nome << endl;
                    cout << "CPF: " << pessoa.cpf << endl;
                    cout << "Endereço: " << pessoa.endereco << endl;
                    cout << "Idade: " << pessoa.idade << endl;
                    break;
                case 3:
                    tercaManha.serve(pessoa);
                    cout << "Nome " << pessoa.nome << endl;
                    cout << "CPF: " << pessoa.cpf << endl;
                    cout << "Endereço: " << pessoa.endereco << endl;
                    cout << "Idade: " << pessoa.idade << endl;
                    break;
                case 4: 
                    tercaTarde.serve(pessoa);
                    cout << "Nome " << pessoa.nome << endl;
                    cout << "CPF: " << pessoa.cpf << endl;
                    cout << "Endereço: " << pessoa.endereco << endl;
                    cout << "Idade: " << pessoa.idade << endl;
                    break;
                case 5:
                    quartaManha.serve(pessoa);
                    cout << "Nome " << pessoa.nome << endl;
                    cout << "CPF: " << pessoa.cpf << endl;
                    cout << "Endereço: " << pessoa.endereco << endl;
                    cout << "Idade: " << pessoa.idade << endl;
                    break;
                case 6:
                    quartaTarde.serve(pessoa);
                    cout << "Nome " << pessoa.nome << endl;
                    cout << "CPF: " << pessoa.cpf << endl;
                    cout << "Endereço: " << pessoa.endereco << endl;
                    cout << "Idade: " << pessoa.idade << endl;
                    break;
                case 7:
                    quintaManha.serve(pessoa);
                    cout << "Nome " << pessoa.nome << endl;
                    cout << "CPF: " << pessoa.cpf << endl;
                    cout << "Endereço: " << pessoa.endereco << endl;
                    cout << "Idade: " << pessoa.idade << endl;
                    break;
                case 8:
                    quintaTarde.serve(pessoa);
                    cout << "Nome " << pessoa.nome << endl;
                    cout << "CPF: " << pessoa.cpf << endl;
                    cout << "Endereço: " << pessoa.endereco << endl;
                    cout << "Idade: " << pessoa.idade << endl;
                    break;
                case 9:
                    sextaManha.serve(pessoa);
                    cout << "Nome " << pessoa.nome << endl;
                    cout << "CPF: " << pessoa.cpf << endl;
                    cout << "Endereço: " << pessoa.endereco << endl;
                    cout << "Idade: " << pessoa.idade << endl;
                    break;
                case 10:
                    sextaTarde.serve(pessoa);
                    cout << "Nome " << pessoa.nome << endl;
                    cout << "CPF: " << pessoa.cpf << endl;
                    cout << "Endereço: " << pessoa.endereco << endl;
                    cout << "Idade: " << pessoa.idade << endl;
                    break;
            }
            cout << endl;
            cout << "0. Voltar para menu" << endl;
            cin >> k;
            if(k == 0) {
                system("clear");
            }
            break;
        case 4: 
            exit(0);
            break;
        default:
            cout << "Entre com número válido!";



    }
}



int main() {

    Queue segundaManha, segundaTarde, tercaManha, tercaTarde, quartaManha, quartaTarde, quintaManha, quintaTarde, sextaManha, sextaTarde;
    while(true) {
        menu(segundaManha, segundaTarde, tercaManha, tercaTarde, quartaManha, quartaTarde, quintaManha, quintaTarde, sextaManha, sextaTarde);
    }
    

    




    return 0;
}