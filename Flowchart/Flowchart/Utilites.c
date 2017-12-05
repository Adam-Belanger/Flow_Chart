#include "Utilits.h"

void cleanBuffer() {
	char ch = 0;
	while (ch != '\n') {
		scanf("%c", &ch);
	}
}
char getChar() {
	char ch;
	scanf("%c", &ch);
	cleanBuffer();
	return ch;
}
int getInt() {
	int value = 0;
	scanf("%d", &value);
	cleanBuffer();
	return value;
}
void loadStringToMem(char* format, char* location) {
	scanf(format, location);
	cleanBuffer();
}
