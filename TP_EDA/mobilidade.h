#pragma once
// Estrutura para representar um meio de mobilidade el�trica
typedef struct mobilidade_eletrica
{
    int id; // Identificador �nico do meio de mobilidade
    char tipo[20]; // Tipo do meio de mobilidade (ex: bicicleta el�trica, patinete el�trico)
    float nivel_bateria; // N�vel atual da bateria (em porcentagem)
    int alugada; // Indica se o meio de mobilidade est� alugado (1) ou n�o (0)
    struct mobilidade_eletrica* next; // Ponteiro para o pr�ximo meio de mobilidade na lista

} mobilidade_eletrica;