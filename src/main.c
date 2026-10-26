#include <io/parsing.h>

int main(int argc, char **argv){
	uint8_t a;

	io_parse_status f = parse_uint8(&a, argv[1]);

	return 0;
}
