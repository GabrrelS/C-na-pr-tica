// Faça um programa que lê a resposta de 15 usuários para a seguinte pergunta: “Você gosta de beterraba? Digite 1 para SIM e 2 para NÃO”. Após a coleta da resposta de cada usuário, o algoritmo deverá exibir a quantidade de respostas para cada opção.

#include <stdio.h>

int main(){
	int usuario, resposta;
	int sim = 0, nao = 0;
	
	printf("Entre:\n\n1- Sim.\n2- Nao.\n\n");
	
	for(int usuario = 1; usuario <= 15; usuario++){
		printf("Usuario %d, voce gosta de beterraba?\n", usuario);
		scanf("%d", &resposta);
		
		while(resposta != 1 && resposta != 2 ){
			printf("Opcao invalida!.\nDigite 1 para Sim e 2 para nao.\n");
			scanf("%d", &resposta);
		}
		
		if (resposta == 1){
			sim++;
		} else{
			nao++;
		}
	}
		printf("Resultados:\n");
		printf("Respostas Sim: %d.\nRespostas Nao:%d.\n", sim, nao);
	return 0;
}