#include <stdbool.h>

bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c) {


	if (a * a + b + b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {

		return true;
	}

	else {

		return false;
	}

}