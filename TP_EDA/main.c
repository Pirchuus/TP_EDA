#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include "menu.h"

// mobilidade_eletrica *lista_mobilidade = NULL;
// cliente *lista_cliente = NULL;
// gestor *lista_gestor = NULL;


// cliente *new_cliente = (cliente *) malloc(sizeof(cliente));
// new_cliente->id = 1;
// strcpy(new_cliente->nome, "João");
// new_cliente->saldo = 100.00;
// new_cliente->mobilidade_alugada = NULL;
// new_cliente->next = lista_cliente; // Inserir no início da lista
// lista_cliente = new_cliente; // Atualizar o início da lista

// cliente *new_cliente = (cliente *) malloc(sizeof(cliente));
// new_cliente->id = 2;
// strcpy(new_cliente->nome, "João");
// new_cliente->saldo = 100.00;
// new_cliente->mobilidade_alugada = NULL;
// new_cliente->next = lista_cliente; // Inserir no início da lista
// lista_cliente = new_cliente; // Atualizar o início da lista

// // Criar um novo gestor
// gestor *new_gestor = (gestor *) malloc(sizeof(gestor));
// new_gestor->id = 1;
// strcpy(new_gestor->nome, "Ana");
// strcpy(new_gestor->password, "1234");
// new_gestor->next = lista_gestor;
// lista_gestor = new_gestor;

// // Criar um novo meio de mobilidade elétrica
// mobilidade_eletrica *new_mobilidade = (mobilidade_eletrica *) malloc(sizeof(mobilidade_eletrica));
// new_mobilidade->id = 1;
// strcpy(new_mobilidade->tipo, "bicicleta elétrica");
// new_mobilidade->nivel_bateria = 100.0;
// new_mobilidade->alugada = 0;
// new_mobilidade->next = lista_mobilidade;
// lista_mobilidade = new_mobilidade;

//void listarDescAutonomia() {
//
//	// Obter o número de meios de mobilidade elétrica na lista
//	int num_mobilities = 0;
//	electric_mobility* current_mobility = mobility_list;
//	while (current_mobility != NULL) {
//		num_mobilities++;
//		current_mobility = current_mobility->next;
//	}
//
//	// Armazenar os dados dos meios de mobilidade elétrica em um vetor de estruturas
//	electric_mobility* mobility_array = (electric_mobility*)malloc(num_mobilities * sizeof(electric_mobility));
//	current_mobility = mobility_list;
//	for (int i = 0; i < num_mobilities; i++) {
//		mobility_array[i].id = current_mobility->id;
//		strcpy(mobility_array[i].type, current_mobility->type);
//		mobility_array[i].battery_level = current_mobility->battery_level;
//		mobility_array[i].autonomy = current_mobility->autonomy;
//		current_mobility = current_mobility->next;
//	}
//
//	// Ordenar o vetor de meios de mobilidade elétrica em ordem decrescente de autonomia
//	for (int i = 0; i < num_mobilities - 1; i++) {
//		int max_index = i;
//		for (int j = i + 1; j < num_mobilities; j++) {
//			if (mobility_array[j].autonomy > mobility_array[max_index].autonomy) {
//				max_index = j;
//			}
//		}
//		electric_mobility temp = mobility_array[i];
//		mobility_array[i] = mobility_array[max_index];
//		mobility_array[max_index] = temp;
//	}
//
//	// Imprimir os dados dos meios de mobilidade elétrica na ordem do vetor ordenado
//	for (int i = 0; i < num_mobilities; i++) {
//		printf("ID: %d\n", mobility_array[i].id);
//		printf("Type: %s\n", mobility_array[i].type);
//		printf("Battery level: %.2f\n", mobility_array[i].battery_level);
//		printf("Autonomy: %.2f\n", mobility_array[i].autonomy);
//		printf("-------------------------\n");
//	}
//
//	free(mobility_array);
//}


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
					//listar...;
					system("pause");
					break;

				case 2:
					// = inserir...;
					system("pause");
					break;

				case 3:
					// = remover...;
					system("pause");
					break;

				case 4:
					// = alterar...;
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
					//listar...;
					system("pause");
					break;

				case 2:
					// = inserir...;
					system("pause");
					break;

				case 3:
					// = remover...;
					system("pause");
					break;

				case 4:
					// = alterar...;
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
					//listar...;
					system("pause");
					break;

				case 2:
					// = inserir...;
					system("pause");
					break;

				case 3:
					// = remover...;
					system("pause");
					break;

				case 4:
					// = alterar...;
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