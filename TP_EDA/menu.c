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
	printf("| 4. Exportar Dados                       |\n");
	printf("| 0. Sair                                 |\n");
	printf("-------------------------------------------\n\n");
	printf("Opcao: ");
}

void mostraClienteMenu() {
	printf("-------------------------------------------\n");
	printf("|                 CLIENTE                 |\n");
	printf("-------------------------------------------\n");
	printf("| 1. Listar Clientes                      |\n");
	printf("| 2. Inserir Novo Cliente                 |\n");
	printf("| 3. Remover Cliente                      |\n");
	printf("| 4. Alterar Cliente                      |\n");
	printf("| 5. Associar Mobilidade                  |\n");
	printf("| 6. Desassociar Mobilidade               |\n");
	printf("| 7. Exportar Dados                       |\n");
	printf("| 0. Sair                                 |\n");
	printf("-------------------------------------------\n\n");
	printf("Opcao: ");
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
	printf("Opcao: ");
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
	printf("Opcao: ");
}
#pragma endregion

#pragma region CLIENTE


Cliente* criaCliente(Cliente* cliente) {

	int nif;
	char nome[40];
	char email[40];
	float saldo;

	Mobilidade* mobilidade_alugada = NULL;


	printf("NIF do Cliente: ");
	scanf("%d", &nif);


	Cliente* opAux = cliente;

	while (opAux != NULL && (opAux->nif = nif) != 0)
	{
		opAux = opAux->next;
	}

	if (opAux != NULL) 
	{
		printf("\nJa existe um cliente com o NIF '%d'\n", nif);
		return cliente;
	}
	else
	{
		printf("Nome do cliente: ");
		scanf("%s", &nome);


		printf("Numero do NIF: ");
		scanf("%s", &email);


		printf("Numero do NIF: ");
		scanf("%d", &saldo);


	}

	return inserirCliente(cliente, nif, nome, email, saldo);
}


Cliente* removeCliente(Cliente* cliente) {

	int nif;
	listarApenasClientes(cliente);

	printf("NIF do Cliente para Eliminar: ");
	scanf("%d", &nif);


	return removerCliente(cliente, nif);
}


Cliente* editaCliente(Cliente* cliente) {
	char novoNome[40];
	char novoEmail[40];
	float novoSaldo;
	int nif;

	listarApenasClientes(cliente);

	printf("NIF do Cliente para Editar: ");
	scanf("%d", &nif);

	printf("Novo Nome do Cliente: ");
	scanf("%s", &novoNome);

	printf("Novo Email do Cliente: ");
	scanf("%s", &novoEmail);

	printf("Novo Saldo do Cliente: ");
	scanf("%f", &novoSaldo);

	return alterarCliente(cliente, nif, novoNome, novoEmail, novoSaldo);
}

Cliente* associaMobilidade(Cliente* cliente, Mobilidade* mobilidade) {
	int idCliente = 0, idMobilidade = 0, found = 0;

	do
	{
		listarClientes(cliente, mobilidade);

		printf("NIF do Cliente: ");
		scanf("%d", &idCliente);

		Cliente* cliAux = cliente;

		while (cliAux != NULL && cliAux->nif != idCliente)
		{
			cliAux = cliAux->next;
		}
		if (cliAux == NULL) 
		{
			idCliente = 0;
			system("cls");
			printf("Escolha invalida\n");
			system("pause");
			system("cls");
		}
	} while (idCliente == 0);

	system("cls");

	do
	{
		printf("NIF do Cliente: %d\n", idCliente);

		listarMobilidades(mobilidade);

		printf("ID da Mobilidade Para Associar: ");
		scanf("%d", &idMobilidade);

		Mobilidade* mobAux = mobilidade;

		while (mobAux != NULL && mobAux->id != idMobilidade)
		{
			mobAux = mobAux->next;
		}
		if (mobAux == NULL) 
		{
			idMobilidade = 0;
			system("cls");
			printf("Escolha invalida\n");
			system("pause");
			system("cls");
		}
	} while (idMobilidade == 0);

	// Verificação de Existencia de Mobiliades já Associadas
	Cliente* cliAux = cliente;

	while (cliAux != NULL) 
	{
		ClienteMobilidade* CliMobAux = cliAux->mobilidade;

		while (CliMobAux != NULL) 
		{
			if (CliMobAux->nifCliente == idCliente && CliMobAux->idMob == idMobilidade) 
			{
				found = 1;
			}
			CliMobAux = CliMobAux->next;
		}
		cliAux = cliAux->next;
	}
	if (found == 1) 
	{
		printf("\n\nA Mobilidade '%d' ja esta associada ao Cliente '%d'\n", idMobilidade, idCliente);
		return cliente;
	}

	return associarMobilidade(cliente, idCliente, idMobilidade);
}


