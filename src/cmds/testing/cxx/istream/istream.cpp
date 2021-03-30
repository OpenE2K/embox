#include <iostream>
#include <fstream>

int main () {
	const char *filename = "istream.bin";
	std::ifstream fstrm(filename, std::ios_base::in | std::ios_base::binary);
	std::istream& istrm(fstrm);

	printf("stream filename=%s\n", filename);
	/* Outputs must be the equal. */
	printf("  fstrm: precision=%d\n", fstrm.precision());
	printf("  istrm: precision=%d\n", istrm.precision());

	return 0;
}
