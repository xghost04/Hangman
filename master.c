#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>

#define SIX_ERRORS 6 // nombre maximum d'erreurs avant de perdre
#define FIVE_ERRORS 5 // nombre maximum d'erreurs avant de perdre
#define FOUR_ERRORS 4 // nombre maximum d'erreurs avant de perdre
#define THREE_ERRORS 3 // nombre maximum d'erreurs avant de perdre

#define MAX_WORD_LEN 50 // longueur maximale du mot à deviner

int main() {
    
    char word[MAX_WORD_LEN + 1]; // mot à deviner
    char guessed[MAX_WORD_LEN + 1]; // lettres devinées
    int errors1 = 0 ; // nombre d'erreurs faites jusqu'à présent
    int errors2 = 0 ; // nombre d'erreurs faites jusqu'à présent
    int errors3 = 0 ; // nombre d'erreurs faites jusqu'à présent
    int errors4 = 0 ; // nombre d'erreurs faites jusqu'à présent
    unsigned long words_len ; // longueur du mot à deviner
    int i, j, k, l ; // variable de boucle
    int found; // indique si la lettre devinée est dans le mot
    char input[2]; // entrée utilisateur (une lettre suivie d'un caractère nul)
    int diff;

    // Tableau de chaînes
    char* wordsFac[] = {"apple", "banana", "cherry", "orange", "pineapple"};
    char* wordsMoy[] = {"bleutooth", "ethernet", "connexion", "programme", "computer"};
    char* wordsDiff[] = {"switcher", "database", "modem", "server", "usb"};
    char* wordsExt[] = {"component", "devloper", "cristiano", "mercedes", "hawai"};

    //changer l'arrier plan du terminal
    system("color 1f");

    // Générer un index aléatoire pour le tableau de mots
    int num_words=5;
    
    int index;

    // Récupérer le mot aléatoire du tableau
    char* random_word ;

    srand(time(NULL));
    index = rand() % num_words;
    random_word = wordsFac[index];

    //deplacer le curceur
    COORD a;
    a.X=100;
    a.Y=2;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);
    printf("****  Bienvenue au jeu de pendu!  **** \n");
    printf("\n");
    printf("\n");

    difficulte:

    //deplacer le curceur
COORD b;
b.X=10;
b.Y=10;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),b);
    printf("1.FACILE\n");
   
    //deplacer le curceur
COORD c;
c.X=10;
c.Y=12;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("2.MOYEN\n");
  
    //deplacer le curceur
COORD d;
d.X=10;
d.Y=14;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),d);
    printf("3.DIFFICILE\n");
   
    //deplacer le curceur
COORD e;
e.X=10;
e.Y=16;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),e);
    printf("4.EXTREME\n");
   
    //deplacer le curceur
COORD f;
f.X=10;
f.Y=18;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),f);
    printf("--> Choisir la difficulte:\n");
   
    //deplacer le curceur
COORD g;
g.X=10;
g.Y=20;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),g);

   //difficultée
    scanf("%d",&diff);
system("cls");

    if (diff==1)
    {
        goto facile;
    }
    else if (diff==2)
    {
        goto moyen;
    }
    else if (diff==3)
    {
    goto difficile;
    }
    else if (diff==4)
    {
    goto extreme;
    }   
    
    facile:
    //calculer la longueur de la chaîne de caractères stockée dans la variable word
    words_len = strlen(random_word);
    
    // initialise la chaîne de lettres devinées avec des tirets
    memset(guessed, '-', words_len);
    guessed[words_len] = '\0';

    // affiche l'état actuel du mot
        printf("\n");
        //deplacer le curceur
COORD ab;
ab.X=100;
ab.Y=2;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),ab);
        printf("******* Mode Facile *******\n");
        printf("\n");

    // boucle principale du jeu
    while (errors1 < SIX_ERRORS && strcmp(random_word, guessed) != 0) {

            //deplacer le curceur
COORD h;
h.X=10;
h.Y=10;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),h);
        printf("--> Mot : %s\n", guessed);

            //deplacer le curceur
COORD m;
m.X=10;
m.Y=12;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
        printf("--> Erreurs : %d/%d\n", errors1, SIX_ERRORS);
        printf("\n");

            //deplacer le curceur
COORD n;
n.X=10;
n.Y=14;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),n);
        
        // saisie de la lettre devinée
        printf("\n");

                    //deplacer le curceur
