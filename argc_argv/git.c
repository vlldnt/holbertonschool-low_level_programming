#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char command[512];

    // Vérifie que deux arguments ont été fournis
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <fichiers_a_ajouter> <message_de_commit>\n", argv[0]);
        return 1;
    }

    // Récupère les arguments pour `git add` et `git commit`
    const char *add = argv[1];
    const char *commit = argv[2];

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
