#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = {2, 1};
	int i;
	i = 0;
	while (i < 2)
	{
		printf("%d", tab[i]);
		if (i < 1)
			printf(", ");
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 2);
	i = 0;
	printf("-------\n");
	while (i < 2)
	{
		printf("%d", tab[i]);
		if (i < 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
