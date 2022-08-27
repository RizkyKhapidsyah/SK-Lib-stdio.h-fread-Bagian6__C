#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	long lSize;
	char* buffer;

	//buka file dalam mode baca
	FILE* pFile = fopen("test.txt", "r");

	//dapatkan ukuran file
	fseek(pFile, 0, SEEK_END);
	lSize = ftell(pFile);
	rewind(pFile);

	//mengalokasikan memori ke buffer untuk menampung seluruh file
	buffer = (char*)malloc(sizeof(char) * lSize);

	//membaca dan menampilkan seluruh file
	fread(buffer, 1, lSize, pFile);
	printf("%s", buffer);

	//menutup file yang dibuka
	fclose(pFile);

	return 0;
}

