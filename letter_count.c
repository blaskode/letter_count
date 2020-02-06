/*This is a little program that calculates the frequency of letters
	in a text file. */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


void print_alphabet(int a[]);

int main(int argc, char** argv){
	if (argc != 2){
		fprintf(stderr, "Program takes ONE argument.\n");
		exit(EXIT_FAILURE);
	}
	FILE * f = fopen(argv[1], "r");
	int alphabet[26] = {0};
	int c = tolower(fgetc(f));
	while(c != EOF){
		alphabet[c - 97]++;
		c = tolower(fgetc(f));
	}
	print_alphabet(alphabet);
}

void print_alphabet(int a[]){
	for(int i = 0; i < 26; i++){
		printf("%c : %d\n", i + 97, (int)(a[i]));
	}
}