#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include "menu.h"

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
					listarClientes(clientes);
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
					listarGestores(gestores);
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
					listarMobilidades(meios);
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