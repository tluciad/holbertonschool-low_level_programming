#include "lists.h"

void startup_tortoise(void) __attribute__ ((constructor));

/**
* startup_tortoise - prints before the main function is executed.*
*/

void startup_tortoise(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
