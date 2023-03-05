#include <stdio.h>
#include "mobilidade.h"
#include "gestor.h"
#include "cliente.h"

#pragma region Menus

void mostraMenu();
void mostraMobilidadeMenu();
void mostraGestorMenu();
void mostraClienteMenu();

#pragma endregion



#pragma region Cliente

Cliente* criaCliente(Cliente* cliente);
Cliente* removeCliente(Cliente* cliente);
Cliente* editaCliente(Cliente* cliente);
Cliente* associaMobilidade(Cliente* cliente, Mobilidade* mobilidade);

#pragma endregion



#pragma region Mobiblidade

Mobilidade* criaMobilidade(Mobilidade* mobilidade);
Mobilidade* removeMobilidade(Mobilidade* mobilidade);
Mobilidade* editaMobilidade(Mobilidade* mobilidade);

#pragma endregion



#pragma region Gestor

Gestor* criaGestor(Gestor* gestor);
Gestor* removeGestor(Gestor* gestor);
Gestor* editaGestor(Gestor* gestor);

#pragma endregion