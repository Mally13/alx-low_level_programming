#include <stdio.h>
#include <unistd.h>
/**
 * main - a program to print a a line in the standard error
 * return: 1(Indicates success)
 */
int main(void){
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
