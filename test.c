#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
	printf(1, "Current syscall number: %d\n", getsyscallinfo() );
	exit();
}
