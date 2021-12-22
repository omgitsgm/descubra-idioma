/*  Exercício Programa - Descubra o Idioma
 *  
 *  Nome: Luiz Gabriel Profirio Mendes
 *  TIA: 42082293
 */

// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Biblioteca utilizada para facilitar manipulação de Strings.
#include <ctype.h> // Biblioteca utilizada para transformar o texto para caracteres minúsculos.

// FUNÇÕES
void sort(char texto[], int tamanho); // Declaração da função para ordenar os caracteres da String.

void count_freq(char texto_ordenado[], int aux[], int tamanho); // Declaração da função para contar o número de aparições de cada letra.

float prob_port(int aux[]); // Declaração da função para estimar a probabilidade da String estar em português.

float prob_ing(int aux[]); // Declaração da função para estimar a probabilidade da String estar em inglês.

int main (void){
    
    // VARIÁVEIS
    char texto[100], texto_ordenado[100];
    int tamanho, aux[26];
    float prob_p, prob_i;

    // INTRODUÇÃO DO PROGRAMA
    printf("DETECTOR DE IDIOMAS\n");
    printf("----------------------------------\n");
    printf("\nInsira uma sentenca qualquer e tentarei lhe dizer se o texto esta em ingles ou em portugues.\n");
    printf("\nDigite aqui: ");
    gets(texto); // Recebe os dados de entrada do usuário.
    fflush(stdin);
    printf("\n----------------------------------\n");

    

    // PROCESSAMENTO E SAÍDA
    tamanho = strlen(texto); // Armazenamos o tamanho do texto.

    for(int i = 0; i < tamanho; i++){ 
        texto[i] = tolower(texto[i]); // Convertemos a String para letras minúsculas
    }

    strcpy(texto_ordenado, texto);  // Copiamos o texto para uma outra variável (texto_ordenado), para ordenarmos e não perdermos o texto original.
    sort(texto_ordenado, tamanho); // Acionamos a função 'sort', que tem como objetivo ordernar os caracteres do texto.

    printf("\nTexto: %s\n", texto); // Exibe o texto inserido.
    printf("\n----------------------------------\n");
    printf("\nTexto ordenado: %s\n", texto_ordenado); // Exibe o texto ordenado.
    printf("\n----------------------------------\n\n");

    for(int i = 0; i < 26; i++){ // Zeramos o vetor auxiliar, que será responsável por armazenar a contagem de aparições de cada letra.
        aux[i] = 0;
    }
    count_freq(texto_ordenado, aux, tamanho); // Chamamos a função 'count_freq', para efetuar a contagem de aparições de cada letra. Exibimos a contagem de aparição de cada letra.
    
    
    prob_p = prob_port(aux); // Atribuímos a varíavel 'prob_p', o valor gerado pela função 'prob_port', que é responsável por estimar a probabilidade da sentença estar em português.
    prob_i = prob_ing(aux); // Atribuímos a variável 'prob_i', o valor gerado pela função 'prob_ing', que é responsável por estimar a probabilidade da sentença estar em inglês.
    printf("----------------------------------\n");
    printf("\nPROBABILIDADES\n");
    printf("Portugues: %f\n", prob_p);
    printf("Ingles: %f\n", prob_i);
    printf("\n----------------------------------\n");
    if(prob_p > prob_i){
        printf("\nDadas as probabilidades, supunho que a sentenca esteja em PORTUGUES.\n");
    }
    else{
        printf("\nDadas as probabilidades, suponho que a sentenca esteja em INGLES.\n");
    }
    printf("\n----------------------------------\n");

    system("pause");
}

void sort(char texto[], int tamanho){
    // Ordenando os caracteres do texto
    char aux; // Cria-se uma variável auxiliar para efetuar a troca de posições no vetor.
    for(int i = 0; i < tamanho; i++){
        for(int x = i; x < tamanho; x++){
            if(texto[i] > texto[x]){
                aux = texto[i];
                texto[i] = texto[x];
                texto[x] = aux;
            }
        }
    }
    /* A ordenação foi feita da seguinte maneira:
     * Verificamos cada letra presente na String. Cada letra é comparada com todas as outras letras que a sucedem. Caso a letra comparada seja maior que
     * a letra que a sucede, é feita uma troca de posição.
     */
}

