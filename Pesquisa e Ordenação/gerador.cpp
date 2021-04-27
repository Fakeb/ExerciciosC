#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
	
	// solicita pro usuario quantos numeros quer
	
	long long int quantidadeNumeros;
	cout << "Quantos numeros quer? ";
	cin >> quantidadeNumeros;
	//cout << quantidadeNumeros;
		
	
	//solicia pro usuario nome do arquivo destino
				
	char nomeArquivo[200];
	cout << "Informe nome do arquivo com extensao: ";
	cin >> nomeArquivo;
	//cout << nomeArquivo;
	
	//criar um arquivo para escrita
				
	ofstream procuradorArquivo;
	procuradorArquivo.open(nomeArquivo);
	
	//popula no arqvui a quantidade de numeros sorteados
	
	srand(time(NULL));
	int valor,contador;
	
	for(;quantidadeNumeros > 0 ;quantidadeNumeros--){
		
		valor = rand() % 10000;
		procuradorArquivo << valor << "\n";
		
		contador ++;
	}
	int vetor[contador];
		
	procuradorArquivo.close();
	
	cout << "Arquivo gerado com sucesso\n";

	return 1;
}