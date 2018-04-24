#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
	
	char *str = argv[1];
	int str_len = strlen(str);
	
	char **box = (char **) malloc(sizeof(char *) * str_len);
	for(int i = 0; i < strlen(str); i++) {
		box[i] = (char*) malloc(sizeof(char) * str_len);
	}
	
	for(int i = 0; i < str_len; i++) {
		for(int j = 0; j < str_len; j++) {
			if(i == 0) {
				box[i][j] = str[j];
			} else if(j == 0) {
				box[i][j] = str[i];
			} else if(i == str_len-1) {
				box[i][j] = str[str_len-j-1];
			} else if(j == str_len-1) {
				box[i][j] = str[str_len-i-1];
			}
			#if 0
			if((i == 0) || (j == 0) || (i == str_len-1) || ( j == str_len-1)) {
				box[i][j] = str[i];
			}
			#endif
		}
	}

	printf("\r\n\r\n\r\n");	

	for(int i = 0; i < str_len; i++) {
		printf("   ");
		for(int j = 0; j < str_len; j++) {
			printf(" %c", box[i][j]);
		}
		printf("\r\n");
	}

	printf("\r\n\r\n\r\n");
}