//Operacao* desassociaMaquina(Operacao* operacao, Maquina* maquina) {
//	int idOp = 0, idMaq = 0, found = 0;
//
//	do
//	{
//		listarOperacoes(operacao, maquina);
//
//		printf("ID da Operação: ");
//		scanf("%d", &idOp);
//
//		Operacao* opAux = operacao;
//		while (opAux != NULL && opAux->idOp != idOp)
//			opAux = opAux->seguinte;
//
//		if (opAux == NULL) {
//			idOp = 0;
//			system("cls");
//			printf("Escolha inválida\n");
//			system("pause");
//			system("cls");
//		}
//	} while (idOp == 0);
//
//	system("cls");
//
//	do
//	{
//		printf("ID da Operação: %d\n", idOp);
//
//		listarMaquinas(maquina);
//
//		printf("ID da Máquina Para Desassociar: ");
//		scanf("%d", &idMaq);
//
//		Maquina* maqAux = maquina;
//		while (maqAux != NULL && maqAux->idMaq != idMaq)
//			maqAux = maqAux->seguinte;
//
//		if (maqAux == NULL) {
//			idMaq = 0;
//			system("cls");
//			printf("Escolha inválida\n");
//			system("pause");
//			system("cls");
//		}
//	} while (idMaq == 0);
//
//	// Verificação de Existencia de Máquinas já não Associadas
//	Operacao* opAux = operacao;
//	while (opAux != NULL) {
//		OperacaoMaquina* OpMaqAux = opAux->maquinas;
//		while (OpMaqAux != NULL) {
//			if (OpMaqAux->idOp == idOp && OpMaqAux->idMaq == idMaq) {
//				found = 1;
//			}
//			OpMaqAux = OpMaqAux->seguinte;
//		}
//		opAux = opAux->seguinte;
//	}
//
//	if (found == 1) {
//		return desassociarMaquina(operacao, idOp, idMaq);
//	}
//	else {
//		printf("\n\nA Máquina '%d' não está associada a operação '%d'\n", idMaq, idOp);
//		return operacao;
//	}
//}

#pragma endregion


#pragma region GESTOR

Gestor* criaGestor(Gestor* gestor) {

	int id;
	char nome[40];
	char password[40];

	printf("ID do Gestor: ");
	scanf("%d", &id);


	Gestor* gesAux = gestor;
	while (gesAux != NULL && (gesAux->id = id) != 0)
	{
		gesAux = gesAux->next;
	}

	if (gesAux != NULL) {
		printf("\nJa existe um gestor com o id '%d'\n", id);
		return gestor;
	}
	else
	{
		printf("Nome do Gestor: ");
		scanf("%s", &nome);


		printf("Password do Gestor: ");
		scanf("%s", &password);

	}

	return inserirGestor(gestor, id, nome, password);
}

Gestor* removeGestor(Gestor* gestor) {

	int id;
	listarGestores(gestor);

	printf("ID do Gestor para Eliminar: ");
	scanf("%d", &id);


	return removerGestor(gestor, id);
}

Gestor* editaGestor(Gestor* gestor) {
	
	char novoNome[40];
	char novaPassword[40];
	int id;

	listarGestores(gestor);

	printf("ID do Gestor para Editar: ");
	scanf("%d", &id);

	printf("Novo Nome do Gestor: ");
	scanf("%s", &novoNome);

	printf("Nova Password do Gestor: ");
	scanf("%s", &novaPassword);

	return alterarGestor(gestor, id, novoNome, novaPassword);
}

#pragma endregion


#pragma region MOBILIDADE

Mobilidade* criaMobilidade(Mobilidade* mobilidade) {

	int id;
	char tipo[40];
	int bateria;
	int autonomia;

	printf("ID da Mobilidade: ");
	scanf("%d", &id);


	Mobilidade* mobAux = mobilidade;
	while (mobAux != NULL && (mobAux->id = id) != 0)
		mobAux = mobAux->next;

	if (mobAux != NULL) {
		printf("\nJa existe uma mobilidade com o id '%d'\n", id);
		return mobilidade;
	}
	else
	{
		printf("Tipo da Mobilidade: ");
		scanf("%s", &tipo);


		printf("Bateria da Mobilidade: ");
		scanf("%d", &bateria);
		
		printf("Autonomia da Mobilidade: ");
		scanf("%d", &autonomia);

	}

	return inserirMobilidade(mobilidade, id, tipo, bateria, autonomia);
}

Mobilidade* removeMobilidade(Mobilidade* mobilidade) {

	int id;
	listarMobilidades(mobilidade);

	printf("ID da Mobilidade para Eliminar: ");
	scanf("%d", &id);


	return removerMobilidade(mobilidade, id);
}

Mobilidade* editaMobilidade(Mobilidade* mobilidade) {

	char novoTipo[40];
	int novaBateria;
	int novaAutonomia;
	int id;

	listarMobilidades(mobilidade);

	printf("ID da Mobilidade para Editar: ");
	scanf("%d", &id);

	printf("Novo Tipo de Mobilidade: ");
	scanf("%s", &novoTipo);

	printf("Nova Percentagem de Bateria da Mobilidade: ");
	scanf("%d", &novaBateria);

	printf("Nova Percentagem de Autonomia da Mobilidade: ");
	scanf("%d", &novaAutonomia);

	return alterarMobilidade(mobilidade, id, novoTipo, novaBateria, novaAutonomia);
}
#pragma endregion