#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **string_tokenizer(char *string)
{

	char **tokens, *token;
	int i = 0, counter = 0;

	while (string[i] != '\0')
	{
		if (string[i] != ' ' && string [i + 1] == ' ')
		{
			counter++;
		}
		if (string[i] != ' ' && string [i + 1] == '\0')
		{
			counter++;
		}
		i++;
	}

	tokens = malloc(sizeof(char *) * counter + 1);
	if (tokens == NULL)
	{
		return (NULL);
	}

	token = strtok(string, " ");
	i = 0;
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	return (tokens);
}
	
int main(void)
{

	char string[] = "Hello every body im Dr. Nick";
	char **tokens; 
	int i = 0;

	tokens = string_tokenizer(string);

	while (tokens[i] != NULL)
	{
		printf("%s\n", tokens[i]);
		i++;
	}

	free(tokens);
	return(0);
}
