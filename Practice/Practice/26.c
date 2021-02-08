
int **i = (int **)malloc(sizeof(int) * 5);
for (int j = 0; j < 5; j++)
	i[j] = (int *)malloc(sizeof(int) * 5);