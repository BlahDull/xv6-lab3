#include "types.h"
#include "stat.h"
#include "user.h"


int main() {
	int pid = getpid();
	printf(1, "Initial nice val: %d\n", get_priority(pid));
	printf(0,"Setting nice to 10\n");
	printf(1, "Result of set_priority: %d\n",  set_priority(pid, 10));
	printf(1, "Nice val after set_priority: %d\n", get_priority(pid));
	printf(0, "Attempting to set nice to 50\n");
	printf(1, "Result of set_priority: %d\n",  set_priority(pid, 50));
	printf(1, "Nice val after set_priority: %d\n", get_priority(pid));
	printf(0, "Attempting to set nice to -5\n");
	printf(1, "Result of set_priority: %d\n",  set_priority(pid, -5));
	printf(1, "Nice val after set_priority: %d\n", get_priority(pid));
	exit();
}
