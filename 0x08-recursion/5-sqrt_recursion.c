 #include "main.h"

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @n:number to derive a squareroot
 * @root: The root to be tested
 * Return: the squareroot if it has a natursl squareroot
 * or -1 if it doesnt
 */
int find_sqrt(int n, int root)
{
	if ((root * root) == n)
		return (root);
	if (root == n / 2)
		return (-1);
	return (find_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number to derive a squareroot
 * Return: If n does not have a natural square root,
 * the function should return -1
 * else the natural square root of a n
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root + 1));
}
