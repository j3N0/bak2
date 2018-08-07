#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45

struct film {
	char title[TSIZE];
	int rating;
	struct film *next;
};
char *s_gets(char *st, int n);

int main(void)
{
	struct film *head = NULL;
	struct film *prev = NULL;
       	struct film *current = NULL;
	char input[TSIZE];

	puts("Enter first film title:");
	while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
	{
		current = (struct film *) malloc(sizeof(struct film));
		if (head == NULL)
			head = current;
		else
			prev->next = current;
		current->next = NULL;
		strcpy(current->title, input);
		puts("Enter your rating <0-10>:");
		scanf("%d", &current->rating);
		while (getchar() != '\n')
			continue;
		puts("Enter next movie title (empty line to stop):");
		prev = current;
	}

	if (head == NULL)
		puts("No data entered");
	else
		puts("Here is the list:");
	current = head;
	while (current != NULL)
	{
		printf("Movie: %s Rating %d\n",
				current->title, current->rating);
		current = current->next;
	}

	current = head;
	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current);
	}
	puts("Bye!\n");

	return 0;
}

char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}

