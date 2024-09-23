#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca REPOS�VEL PARA CUIDAR DAS STRINGS
int registrar() //fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//inicio da cria��o de var�aveis/string
	char arquivo [40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o de var�aveis/string
	

	printf("Digite seu cpf para continuar: "); //Responsavel por copiar os valores das string
	scanf("%s", cpf); //%s refere-se as strings
	
	strcpy(arquivo, cpf); //Respons�vel por copiar o valor das strings
	
	FILE *file; //cria o arquivo no banco de dados
	file= fopen(arquivo, "w"); //cria o arquivo e o "W" significa escrever
	
	fprintf(file, "\nCPF: ");
	fprintf(file, cpf); //salvo o valor da variavel
	fclose(file); // fecho o arquivo
	
	printf("digite seu nome: ");
	scanf("%s", nome); //armazena os dados na var�avel
	
	file= fopen(arquivo, "a"); //cria o arquivo
	fprintf(file, "\nNOME:"); //salvo o valor da variavel
	fclose(file); // fecho o arquivo
		
	fopen(arquivo,"a");  //cria o arquivo
	fprintf(file,nome); //salvo o valor da variavel
	fclose(file); // fecho o arquivo
	

	
	printf("digite seu sobrenome: ");
	scanf("%s", sobrenome); //armazena os dados na var�avel
	
	file= fopen(arquivo, "a");
	fprintf(file, "\nSOBRENOME: ");
	fclose(file);
		
	file= fopen(arquivo, "a"); //cria o arquivo
	fprintf(file,sobrenome); //salvo o valor da variavel
	fclose(file); // fecho o arquivo
	

	
	printf("Qual cargo voc� ocupa? ");
	scanf("%s", cargo); //armazena os dados na var�avel
	
		file= fopen(arquivo, "a");
	    fprintf(file, "\nCARGO: ");
	    fclose(file);
	
	fopen(arquivo, "a"); //cria o arquivo
	fprintf(file,cargo); //salvo o valor da variavel
	fclose(file); // fecho o arquivo
	
		
	system("pause");
}
int consulta()
{
    setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
    char conteudo[200];
    
    printf("digite qual CPF consultar:");
    scanf("%s",cpf);
    
    FILE *file;
    file= fopen(cpf, "r");
    
    if(file == NULL)
    {
	printf("CPF n�o cadastrado.\n");
}
    	printf("\nEssas s�o as informa��es do usuario."); 
    while(fgets(conteudo, 200, file) != NULL)
    {

    	printf("%s", conteudo);
    	printf("\n");
	}
	
	system("pause");
}
int deletar()

{
     char cpf[40];
     
     printf("Digite o CPF a ser deletado:");
     scanf("%s",cpf);
     
     remove(cpf);
     
     FILE *file;
     file = fopen(cpf,"r");
    
    if(file == NULL)
    {
    	printf("CPF n�o cadastrado\n");
    	system("pause"); 
    }
}
int main()
{ 
     int opcao=0; // definindo var�aveis
   
     int x=1;
     
    for(x=1;x=1;)
    {
    	
    	          system("cls");
	


                  setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
   
                 printf("### Cart�rio da EBAC ### \n\n"); //inicio do menu
                 printf("Ecolha a op��o desejada do menu: \n\n");
                 printf("\t1- Registrar nomes\n");
                 printf("\t2- Consultar nomes\n");
                 printf("\t3- Deletar  nomes\n"); //fim do menu
                 printf("\t4- Sair do sistema \n\n");
                 printf("Op��o:");
   
                scanf("%d", &opcao); //armazenando a escolha do usu�rio
   
                 system("cls"); //reponsavel por limpar a tela
                 
				 switch(opcao) //inicio da sele��o de mensagens
				 {
				case 1:
				registrar(); //chamada de fun��es
                break;
                case 2:
                consulta();
            	 break;
            	 case 3:
            	deletar();
             	break;
             	case 4:
             	printf("Obrigado por usar nosso sistema");
             	return 0;
             	break;
             	default:
             	printf("Essa op��o n�o est� disponivel\n");
                  system("pause");
            	
			
                
               	} //fim da sele��o
                }
                }
   


