#include <ccan/crypto/siphash24/siphash24.h>
/* Include the C files directly. */
#include <ccan/crypto/siphash24/siphash24.c>

int main(void)
{
	const struct siphash_seed buffer[1000];
	char buffer2[1000];

	(void) siphash24(&buffer[1], &buffer2, sizeof(buffer) - 1);
}
