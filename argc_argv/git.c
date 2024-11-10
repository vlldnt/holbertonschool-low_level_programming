#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char add[256];
    char commit[256];
    char command[512];

    // Demande à l'utilisateur les fichiers à ajouter
    printf("git add: ");
    fgets(add, sizeof(add), stdin);

    // Enlève le caractère de nouvelle ligne '\n' à la fin de la saisie
    add[strcspn(add, "\n")] = 0;

    // Demande à l'utilisateur le message de commit
    printf("Your commit: ");
    fgets(commit, sizeof(commit), stdin);

    // Enlève le caractère de nouvelle ligne '\n' à la fin de la saisie
    commit[strcspn(commit, "\n")] = 0;

    // Construit et exécute la commande "git add"
    snprintf(command, sizeof(command), "git add %s", add);
    system(command);

    // Construit et exécute la commande "git commit"
    snprintf(command, sizeof(command), "git commit -m \"%s\"", commit);
    system(command);

    // Exécute la commande "git push"
    system("git push");

    return 0;
}
