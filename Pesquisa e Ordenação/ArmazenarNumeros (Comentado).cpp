#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <locale.h>

using namespace std; //Pra não ter q bota o std:: antes da maioria dos comandos.

long long int contarNumeros(string nomeArquivo) { //Método que serve apenas para contar os números do arquivo e retornar o contador do tipo long long int para a main.
	ifstream arquivo; //Cria o objeto "arquivo" no modo leitura --> ifstream.
	arquivo.open(nomeArquivo.c_str()); //Abre o arquivo pelo nome, que chega no parâmetro do método "string nomeArquivo". O c_str() serve para converter de string para const char (a função do arquivo só aceita char).
	
	if (!arquivo) { //Só serve para verificar se o arquivo abriu ou deu erro.
    	cerr << "ERRO: Não foi possível abrir o arquivo."; //Minha clássica mensagem de ERRO (o cerr é "Console error" só serve pra dizer q deu xabu mesmo).
    	system ("CLS");
    	exit(1);
	}
	
	string linha;
	int num;
	long long int contador=0;

	while (!arquivo.eof()) { //Vai roda esse while enquanto não for o final do arquivo --> EOF (End of file).
	    getline(arquivo,linha); //Pega o contéudo da linha do arquivo e armazena na váriavel do tipo string "linha".
	    
	    istringstream iss(linha); //Converte de string para um valor hexadecimal que é armazenado na variável "iss" (essa variável não é declarada mesmo, nem tenta procura).
	    iss >> num; //Passa o valor em hexadecimal para a variável do tipo inteira "num" (se fica com dúvida de pq converte pra hexadecimal, isso é só pq eu testei e vi q se tu bota pra exibir a variável "iss" no console aparece em hexadecimal).
	    
	    if (iss != 0) { //Isso é meio q uma gambiarra q eu fiz pra verificar se é inteiro o número, pq como só se trata de inteiros, quando ele lê alguma letra o valor é 0 (o próprio 0 não é 0).
	    	contador++;
		}
    }  
    arquivo.close(); //Fecha o arquivo.
	return contador;
}

void armazenarNumeros(string nomeArquivo, long long int TAM) { //Método que serve apenas para armazenar os números do arquivo em um array (arranjo).
	ifstream arquivo; //Cria o objeto "arquivo" no modo leitura --> ifstream.
	arquivo.open(nomeArquivo.c_str()); //Abre o arquivo pelo nome, que chega no parâmetro do método "string nomeArquivo". O c_str() serve para converter de string para const char (a função do arquivo só aceita char).
	
	if (!arquivo) { //Só serve para verificar se o arquivo abriu ou deu erro.
    	cerr << "ERRO: Não foi possível abrir o arquivo."; //Minha clássica mensagem de ERRO (o cerr é "Console error" só serve pra dizer q deu xabu mesmo).
    	system ("CLS");
    	exit(1);
	}
	
	string linha;
	int* numerosArmazenados = new int[TAM]; //Declaração do array (arranjo) de elementos (erroneamente conhecido por nós como vetor).
	int num;
	long long int i=0;
	
	while (!arquivo.eof()) { //Vai roda esse while enquanto não for o final do arquivo --> EOF (End of file).
	    getline(arquivo,linha); //Pega o contéudo da linha do arquivo e armazena na váriavel do tipo string "linha".
	    
	    istringstream iss(linha); //Converte de string para um valor hexadecimal que é armazenado na variável "iss" (essa variável não é declarada mesmo, nem tenta procura).
	    iss >> num; //Passa o valor em hexadecimal para a variável do tipo inteira "num" (se fica com dúvida de pq converte pra hexadecimal, isso é só pq eu testei e vi q se tu bota pra exibir a variável "iss" no console aparece em hexadecimal).
	    
	    if (iss != 0) { //Isso é meio q uma gambiarra q eu fiz pra verificar se é inteiro o número, pq como só se trata de inteiros, quando ele lê alguma letra o valor é 0 (o próprio 0 não é 0).
	    	numerosArmazenados[i] = num;
	    	i++;
		}
    }  
    arquivo.close(); //Fecha o arquivo.
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	string nomeArquivo;
	cout << "Informe o nome do arquivo com a extensão.\nValor: "; //Exibe no console a mensagem.
	cin >> nomeArquivo; //Armazena o valor q o usuário digitar na variável do tipo string "nomeArquivo".
	
	long long int TAM = contarNumeros(nomeArquivo); //Chama o método contarNumeros e passa como parâmetro a string "nomeArquivo".
	armazenarNumeros(nomeArquivo,TAM); //Chama o método armazenarNumeros e passa como parâmetro a string "nomeArquivo" e o long long int "TAM".
	
	cout << "\nForam armazenados " << TAM << " números com sucesso!"; //Exibe no console a mensagem.
	
	return 0;
}
