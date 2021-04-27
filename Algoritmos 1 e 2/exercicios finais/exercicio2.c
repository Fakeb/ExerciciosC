/*/
2. Ler	uma	string	e	chamar	uma	função	para realizar	a	sua	inversão dentro	da	mesma	string.		Mostrar	a	string	
invertida
/*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void inverter(char string[99]){
	
	int i;
	
	printf("\nFrase invertida:");
    
    for(i=strlen(string)-1;i>=0;i--){
        printf("%c",string[i]);

    }
    printf("\n");
    
}


int main(){
	
    char string[99];
    
    printf("Digite uma palavra ou frase para inverter: ");
    scanf("%[^\n]s",string);

    inverter(string);
    
    return 0;
}
