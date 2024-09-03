#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef struct  {
    string nome_avalhador;
    string modelo_guitarra;
    string marca_guitarra;
    string linha_guitarra;
    int nota;
    string comentario;
    string data_hora;
	}Avalhacao;

void inicializarVetor(Avalhacao vetor[], int n){
    for (int i = 0; i < n; i++){
        vetor[i].nome_avalhador = "";
        vetor[i].modelo_guitarra = "";
        vetor[i].marca_guitarra = "";
        vetor[i].linha_guitarra = "";
        vetor[i].nota = 0;
        vetor[i].comentario = "";
        vetor[i].data_hora = "";
    }
}

int cadastrarAvalhacao(Avalhacao vetor[], int tamanho, int quantidadeAvalhacoes){
	for(int i=0; i<tamanho; i++){
		if(vetor[i].nome_avalhador==""){
			fflush(stdin);
			cout << "Informe o nome do avalhador: ";
			cin.ignore();
			getline(cin, vetor[i].nome_avalhador);
			fflush(stdin);
			cout << "Informe o modelo da guitarra: ";
			getline(cin, vetor[i].modelo_guitarra);
			fflush(stdin);
			cout << "Informe o fabricante da guitarra: ";
			getline(cin, vetor[i].marca_guitarra);
			fflush(stdin);
			cout << "Informe a linha da guitarra: ";
			getline(cin, vetor[i].linha_guitarra);
			fflush(stdin);
			cout << "Informe uma nota de 0 a 10 para a guitarra: ";
			cin >> vetor[i].nota;
			fflush(stdin);
			cout << "Coloque um comentario sobre a guitarra: ";
			cin.ignore();
			getline(cin, vetor[i].comentario);
			cout << "Informe a data e hora da avalhacao: ";
			getline(cin, vetor[i].data_hora);
			break;
		}
		
	}
	quantidadeAvalhacoes++;
	return quantidadeAvalhacoes;
}



void listarAvalhacoes(Avalhacao vetor[], int quantidadeAvalhacoes){
	for(int i=0; i<quantidadeAvalhacoes; i++){
		cout << "Nome do Avalhador: " << vetor[i].nome_avalhador << endl;
		cout << "Modelo: " << vetor[i].modelo_guitarra << endl;
		cout << "Marca ou Fabricante: " << vetor[i].marca_guitarra << endl;
		cout << "Linha: " << vetor[i].linha_guitarra << endl;
		cout << "Nota: " << vetor[i].nota << endl;
		cout << "comentario: " << vetor[i].comentario << endl;
		cout << "Data e hora da avalhacao: " << vetor[i].data_hora << endl;
		cout << "##########################";
	}
}

void pesquisarAvalhacoes(Avalhacao vetor[], int tamanho){
	string modelo_guita;
	int contador_nota = 0;
	cout << "Informe o modelo da guitarra que quer pesquisar: ";
	cin.ignore();
	getline(cin, modelo_guita);
	// Encontrar a maior nota para o modelo especificado
    int maior_nota = -1;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i].modelo_guitarra == modelo_guita) {
            if (vetor[i].nota > maior_nota) {
                maior_nota = vetor[i].nota;
            }
        }
    }

    // Exibir as avaliações do modelo especificado em ordem decrescente de nota
    for (int nota = maior_nota; nota >= 0; nota--) {
        for (int i = 0; i < tamanho; i++) {
            if (vetor[i].modelo_guitarra == modelo_guita && vetor[i].nota == nota) {
                cout << "Nome do Avalhador: " << vetor[i].nome_avalhador << endl;
                cout << "Modelo: " << vetor[i].modelo_guitarra << endl;
                cout << "Marca ou Fabricante: " << vetor[i].marca_guitarra << endl;
                cout << "Linha: " << vetor[i].linha_guitarra << endl;
                cout << "Nota: " << vetor[i].nota << endl;
                cout << "Comentario: " << vetor[i].comentario << endl;
                cout << "Data e hora da avalhacao: " << vetor[i].data_hora << endl;
                cout << "##########################" << endl;
            }
        }
    }
}