void count_freq(char texto_ordenado[], int aux[], int tamanho){
    // Verifica-se cada letra presente no texto ordenado. Caso a letra esteja presente, soma-se 1 a posição correspondente a letra no vetor.
    // Ex: se a letra for 'a', somamos 1 a posição [0] do vetor.
    for(int i = 0; i < tamanho; i++){
        switch(texto_ordenado[i]){
            case 'a':   
                aux[0] = aux[0] + 1;
                break;
            case 'b':   
                aux[1] = aux[1] + 1;
                break;
            case 'c':   
                aux[2] = aux[2] + 1;
                break;
            case 'd':   
                aux[3] = aux[3] + 1;
                break;
            case 'e':   
                aux[4] = aux[4] + 1;
                break;
            case 'f':   
                aux[5] = aux[5] + 1;
                break;
            case 'g':   
                aux[6] = aux[6] + 1;
                break;
            case 'h':   
                aux[7] = aux[7] + 1;
                break;
            case 'i':   
                aux[8] = aux[8] + 1;
                break;
            case 'j':   
                aux[9] = aux[9] + 1;
                break;
            case 'k':   
                aux[10] = aux[10] + 1;
                break;
            case 'l':   
                aux[11] = aux[11] + 1;
                break;
            case 'm':   
                aux[12] = aux[12] + 1;
                break;
            case 'n':   
                aux[13] = aux[13] + 1;
                break;
            case 'o':   
                aux[14] = aux[14] + 1;
                break;
            case 'p':   
                aux[15] = aux[15] + 1;
                break;
            case 'q':   
                aux[16] = aux[16] + 1;
                break;
            case 'r':   
                aux[17] = aux[17] + 1;
                break;
            case 's':   
                aux[18] = aux[18] + 1;
                break;
            case 't':   
                aux[19] = aux[19] + 1;
                break;
            case 'u':   
                aux[20] = aux[20] + 1;
                break;
            case 'v':   
                aux[21] = aux[21] + 1;
                break;
            case 'w':   
                aux[22] = aux[22] + 1;
                break;
            case 'x':   
                aux[23] = aux[23] + 1;
                break;
            case 'y':
                aux[24] = aux[24] + 1;
                break;
            case 'z':   
                aux[25] = aux[25] + 1;
                break;
        }
    }

    // Cria-se um for para exibir a quantidade de vezes que cada letra aparece na frase.
    // Somente são exibidas as contagens das letras que aparecem pelo menos 1 vez.
    printf("Contagem de Frequencia:\n");
    for(int i = 0; i < 26; i ++){
        if(aux[i] != 0){
            if(i == 0){
                printf("Letra A: %d\n", aux[i]);
            }
            if(i == 1){
                printf("Letra B: %d\n", aux[i]);
            }
            if(i == 2){
                printf("Letra C: %d\n", aux[i]);
            }
            if(i == 3){
                printf("Letra D: %d\n", aux[i]);
            }
            if(i == 4){
                printf("Letra E: %d\n", aux[i]);
            }
            if(i == 5){
                printf("Letra F: %d\n", aux[i]);
            }
            if(i == 6){
                printf("Letra G: %d\n", aux[i]);
            }
            if(i == 7){
                printf("Letra H: %d\n", aux[i]);
            }
            if(i == 8){
                printf("Letra I: %d\n", aux[i]);
            }
            if(i == 9){
                printf("Letra J: %d\n", aux[i]);
            }
            if(i == 10){
                printf("Letra K: %d\n", aux[i]);
            }
            if(i == 11){
                printf("Letra L: %d\n", aux[i]);
            }
            if(i == 12){
                printf("Letra M: %d\n", aux[i]);
            }
            if(i == 13){
                printf("Letra N: %d\n", aux[i]);
            }
            if(i == 14){
                printf("Letra O: %d\n", aux[i]);
            }
            if(i == 15){
                printf("Letra P: %d\n", aux[i]);
            }
            if(i == 16){
                printf("Letra Q: %d\n", aux[i]);
            }
            if(i == 17){
                printf("Letra R: %d\n", aux[i]);
            }
            if(i == 18){
                printf("Letra S: %d\n", aux[i]);
            }
            if(i == 19){
                printf("Letra T: %d\n", aux[i]);
            }
            if(i == 20){
                printf("Letra U: %d\n", aux[i]);
            }
            if(i == 21){
                printf("Letra V: %d\n", aux[i]);
            }
            if(i == 22){
                printf("Letra W: %d\n", aux[i]);
            }
            if(i == 23){
                printf("Letra X: %d\n", aux[i]);
            }
            if(i == 24){
                printf("Letra Y: %d\n", aux[i]);
            }
            if(i == 25){
                printf("Letra Z: %d\n", aux[i]);
            }
        }
    }
}

