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

    while(n != 0){
        cout << "0 - Sair\n1 - Push Stack\n2 - Pop Stack\nValor: ";
        cin >> n;
        system("clear");
        switch (n) {
            case 1:
                cout << "Nome:\t";
                cin >> nome;
                cout << "Idade:\t";
                cin >> idade;
                cout << endl;
                t.setNome(nome);
                t.setIdade(idade);
                s.push(&t);
                break;
            case 2:
                if(!s.isEmpty()){
                    s.pop(&t);
                    cout << "Nome:\t" << t.getNome() << "\n" << "Idade:\t" << t.getIdade() << "\n\n";
                }else {
                    cout << "PILHA VAZIA!\n\n";
                }
                break;
        }
    }

}
