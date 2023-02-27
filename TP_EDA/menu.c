#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

#pragma region MENUS

void mostraMenu() {
	printf("-------------------------------------------\n");
	printf("|                   MENU                  |\n");
	printf("-------------------------------------------\n");
	printf("| 1. Cliente                              |\n");
	printf("| 2. Gestor                               |\n");
	printf("| 3. Mobilidade                           |\n");
	printf("| 0. Sair                                 |\n");
	printf("-------------------------------------------\n\n");
	printf("Opçao: ");
}

void mostraClienteMenu() {
	printf("-------------------------------------------\n");
	printf("|                 CLIENTE                 |\n");
	printf("-------------------------------------------\n");
	printf("| 1. Listar Clientes                      |\n");
	printf("| 2. Inserir Novo Cliente                 |\n");
	printf("| 3. Remover Cliente                      |\n");
	printf("| 4. Alterar Cliente                      |\n");
	printf("| 0. Sair                                 |\n");
	printf("-------------------------------------------\n\n");
	printf("Opçao: ");
}

void mostraGestorMenu() {
	printf("-------------------------------------------\n");
	printf("|                  GESTOR                 |\n");
	printf("-------------------------------------------\n");
	printf("| 1. Listar Gestores                      |\n");
	printf("| 2. Inserir Novo Gestor                  |\n");
	printf("| 3. Remover Gestor                       |\n");
	printf("| 4. Alterar Gestor                       |\n");
	printf("| 0. Sair                                 |\n");
	printf("-------------------------------------------\n\n");
	printf("Opçao: ");
}

void mostraMobilidadeMenu() {
	printf("-------------------------------------------\n");
	printf("|               MOBILIDADE                |\n");
	printf("-------------------------------------------\n");
	printf("| 1. Listar Mobilidades                   |\n");
	printf("| 2. Inserir Nova Mobilidade              |\n");
	printf("| 3. Remover Mobilidade                   |\n");
	printf("| 4. Alterar Moblilidade                  |\n");
	printf("| 0. Sair                                 |\n");
	printf("-------------------------------------------\n\n");
	printf("Opçao: ");
}