#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#include "modulos_guitarra.cpp"

#define TAM 10

int main(){
    Avalhacao vetor[TAM];
    int opcao, quantidadeAvalhacoes;	
	
    inicializarVetor(vetor, TAM);
    quantidadeAvalhacoes = 0;

    do {
        system("clear");
        cout << "\nMENU\n";
        cout << "1 - Cadastrar avalhacao\n";
        cout << "2 - Listar avalhacoes\n";
        cout << "3 - Pesquisar por modelo de guitarra\n";
        cout << "4 - Sair do sistema\n";
        cout << "Opcao: ";
        cin >> opcao;
		
		fflush(stdin);
		
        switch (opcao)
        {
        case 1:
            quantidadeAvalhacoes = cadastrarAvalhacao(vetor, TAM, quantidadeAvalhacoes);
            break;
        case 2:
            listarAvalhacoes(vetor, quantidadeAvalhacoes);
            break;
        case 3:
            pesquisarAvalhacoes(vetor, TAM);            
            break;
        case 4:
            break;
        default:
            cout << "Opcao Invalida!\n";
            break;
        }

        cout << "Pressione Enter para continuar...";
        cin.ignore();
        cin.get();
    } while(opcao != 4);

    return 1;
}
