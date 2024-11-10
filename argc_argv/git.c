#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char command[512];

    // Vérifie qu'au moins deux arguments ont été fournis
    if (argc < 3) {
        fprintf(stderr, "Usage: %s <fichiers_a_ajouter> <message_de_commit>\n", argv[0]);
        return 1;
    }

    // Le premier argument est pour `git add`
    const char *add = argv[1];

    // Concatène tous les arguments supplémentaires pour former le message de commit
    char commit[256] = "";
    for (int i = 2; i < argc; i++) {
        strcat(commit, argv[i]);
        if (i < argc - 1) {
            strcat(commit, " "); // Ajoute un espace entre les mots du message
        }
    }

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
