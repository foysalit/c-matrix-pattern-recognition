#include <stdio.h>
#include <string.h>
#define MAX_ROWS 100
#define MAX_COLS 100

void read_file_into_matrix(FILE *, char [][MAX_COLS]);
void clean_matrix(char [][MAX_COLS]);
void match_pattern(char [][MAX_COLS], char [][MAX_COLS]);

int main(int argc, char const *argv[]){
	FILE *fp_needle, *fp_haystack, *fp_output;	
	char haystack[MAX_ROWS][MAX_COLS], needle[MAX_ROWS][MAX_COLS];

	if(argc != 4){
		printf("The program needs three files!\n");
	}

	fp_haystack = fopen(argv[1], "r");
	fp_needle = fopen(argv[2], "r");
	fp_output = fopen(argv[3], "w");

	if(fp_haystack == NULL || fp_needle == NULL || fp_output == NULL){
		printf("One or more files from input cannot be read!\n");
		return 0;
	}

	clean_matrix(haystack);
	clean_matrix(needle);

	read_file_into_matrix(fp_haystack, haystack);
	read_file_into_matrix(fp_needle, needle);

	return 0;
}

void clean_matrix(char matrix[][MAX_COLS]){
	int i, j;

	for (i = 0; i < MAX_ROWS; ++i){
		for (j = 0; j < MAX_COLS; ++j){
			matrix[i][j] = ' ';
		}
	}
}

void read_file_into_matrix(FILE *fp, char matrix[][MAX_COLS]){
	int i = 0, j = 0;
	char buff[MAX_COLS+1];

	while(fgets(buff, MAX_COLS+1, fp) != NULL){
		for (i = 0; i < strlen(buff)-1; ++i){
			matrix[j][i] = buff[i];
		}
	}
}

void match_pattern(char haystack[][MAX_COLS], char needle[][MAX_COLS]){
	int i, j, r, c, flag;

	for (i = 0; i < MAX_ROWS; ++i){
		for (j = 0; j < MAX_COLS; ++j){
			flag = 1;

		}
	}
}