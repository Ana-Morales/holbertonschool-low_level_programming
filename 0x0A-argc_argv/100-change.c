#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the min number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument values
 * Return: 0 is success, 1 if error.
 */

int main(int argc, char **argv)
{
	int money, coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("0");
		return (0);
	}
	else if (money / 25 > 0)
	{
		coins = money / 25;
		if (money % 25 == 0)
		{
			printf("%d\n", coins);
			return (0);
		}
		else
			money = money % 25;
	}
	if (money / 10 > 0)
	{
		coins = coins + money / 10;
		if (money % 10 == 0)
		{
			printf("%d\n", coins);
			return (0);
		}
		else
			money = money % 10;
	}
	if (money / 5 > 0)
	{
		coins = coins + money / 5;
		if (money % 5 == 0)
		{
			printf("%d\n", coins);
			return (0);
		}
		else
			money = money % 5;
	}
	if (money / 2 > 0)
	{
		coins = coins + money / 2;
		if (money % 2 == 0)
		{
			printf("%d\n", coins);
			return (0);
		}
		else
		{
			money = money % 2;
		}
	}
	if (money / 1 > 0)
	{
		coins = coins + money / 1;
		if (money % 1 == 0)
		{
			printf("%d\n", coins);
			return (0);
		}
		else
			money = money % 1;
	}
	return (0);
}
