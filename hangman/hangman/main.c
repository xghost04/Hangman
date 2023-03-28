//
//  main.c
//  hangman
//
//  Created by Mehdi on 28/03/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_ERRORS 6 // nombre maximum d'erreurs avant de perdre
#define MAX_WORD_LEN 50 // longueur maximale du mot à deviner

int main() {
    char word[MAX_WORD_LEN + 1]; // mot à deviner
    char guessed[MAX_WORD_LEN + 1]; // lettres devinées
    int errors = 0 ; // nombre d'erreurs faites jusqu'à présent
    unsigned long words_len ; // longueur du mot à deviner
    int i ; // variable de boucle
    int found; // indique si la lettre devinée est dans le mot
    char input[2]; // entrée utilisateur (une lettre suivie d'un caractère nul)
    
    // Array of strings
    char* words[] = {"apple", "banana", "cherry", "orange", "pineapple"};

    // Generate a random index for the words array
    int num_words;
    int index = rand() % num_words;

    // Retrieve the random word from the array
    char* random_word = words[index];
    
    printf("************************************** \n");
    printf("****                              **** \n");
    printf("****  Bienvenue au jeu de pendu!  **** \n");
    printf("****                              **** \n");
    printf("************************************** \n");
    printf("\n");
    printf("\n");
    
    //calculer la longueur de la chaîne de caractères stockée dans la variable word
    words_len = strlen(random_word);
    
    // initialise la chaîne de lettres devinées avec des tirets
    memset(guessed, '-', words_len);
    guessed[words_len] = '\0';
    
    // boucle principale du jeu
    while (errors < MAX_ERRORS && strcmp(random_word, guessed) != 0) {
        // affiche l'état actuel du mot
        printf("--> Mot : %s\n", guessed);
        printf("--> Erreurs : %d/%d\n", errors, MAX_ERRORS);
        printf("\n");
        
        // saisie de la lettre devinée
        printf("°°° Entrez une lettre : ");
        scanf("%s", input);

        // vérifie si la lettre est dans le mot
        found = 0;
        for (i = 0; i < words_len; i++) {
            if (random_word[i] == input[0]) {
                guessed[i] = input[0];
                found = 1;
            }
        }
        
        // si la lettre n'est pas dans le mot, incrémente le nombre d'erreurs
        if (!found) {
            errors++;
        }

        
        // dessine la pendaison
        switch (errors) {
            case 1:
                printf("  _______\n");
                printf(" |/      |\n");
                printf(" |\n");
                printf(" |\n");
                printf(" |\n");
                printf(" |\n");
                printf("_|___\n");
                break;
            case 2:
                printf("  _______\n");
                printf(" |/      |\n");
                printf(" |      (_)\n");
                printf(" |\n");
                printf(" |\n");
                printf(" |\n");
                printf("_|___\n");
                break;
            case 3:
                printf("  _______\n");
                printf(" |/      |\n");
                printf(" |      (_)\n");
                printf(" |       |\n");
                printf(" |\n");
                printf(" |\n");
                printf("_|___\n");
                break;
            case 4:
                printf("  _______\n");
                printf(" |/      |\n");
                printf(" |      (_)\n");
                printf(" |      /|\ \n");
                printf(" |\n");
                printf(" |\n");
                printf("_|___\n");
                break;
            case 5:
                printf("  _______\n");
                printf(" |/      |\n");
                printf(" |      (_)\n");
                printf(" |      /|\\ \n");
                printf(" |       | \n");
                printf(" |\n");
                printf("_|___\n");
                break;
            case 6:
                printf("  _______\n");
                printf(" |/      |\n");
                printf(" |      (_)\n");
                printf(" |      /|\\ \n");
                printf(" |       | \n");
                printf(" |      / \\ \n");
                printf("_|___\n");
                break;
            default:
                printf("YOU WIN\n");
        }

    }
    return 0;
}

