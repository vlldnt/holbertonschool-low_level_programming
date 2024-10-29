#include "main.h"
/**
* rev_string - okaye baybaye
* @s: parameter
*/
void rev_string(char *s)
{
	int first = 0;
	char t;
	int last;

	while (*s)
	{
		first++;
		s++;
	}

	s -= first;
	last = first - 1;
	first = 0;

	while (first < last)
	{
		t = s[first];
		s[first] = s[last];
		s[last] = t;

		first++;
		last--;
	}
}
