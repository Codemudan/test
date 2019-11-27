#include "my.h"
static void _attribute_((constructor)) after_main()
{
	printf("------before main-------\n");
}
static void _attribute_((destructor)) after_main()
{
	printf("------after main-------\n");
}
int main(void)
{
	printf("main!\n");
}
