#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the min number of coins to make change for an amount of money
 * @money: amount of money to change
 * Return: 0 is success, 1 if error.
 */
int coins(int money);
int main(int argc, char **argv)
{
	int money, total;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("0\n");
		return (0);
	}
	total = coins(money);
	printf("%d\n", total);
	return (0);
}
/**
 * coins - count the number of coins needed
 * @money: amount of money to change
 * Return: number of coins
 */
int coins(int money)
{
	int coins;

	coins = 0;

	if (money / 25 > 0)
	{
		coins = coins + money / 25;
		if (money % 25 == 0)
			return (coins);
		money = money % 25;
	}
	if (money / 10 > 0)
	{
		coins = coins + (money / 10);
		if (money % 10 == 0)
			return (coins);
		money = money % 10;
	}
	if (money / 5 > 0)
	{
		coins = coins + money / 5;
		if (money % 5 == 0)
			return (coins);
		money = money % 5;
	}
	if (money / 2 > 0)
	{
		coins = coins + money / 2;
		if (money % 2 == 0)
			return (coins);
		money = money % 2;
	}
	if (money / 1 > 0)
	{
		coins = coins + money;
			return (coins);
	}
	return (0);
}
