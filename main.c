#include <stdbool.h>

int main(void) {

	bool res;

	res = is_terna_pitagorica(5, 4, 3);
	res = is_terna_pitagorica(3, 4, 5);
	res = is_terna_pitagorica(1, 2, 3);

	return 0;
}