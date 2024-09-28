#include "../src/include/push_swap.h"
#include <stdio.h>


int maint(int argc, char *argv[]){
	printf("%d\n",
	    check_order(argc, argv)
	);
	return 0;
}