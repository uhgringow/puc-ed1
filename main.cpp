#include<iostream>
#include "queue.h"
#include "stack.h"

using namespace std;

int main()
{
    int n = -1, idade;
    string nome;

    Thing t;
    Queue q;
    Stack s;

    /*
    cout << t.getNome() << "\t" << t.getIdade() << "\n";
    s.push(&t);
    t.setNome("Leonor Santos Correia");
    t.setIdade(20);
    cout << t.getNome() << "\t" << t.getIdade() << "\n";
    s.push(&t);
    t.setNome("Giovanna Castro Sousa");
    t.setIdade(28);
    cout << t.getNome() << "\t" << t.getIdade() << "\n";
    s.push(&t);*/


    while(n != 0){
        cout << "0 - Sair\n1 - Push Stack\n2 - Pop Stack\nValor: ";
        cin >> n;
        switch (n) {
            case 1:
                cout << "Nome:\t";
                cin >> nome;
                cout << "Idade:\t";
                cin >> idade;
                cout << endl;
                t.setNome(nome);
                t.setIdade(idade);
                break;
            case 2:
                cout << "Nome:\t" << t.getNome() << "\n" << "Idade:\t" << t.getIdade() << endl;
                break;
        }
        system("cls");

    }

}