COORD o;
o.X=10;
o.Y=16;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),o);
        printf(" Entrez une lettre : \n");
        scanf("%s", input);

        // vérifie si la lettre est dans le mot
        found = 0;
        for (i = 0; i < words_len; i++) {
            if (random_word[i] == input[0]) {
                guessed[i] = input[0];
                found = 1;
            }
                system("cls");
        }
        
        // si la lettre n'est pas dans le mot, incrémente le nombre d'erreurs
        if (!found) {
            errors1++;
        }

        // dessine la pendaison à 6 cas
        switch (errors1) {

        //deplacer le curceur
/*COORD p;
p.X=150;
p.Y=2;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);*/
                
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
            system("cls");
                printf("  _______\n");
                printf(" |/      |\n");
                printf(" |       O\n");
                printf(" |\n");
                printf(" |\n");
                printf(" |\n");
                printf("_|___\n");
                break;
            case 3:
            system("cls");
                printf("  _______\n");
                printf(" |/      |\n");
                printf(" |       O\n");
                printf(" |       |\n");
                printf(" |\n");
                printf(" |\n");
                printf("_|___\n");
                break;
            case 4:
            system("cls");
                printf("  _______\n");
                printf(" |/      |\n");
                printf(" |       O\n");
                printf(" |      /|\\ \n");
                printf(" |\n");
                printf(" |\n");
                printf("_|___\n");
                break;
            case 5:
            system("cls");
                printf("  _______\n");
                printf(" |/      |\n");
                printf(" |       O\n");
                printf(" |      /|\\ \n");
                printf(" |       | \n");
                printf(" |\n");
                printf("_|___\n");
                break;
            case 6:
            system("cls");
                printf("  _______\n");
                printf(" |/      |\n");
                printf(" |       O\n");
                printf(" |      /|\\ \n");
                printf(" |       | \n");
                printf(" |      / \\ \n");
                printf("_|___\n");
                printf("  \n");
                printf(" YOU LOSE\n");
                printf("  \n");
                break;
                
            default:
                /*printf(" YOU WIN\n");*/
                printf(" ");
        }
    }



moyen:

if (errors2!=0)
{
    /* code */
}


        srand(time(NULL));
        index = rand() % num_words;
        random_word = wordsMoy[index];

        
//calculer la longueur de la chaîne de caractères stockée dans la variable word
words_len = strlen(random_word);
    
// initialise la chaîne de lettres devinées avec des tirets
memset(guessed, '-', words_len);
guessed[words_len] = '\0';
    
// affiche l'état actuel du mot
    printf("\n");
    printf("******* Mode Moyen *******\n");
    printf("\n");
// boucle principale du jeu
while (errors2 < FIVE_ERRORS && strcmp(random_word, guessed) != 0) {
    printf("\n");
    printf("--> Mot : %s\n", guessed);
    printf("--> Erreurs : %d/%d\n", errors2, FIVE_ERRORS);
    printf("\n");
    
    // saisie de la lettre devinée
    printf("\n");
    printf(" Entrez une lettre : \n");
    scanf("%s", input);
    // vérifie si la lettre est dans le mot
    found = 0;
    for (j = 0; j < words_len; j++) {
        if (random_word[j] == input[0]) {
            guessed[j] = input[0];
            found = 1;
        }
            system("cls");
    }
    
    // si la lettre n'est pas dans le mot, incrémente le nombre d'erreurs
    if (!found) {
        errors1++;
    }
    
    // dessine la pendaison à 5 cas
    switch (errors2) {
            
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
        system("cls");
            printf("  _______\n");
            printf(" |/      |\n");
            printf(" |       O\n");
            printf(" |\n");
            printf(" |\n");
            printf(" |\n");
            printf("_|___\n");
            break;
        case 3:
        system("cls");
            printf("  _______\n");
            printf(" |/      |\n");
            printf(" |       O\n");
            printf(" |       |\n");
            printf(" |\n");
            printf(" |\n");
            printf("_|___\n");
            break;
        case 4:
        system("cls");
            printf("  _______\n");
            printf(" |/      |\n");
            printf(" |       O\n");
            printf(" |      /|\\ \n");
            printf(" |\n");
            printf(" |\n");
            printf("_|___\n");
            break;
        case 5:
        system("cls");
            printf("  _______\n");
            printf(" |/      |\n");
            printf(" |       O\n");
            printf(" |      /|\\ \n");
            printf(" |       | \n");
            printf(" |      / \\ \n");
            printf("_|___\n");
            printf("  \n");
            printf(" YOU LOSE\n");
            printf("  \n");
            break;
            
        default:
           /*printf(" YOU WIN\n");*/
            printf(" ");
      }

    }

difficile:

        srand(time(NULL));
        index = rand() % num_words;
        random_word = wordsDiff[index];

        
//calculer la longueur de la chaîne de caractères stockée dans la variable word
words_len = strlen(random_word);
    
