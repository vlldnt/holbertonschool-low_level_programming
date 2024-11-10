#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char command[512];
	int i;
	const char *add = argv[1];
	char commit[256]= "";

	if (argc < 3)
	{
		printf("argc[1] is for the file added and argv[2] and more are for the commit\n");
		return (1);
	}
	for (i = 2; i < argc; i++)
	{
		strcat(commit, argv[i]);
		if (i < argc - 1)
			strcat(commit, " ");
	}
	snprintf(command, sizeof(command), "git add %s", add);
	system(command);
	snprintf(command, sizeof(command), "git commit -m \"%s\"", commit);
	system(command);
	system("git push");
return (0);
}
