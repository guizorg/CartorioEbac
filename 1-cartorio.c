#include <stdio.h>  //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aoca��o de texto por regi�o
#include <string.h> //biblioteca responsavel por cuidar das string



int registro()  //fun��o responsavel por cadastrar os usuarios no sistemas


{
	//inicio cria��o de variaveis/string
char arquivo[40];
char cpf[40];
char nome[40];
char sobrenome[40];
char cargo[40];
	//final cria��o de variaveis/string



	printf("digite o cpf a ser cadastrado:");//coletando cpf do usuario
	scanf("%s", cpf);//%s refere-se a string

	strcpy(arquivo, cpf); //responsavel por copiar os valares das string

	FILE *file; // criar o arquivo e o "w" siginifica escrever
	file=fopen(arquivo, "w");//cria o arquivo
	fprintf(file,cpf);//salva o valor da variavel
	fclose(file); //fecha o arquivo 

	file = fopen (arquivo, "a");
	fprintf(file,",");
	fclose(file);


	printf ("digite o nome a ser cadastrado:");//coletando nome de usuario 
	scanf ("%s", nome);

	file = fopen (arquivo, "a");
	fprintf(file,nome);
	fclose(file);

	file = fopen (arquivo, "a");
	fprintf(file,",");
	fclose(file);

	
	printf ("digite o sobrenome e ser cadastrado:");
	scanf("%s",sobrenome);

	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);


	printf ("digite o cargo a ser cadastrado: ");
	scanf ("%s", cargo);

	file = fopen (arquivo, "a");
	fprintf(file,cargo);
	fclose(file);

	
	system("pause");















}

int consulta()
{



    setlocale(LC_ALL, "portuguese");                                    //Definindo linguagem
    
char cpf [40];
char conteudo [200];

    printf("digite o cpf ser consultado:");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf,"r");

if(file == NULL)
{
    printf("nao foi possivel abrir o arquivo, nao localizado !.\n");
}
	
	while(fgets(conteudo, 200, file) !=NULL)
{
	printf("\n Esses s�o as informa��es dos us�ario:");
	printf("%s", conteudo);
	printf("\n\n");
		
		
}
	
    system("pause");
	
	
	
	
	
	
    
}

int deletar()
{
    char cpf [40];

    printf("digite o cpf do usuario a ser deletado: ");
    scanf("%s",cpf);

    remove(cpf);

    FILE *file;
    file = fopen(cpf,"r");

    if(file == NULL)
{
	printf("o usu�rio n�o se encontra no sistema!.");
	system("pause");
}

}


int main()
{
	int opcao=0;//Definindo variaveis
	int laco =1;
	char senhadigitada[]="a";
	int comparacao;

	printf("### CART�RIO DA EBAC ### \n\n");
	printf("login de administrador!\n\nDigite a senha: ");
	scanf("%s",senhadigitada);
	
	comparacao = strcmp(senhadigitada, "admin");
	
if(comparacao == 0)
{
	
    system ("cls");
for(laco=1;laco=1;)
{
    	 
    setlocale(LC_ALL, "portuguese");//Definindo linguagem
	
    printf(" ### CART�RIO DA EBAC ### \n\n");//Inicio de menu
    printf("PARA COME�AR ESCOLHA A OP��O DESEJADA ABAIXO\n\n");
    printf("\t1-  Registrar Nomes\n");
    printf("\t2-  Consultar Nomes\n");
    printf("\t3-  Deletar Nomes\n\n");
    printf("\t4-  Sair do sistema\n\n!");
    printf("Op�ao :");//Fim do menu
	

	
    scanf("%d", &opcao);//Armazenando a escolha do usuario
	
	
	
    system("cls");//resposavel por linpar a tela 
	( fclose(file) );	
	
switch(opcao) //inicio da sele��o do menu
{
    case 1:
    registro(); //chamada fun��o registro
    break;
 		
    case 2: //chamada fun��o consulta 
    consulta();
    break;
		
    case 3: //chamada fun��o deletar
    deletar();
    break;
		
    case 4:
    printf("obrigado por utilizar o sistema\n\n");
    return 0;
    break;
		
    default: //chamada fun��o erro
    printf("esta opcao nao esta disponove!\n");
    system("pause");
    break;	
			
		
} //fim da sele��o
}
}


else 
    printf("Senha incorreta!");
    
}
	
	