float prob_port(int aux[]){
    float probabilidade = 0;

    // Verificamos cada posição do vetor auxiliar que armazena a contagem de aparições de cada letra.
    // Se houver ao menos uma aparição da letra, somamos a variável 'probabilidade', o valor da frequência de aparição da respectiva letra na língua portuguesa.
    for(int i = 0; i < 26; i++){
        if(aux[i] != 0){
            if(i == 0){
                probabilidade += 14.63;
            }
            if(i == 1){
                probabilidade += 1.04;
            }
            if(i == 2){
                probabilidade += 3.88;
            }
            if(i == 3){
                probabilidade += 4.99;
            }
            if(i == 4){
                probabilidade += 12.57;
            }
            if(i == 5){
                probabilidade += 1.02;
            }
            if(i == 6){
                probabilidade += 1.30;
            }
            if(i == 7){
                probabilidade += 1.28;
            }
            if(i == 8){
                probabilidade += 6.18;
            }
            if(i == 9){
                probabilidade += 0.40;
            }
            if(i == 10){
                probabilidade += 0.02;
            }
            if(i == 11){
                probabilidade += 2.78;
            }
            if(i == 12){
                probabilidade += 4.74;
            }
            if(i == 13){
                probabilidade += 5.05;
            }
            if(i == 14){
                probabilidade += 10.73;
            }
            if(i == 15){
                probabilidade += 2.52;
            }
            if(i == 16){
                probabilidade += 1.20;
            }
            if(i == 17){
                probabilidade += 6.53;
            }
            if(i == 18){
                probabilidade += 7.81;
            }
            if(i == 19){
                probabilidade += 4.34;
            }
            if(i == 20){
                probabilidade += 4.63;
            }
            if(i == 21){
                probabilidade += 1.67;
            }
            if(i == 22){
                probabilidade += 0.01;
            }
            if(i == 23){
                probabilidade += 0.21;
            }
            if(i == 24){
                probabilidade += 0.01;
            }
            if(i == 25){
                probabilidade += 0.47;
            }
        }
    }

    return probabilidade;
}

float prob_ing(int aux[]){
    float probabilidade = 0;

    // Verificamos cada posição do vetor auxiliar que armazena a contagem de aparições de cada letra.
    // Se houver ao menos uma aparição da letra, somamos a variável 'probabilidade', o valor da frequência de aparição da respectiva letra na língua portuguesa.
    for(int i = 0; i < 26; i++){
        if(aux[i] != 0){
            if(i == 0){
                probabilidade += 8.167;
            }
            if(i == 1){
                probabilidade += 1.492;
            }
            if(i == 2){
                probabilidade += 2.782;
            }
            if(i == 3){
                probabilidade += 4.253;
            }
            if(i == 4){
                probabilidade += 12.702;
            }
            if(i == 5){
                probabilidade += 2.228;
            }
            if(i == 6){
                probabilidade += 2.015;
            }
            if(i == 7){
                probabilidade += 6.094;
            }
            if(i == 8){
                probabilidade += 6.966;
            }
            if(i == 9){
                probabilidade += 0.153;
            }
            if(i == 10){
                probabilidade += 0.772;
            }
            if(i == 11){
                probabilidade += 4.025;
            }
            if(i == 12){
                probabilidade += 2.406;
            }
            if(i == 13){
                probabilidade += 6.749;
            }
            if(i == 14){
                probabilidade += 7.507;
            }
            if(i == 15){
                probabilidade += 1.929;
            }
            if(i == 16){
                probabilidade += 0.095;
            }
            if(i == 17){
                probabilidade += 5.987;
            }
            if(i == 18){
                probabilidade += 6.327;
            }
            if(i == 19){
                probabilidade += 9.056;
            }
            if(i == 20){
                probabilidade += 2.758;
            }
            if(i == 21){
                probabilidade += 0.978;
            }
            if(i == 22){
                probabilidade += 2.360;
            }
            if(i == 23){
                probabilidade += 0.150;
            }
            if(i == 24){
                probabilidade += 1.974;
            }
            if(i == 25){
                probabilidade += 0.074;
            }
        }
    }

    return probabilidade;
}
/*  CORRESPONDÊNCIA DE LETRAS A POSIÇÃO DO VETOR
 *  A = 0   I = 8   Q = 16  Y = 24
 *  B = 1   J = 9   R = 17  Z = 25
 *  C = 2   K = 10  S = 18
 *  D = 3   L = 11  T = 19
 *  E = 4   M = 12  U = 20
 *  F = 5   N = 13  V = 21
 *  G = 6   O = 14  W = 22
 *  H = 7   P = 15  X = 23
 */