// initialise la chaîne de lettres devinées avec des tirets
memset(guessed, '-', words_len);
guessed[words_len] = '\0';
    
// affiche l'état actuel du mot
    printf("\n");
    printf("******* Mode Difficile *******\n");
    printf("\n");
// boucle principale du jeu
while (errors3 < FOUR_ERRORS && strcmp(random_word, guessed) != 0) {
    printf("\n");
    printf("--> Mot : %s\n", guessed);
    printf("--> Erreurs : %d/%d\n", errors3, FOUR_ERRORS);
    printf("\n");
    
    // saisie de la lettre devinée
    printf("\n");
    printf(" Entrez une lettre : \n");
    scanf("%s", input);
    // vérifie si la lettre est dans le mot
    found = 0;
    for (k = 0; k < words_len; k++) {
        if (random_word[k] == input[0]) {
            guessed[k] = input[0];
            found = 1;
        }
            system("cls");
    }
    
    // si la lettre n'est pas dans le mot, incrémente le nombre d'erreurs
    if (!found) {
        errors3++;
    }
    
    // dessine la pendaison à 4 cas
    switch (errors3) {
            
        case 1:
            printf("  _______\n");
            printf(" |/      |\n");
            printf(" |       O\n");
            printf(" |\n");
            printf(" |\n");
            printf(" |\n");
            printf("_|___\n");
            break;
        case 2:
        system("cls");
            printf("  _______\n");
            printf(" |/      |\n");
            printf(" |       O\n");
            printf(" |       |\n");
            printf(" |\n");
            printf(" |\n");
            printf("_|___\n");
            break;
        case 3:
        system("cls");
            printf("  _______\n");
            printf(" |/      |\n");
            printf(" |       O\n");
            printf(" |      /|\\ \n");
            printf(" |\n");
            printf(" |\n");
            printf("_|___\n");
            break;
        case 4:
        system("cls");
            printf("  _______\n");
            printf(" |/      |\n");
            printf(" |       O\n");
            printf(" |      /|\\ \n");
            printf(" |       | \n");
            printf(" |      / \\ \n");
            printf("_|___\n");
            printf("  \n");
            printf(" YOU LOSE\n");
            printf("  \n");
            break;
            
        default:
            /*printf(" YOU WIN\n");*/
             printf(" ");
      }


    }

extreme:

        srand(time(NULL));
        index = rand() % num_words;
        random_word = wordsExt[index];

        
//calculer la longueur de la chaîne de caractères stockée dans la variable word
words_len = strlen(random_word);
    
// initialise la chaîne de lettres devinées avec des tirets
memset(guessed, '-', words_len);
guessed[words_len] = '\0';
    
// affiche l'état actuel du mot
    printf("\n");
    printf("******* Mode EXTREME *******\n");
    printf("\n");
// boucle principale du jeu
while (errors4 < THREE_ERRORS && strcmp(random_word, guessed) != 0) {
    printf("\n");
    printf("--> Mot : %s\n", guessed);
    printf("--> Erreurs : %d/%d\n", errors4, THREE_ERRORS);
    printf("\n");
    
    // saisie de la lettre devinée
    printf("\n");
    printf(" Entrez une lettre : \n");
    scanf("%s", input);
    // vérifie si la lettre est dans le mot
    found = 0;
    for (l = 0; l < words_len; l++) {
        if (random_word[l] == input[0]) {
            guessed[l] = input[0];
            found = 1;
        }
            system("cls");
    }
    
    // si la lettre n'est pas dans le mot, incrémente le nombre d'erreurs
    if (!found) {
        errors4++;
    }
    
    // dessine la pendaison à 3 cas
    switch (errors4) {
            
        case 1:
            printf("  _______\n");
            printf(" |/      |\n");
            printf(" |       O\n");
            printf(" |\n");
            printf(" |\n");
            printf(" |\n");
            printf("_|___\n");
            break;
        case 2:
        system("cls");
            printf("  _______\n");
            printf(" |/      |\n");
            printf(" |       O\n");
            printf(" |      /|\\ \n");
            printf(" |\n");
            printf(" |\n");
            printf("_|___\n");
            break;
        case 3:
        system("cls");
            printf("  _______\n");
            printf(" |/      |\n");
            printf(" |       O\n");
            printf(" |      /|\\ \n");
            printf(" |       | \n");
            printf(" |      / \\ \n");
            printf("_|___\n");
            printf("  \n");
            printf(" YOU LOSE\n");
            printf("  \n");
            break;
            
        default:
            /*printf(" YOU WIN\n");*/
             printf(" ");
      }


    }

    return 0;
} 