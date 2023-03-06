#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include "menu.h"

//Função Para Exportar todos os Dados
void exportarDados(Cliente* cliente, Mobilidade* mobilidade, Gestor* gestor) {

	remove("DadosExportados.txt");

	FILE* exportFile = fopen("DadosExportados.txt", "a");

	Cliente* cliAux = cliente;

	fprintf(exportFile, "------------------------------------------------------------------------------------------------------\n");
	fprintf(exportFile, "|                                  LISTA DE CLIENTES E MOBILIDADES                                   |\n");
	fprintf(exportFile, "------------------------------------------------------------------------------------------------------\n\n");


	if (cliente != NULL) {
		while (cliAux != NULL)
		{
			fprintf(exportFile, "NIF: % d     NOME : % s     E-MAIL : % s     SALDO : % .2f\n", cliAux->nif, cliAux->nome, cliAux->email, cliAux->saldo);

			ClienteMobilidade* CliMobAux = cliAux->mobilidade;

			if (CliMobAux != NULL)
			{
				while (CliMobAux != NULL)
				{
					Mobilidade* mobAux = mobilidade;

					while (mobAux != NULL && mobAux->id != CliMobAux->idMob)
					{
						mobAux = mobAux->next;
					}
					fprintf(exportFile, "\tID: %d   Tipo Mobilidade: %s     Bateria: %.2f     Autonomia: %.2f\n", mobAux->id, mobAux->tipo, mobAux->nivel_bateria, mobAux->autonomia);

					CliMobAux = CliMobAux->next;
				}
			}
			else
			{
				fprintf(exportFile, "\tSem mobilidades alugadas\n");
			}
			fprintf(exportFile, "------------------------------------------------------------------------------------------------------\n");
			fprintf(exportFile, "------------------------------------------------------------------------------------------------------\n\n");

			cliAux = cliAux->next;
		}
	}
	else
	{
		fprintf(exportFile, "Sem Clientes a apresentar\n");
	}

	Gestor* gesAux = gestor;

	fprintf(exportFile, "\n\n\n------------------------------------------------------------------------------------------------------\n");
	fprintf(exportFile, "|                                         LISTA DE GESTORES                                          |\n");
	fprintf(exportFile, "------------------------------------------------------------------------------------------------------\n\n");


	if (gestor != NULL) {
		while (gesAux != NULL)
		{
			fprintf(exportFile, "ID: %d     NOME: %s     PASSWORD: %s\n", gesAux->id, gesAux->nome, gesAux->password);

			fprintf(exportFile, "------------------------------------------------------------------------------------------------------\n");
			fprintf(exportFile, "------------------------------------------------------------------------------------------------------\n\n");

			gesAux = gesAux->next;
		}
	}
	else
	{
		fprintf(exportFile, "Sem Gestores a apresentar\n");
	}

	fclose(exportFile);

	printf("-------------------------------------------------------\n");
	printf("|              DADOS EXPORTADOS COM SUCESSO           |\n");
	printf("-------------------------------------------------------\n");

}


// Função para apresentar a lista das mobilidades por ordem decrescente de autonomia
void listaMobilidadeDESC(Mobilidade* mobilidade) {

	Mobilidade* arrayMob = malloc(sizeof(struct mobilidade));



}

int main() {

	// Variáveis para Escolha da Opção dos Menus e SubMenus
	int option;
	int subOption;

	// Inserçao de Meio Predefenidos
	Mobilidade* meios = NULL;

	meios = inserirMobilidade(meios, 1, "bicicleta", 55, 30);
	meios = inserirMobilidade(meios, 2, "bicicleta", 85, 50);
	meios = inserirMobilidade(meios, 3, "trotinete", 85, 50);

	// Inserção de Clientes Predefenidos
	Cliente* clientes = NULL;

	clientes = inserirCliente(clientes, 123456789, "Antonio", "antonio1234@gmail.com", 50);
	clientes = inserirCliente(clientes, 987654321, "Maria", "mariagomes@gmail.com", 50);
	clientes = inserirCliente(clientes, 112233445, "Rita", "rita.2003@gmail.com", 50);

	// Associação de Mobilidades aos Clientes
	clientes = associarMobilidade(clientes, 123456789, 1);
	clientes = associarMobilidade(clientes, 987654321, 2);

	// Inserção de Gestores Predefenidos
	Gestor* gestores = NULL;

	gestores = inserirGestor(gestores, 1, "Jose", "abcdefg");
	gestores = inserirGestor(gestores, 2, "Manuela", "qwerty");

	do
	{
		mostraMenu();
		scanf("%d", &option);
		system("cls");

		switch (option)
		{

			// MENU CLIENTE
		case 1:
			do
			{
				mostraClienteMenu();

				scanf("%d", &subOption);
				system("cls");

				switch (subOption)
				{

				case 1:
					listarClientes(clientes, meios);
					system("pause");
					break;

				case 2:
					clientes = criaCliente(clientes);
					system("pause");
					break;

				case 3:
					clientes = removeCliente(clientes);
					system("pause");
					break;

				case 4:
					clientes = editaCliente(clientes);
					system("pause");
					break;

				case 5:
					clientes = associaMobilidade(clientes, meios);
					system("pause");
					break;

				case 6:
					clientes = desassociaMobilidade(clientes, meios);
					system("pause");
					break;

				case 0:
					subOption = 0;
					break;

				default:
					printf("Opçao Invalida\n\n");
					system("pause");
					break;
				}

				system("cls");
			} while (subOption != 0);
			break;

			// MENU GESTOR
		case 2:
			do
			{
				mostraGestorMenu();

				scanf("%d", &subOption);
				system("cls");

				switch (subOption)
				{
				case 1:
					listarGestores(gestores);
					system("pause");
					break;

				case 2:
					gestores = criaGestor(gestores);
					system("pause");
					break;

				case 3:
					gestores = removeGestor(gestores);
					system("pause");
					break;

				case 4:
					gestores = editaGestor(gestores);
					system("pause");
					break;

				case 0:
					subOption = 0;
					break;

				default:
					printf("Opçao Invalida\n\n");
					system("pause");
					break;
				}

				system("cls");
			} while (subOption != 0);
			break;

			// MENU MOBILIDADE
		case 3:
			do
			{
				mostraMobilidadeMenu();

				scanf("%d", &subOption);
				system("cls");

				switch (subOption)
				{
				case 1:
					listarMobilidades(meios);
					system("pause");
					break;

				case 2:
					meios = criaMobilidade(meios);
					system("pause");
					break;

				case 3:
					meios = removeMobilidade(meios);
					system("pause");
					break;

				case 4:
					meios = editaMobilidade(meios);
					system("pause");
					break;

				case 5:
					listaMobilidadeDESC(meios);
					system("pause");
					break;
				
				case 0:
					subOption = 0;
					break;

				default:
					printf("Opçao Invalida\n\n");
					system("pause");
					break;
				}

				system("cls");
			} while (subOption != 0);
			break;

		case 4:
			exportarDados(clientes, meios, gestores);
			system("pause");
			break;

		case 0:
			system("exit");
			break;

		default:
			printf("Opçao Invalida\n\n");
			system("pause");
			break;

		}
		system("cls");
	} while (option != 0);

}