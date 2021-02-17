#include <stdio.h>

int compare(int x, int y) {
	if (x < y)
		return -1;
	else if (x == y)
		return 0;
	else
		return 1;
}

int binsearch(int list[], int searchnum, int left, int right) {
	int middle;
	while (left <= right)
	{
		middle = (left + right) / 2;
		switch(compare(list[middle], searchnum))
		{
		case -1:
			return binsearch(list, searchnum, middle + 1, right);
		case 0:
			return middle;
		case 1:
			return binsearch(list, searchnum, left, middle - 1);
		}
	}
	return -1;
}

int main(int argc, char *argv[])
{
	int list[10] = {1, 5, 8, 11, 15, 20, 27, 33, 50, 100};
	printf("%d\n", binsearch(list, 33, 0, 9));
	return 0;
}