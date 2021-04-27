#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <locale.h>

using namespace std; //Pra n�o ter q bota o std:: antes da maioria dos comandos.

long long int contarNumeros(string nomeArquivo) { //M�todo que serve apenas para contar os n�meros do arquivo e retornar o contador do tipo long long int para a main.
	ifstream arquivo; //Cria o objeto "arquivo" no modo leitura --> ifstream.
	arquivo.open(nomeArquivo.c_str()); //Abre o arquivo pelo nome, que chega no par�metro do m�todo "string nomeArquivo". O c_str() serve para converter de string para const char (a fun��o do arquivo s� aceita char).
	
	if (!arquivo) { //S� serve para verificar se o arquivo abriu ou deu erro.
    	cerr << "ERRO: N�o foi poss�vel abrir o arquivo."; //Minha cl�ssica mensagem de ERRO (o cerr � "Console error" s� serve pra dizer q deu xabu mesmo).
    	system ("CLS");
    	exit(1);
	}
	
	string linha;
	int num;
	long long int contador=0;

	while (!arquivo.eof()) { //Vai roda esse while enquanto n�o for o final do arquivo --> EOF (End of file).
	    getline(arquivo,linha); //Pega o cont�udo da linha do arquivo e armazena na v�riavel do tipo string "linha".
	    
	    istringstream iss(linha); //Converte de string para um valor hexadecimal que � armazenado na vari�vel "iss" (essa vari�vel n�o � declarada mesmo, nem tenta procura).
	    iss >> num; //Passa o valor em hexadecimal para a vari�vel do tipo inteira "num" (se fica com d�vida de pq converte pra hexadecimal, isso � s� pq eu testei e vi q se tu bota pra exibir a vari�vel "iss" no console aparece em hexadecimal).
	    
	    if (iss != 0) { //Isso � meio q uma gambiarra q eu fiz pra verificar se � inteiro o n�mero, pq como s� se trata de inteiros, quando ele l� alguma letra o valor � 0 (o pr�prio 0 n�o � 0).
	    	contador++;
		}
    }  
    arquivo.close(); //Fecha o arquivo.
	return contador;
}

void armazenarNumeros(string nomeArquivo, long long int TAM) { //M�todo que serve apenas para armazenar os n�meros do arquivo em um array (arranjo).
	ifstream arquivo; //Cria o objeto "arquivo" no modo leitura --> ifstream.
	arquivo.open(nomeArquivo.c_str()); //Abre o arquivo pelo nome, que chega no par�metro do m�todo "string nomeArquivo". O c_str() serve para converter de string para const char (a fun��o do arquivo s� aceita char).
	
	if (!arquivo) { //S� serve para verificar se o arquivo abriu ou deu erro.
    	cerr << "ERRO: N�o foi poss�vel abrir o arquivo."; //Minha cl�ssica mensagem de ERRO (o cerr � "Console error" s� serve pra dizer q deu xabu mesmo).
    	system ("CLS");
    	exit(1);
	}
	
	string linha;
	int* numerosArmazenados = new int[TAM]; //Declara��o do array (arranjo) de elementos (erroneamente conhecido por n�s como vetor).
	int num;
	long long int i=0;
	
	while (!arquivo.eof()) { //Vai roda esse while enquanto n�o for o final do arquivo --> EOF (End of file).
	    getline(arquivo,linha); //Pega o cont�udo da linha do arquivo e armazena na v�riavel do tipo string "linha".
	    
	    istringstream iss(linha); //Converte de string para um valor hexadecimal que � armazenado na vari�vel "iss" (essa vari�vel n�o � declarada mesmo, nem tenta procura).
	    iss >> num; //Passa o valor em hexadecimal para a vari�vel do tipo inteira "num" (se fica com d�vida de pq converte pra hexadecimal, isso � s� pq eu testei e vi q se tu bota pra exibir a vari�vel "iss" no console aparece em hexadecimal).
	    
	    if (iss != 0) { //Isso � meio q uma gambiarra q eu fiz pra verificar se � inteiro o n�mero, pq como s� se trata de inteiros, quando ele l� alguma letra o valor � 0 (o pr�prio 0 n�o � 0).
	    	numerosArmazenados[i] = num;
	    	i++;
		}
    }  
    arquivo.close(); //Fecha o arquivo.
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	string nomeArquivo;
	cout << "Informe o nome do arquivo com a extens�o.\nValor: "; //Exibe no console a mensagem.
	cin >> nomeArquivo; //Armazena o valor q o usu�rio digitar na vari�vel do tipo string "nomeArquivo".
	
	long long int TAM = contarNumeros(nomeArquivo); //Chama o m�todo contarNumeros e passa como par�metro a string "nomeArquivo".
	armazenarNumeros(nomeArquivo,TAM); //Chama o m�todo armazenarNumeros e passa como par�metro a string "nomeArquivo" e o long long int "TAM".
	
	cout << "\nForam armazenados " << TAM << " n�meros com sucesso!"; //Exibe no console a mensagem.
	
	return 0;
}
