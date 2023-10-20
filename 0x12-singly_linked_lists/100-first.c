#include<stdio.h>

/**
 * myPellyFunc - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void myPellyfunc(void) __attribute__ ((constructor));

/**
 * myPellyFunc - implementation of myStartupFun
 */
void myPellyFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
