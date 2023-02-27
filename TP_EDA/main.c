#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include "menu.h"

// mobilidade_eletrica *lista_mobilidade = NULL;
// cliente *lista_cliente = NULL;
// gestor *lista_gestor = NULL;

// int main(){

//     cliente *new_cliente = (cliente *) malloc(sizeof(cliente));
//     new_cliente->id = 1;
//     strcpy(new_cliente->nome, "João");
//     new_cliente->saldo = 100.00;
//     new_cliente->mobilidade_alugada = NULL;
//     new_cliente->next = lista_cliente; // Inserir no início da lista
//     lista_cliente = new_cliente; // Atualizar o início da lista

//     cliente *new_cliente = (cliente *) malloc(sizeof(cliente));
//     new_cliente->id = 2;
//     strcpy(new_cliente->nome, "João");
//     new_cliente->saldo = 100.00;
//     new_cliente->mobilidade_alugada = NULL;
//     new_cliente->next = lista_cliente; // Inserir no início da lista
//     lista_cliente = new_cliente; // Atualizar o início da lista

//     // Criar um novo gestor
//     gestor *new_gestor = (gestor *) malloc(sizeof(gestor));
//     new_gestor->id = 1;
//     strcpy(new_gestor->nome, "Ana");
//     strcpy(new_gestor->password, "1234");
//     new_gestor->next = lista_gestor;
//     lista_gestor = new_gestor;

//     // Criar um novo meio de mobilidade elétrica
//     mobilidade_eletrica *new_mobilidade = (mobilidade_eletrica *) malloc(sizeof(mobilidade_eletrica));
//     new_mobilidade->id = 1;
//     strcpy(new_mobilidade->tipo, "bicicleta elétrica");
//     new_mobilidade->nivel_bateria = 100.0;
//     new_mobilidade->alugada = 0;
//     new_mobilidade->next = lista_mobilidade;
//     lista_mobilidade = new_mobilidade;


// }

// #define MAXNOME 40

// //Funções para AutoIncrementar os ID's por uma File
// int autoIdJob() {
// 	int idJob;
// 	FILE* idFile = fopen("idJob.txt", "r");
// 	if (!idFile) {
// 		idFile = fopen("idJob.txt", "w");
// 		if (!idFile) return -1; // Erro
// 		fprintf(idFile, "%d", 1);
// 		fclose(idFile);
// 		return 1;
// 	}
// 	fscanf(idFile, "%d", &idJob); // Lê o ID e Incrementa 1 Valor
// 	idJob++;

// 	fclose(idFile); // Fecha a File
// 	idFile = fopen("idJob.txt", "w"); // Reabre a File
// 	fprintf(idFile, "%d", idJob);
// 	fclose(idFile);
// 	return idJob;
// }

// int autoIdOp() {
// 	int idOp;
// 	FILE* idFile = fopen("idOp.txt", "r");
// 	if (!idFile) {
// 		idFile = fopen("idOp.txt", "w");
// 		if (!idFile) return -1; // Erro
// 		fprintf(idFile, "%d", 1);
// 		fclose(idFile);
// 		return 1;
// 	}
// 	fscanf(idFile, "%d", &idOp); // Lê o ID e Incrementa 1 Valor
// 	idOp++;

// 	fclose(idFile); // Fecha a File
// 	idFile = fopen("idOp.txt", "w"); // Reabre a File
// 	fprintf(idFile, "%d", idOp);
// 	fclose(idFile);
// 	return idOp;
// }

// int autoIdMaq() {
// 	int idMaq;
// 	FILE* idFile = fopen("idMaq.txt", "r");
// 	if (!idFile) {
// 		idFile = fopen("idMaq.txt", "w");
// 		if (!idFile) return -1; // Erro
// 		fprintf(idFile, "%d", 1);
// 		fclose(idFile);
// 		return 1;
// 	}
// 	fscanf(idFile, "%d", &idMaq); // Lê o ID e Incrementa 1 Valor
// 	idMaq++;

// 	fclose(idFile); // Fecha a File
// 	idFile = fopen("idMaq.txt", "w"); // Reabre a File
// 	fprintf(idFile, "%d", idMaq);
// 	fclose(idFile);
// 	return idMaq;
// }


int main() {

	// Variáveis para Escolha da Opção dos Menus e SubMenus
	int option;
	int subOption;

	// Inserção de Máquinas Predefinidas
	//Maquina* maq = NULL;

	//maq = inserirMaquina(maq, 1, "Maquina1", 3, "Piso1");
	//maq = inserirMaquina(maq, 2, "Maquina2", 7, "Piso2");
	//maq = inserirMaquina(maq, 3, "Maquina3", 5, "Piso3");

	// Inserção de Operações Predefinidas
	//Operacao* op = NULL;

	//op = inserirOperacao(op, 1, "Op1");
	//op = inserirOperacao(op, 2, "Op2");
	//op = inserirOperacao(op, 3, "Op3");

	// Associação de Operações a Máquinas Predefinidas
	//op = associarMaquina(op, 1, 1);
	//op = associarMaquina(op, 1, 2);
	//op = associarMaquina(op, 2, 2);
	//op = associarMaquina(op, 2, 3);
	//op = associarMaquina(op, 3, 2);


	// Inserção de Jobs Predefinidos
	//Job* job = NULL;
	//job = inserirJob(job, 1, "Trabalho1");
	//job = inserirJob(job, 2, "Trabalho2");


	// Associar Operações a Jobs Predefinidos
	//job = associarOperacao(job, 1, 2);
	//job = associarOperacao(job, 1, 1);
	//job = associarOperacao(job, 2, 1);

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
					//listarOperacoes(op, maq);
					system("pause");
					break;

				case 2:
					//op = criaOperacao(op, job);
					system("pause");
					break;

				case 3:
					//op = removeOperacao(op);
					system("pause");
					break;

				case 4:
					//op = editaOperacao(op);
					system("pause");
					break;

				case 0:
					subOption = 0;
					break;

				default:
					printf("Opçao Inválida\n\n");
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
					//listarOperacoes(op, maq);
					system("pause");
					break;

				case 2:
					//op = criaOperacao(op, job);
					system("pause");
					break;

				case 3:
					//op = removeOperacao(op);
					system("pause");
					break;

				case 4:
					//op = editaOperacao(op);
					system("pause");
					break;

				case 0:
					subOption = 0;
					break;

				default:
					printf("Opçao Inválida\n\n");
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
					//listarOperacoes(op, maq);
					system("pause");
					break;

				case 2:
					//op = criaOperacao(op, job);
					system("pause");
					break;

				case 3:
					//op = removeOperacao(op);
					system("pause");
					break;

				case 4:
					//op = editaOperacao(op);
					system("pause");
					break;

				case 0:
					subOption = 0;
					break;

				default:
					printf("Opçao Inválida\n\n");
					system("pause");
					break;
				}

				system("cls");
			} while (subOption != 0);
			break;

		case 0:
			system("exit");
			break;

		default:
			printf("Opçao Inválida\n\n");
			system("pause");
			break;

		}
	} while (option != 0);

}