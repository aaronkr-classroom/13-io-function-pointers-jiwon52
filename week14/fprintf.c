//fprintf.c
#include <stdio.h>

int main(void) {
	char* string = "World, John";
	short int data = 0xFFFFFF0; // 16진수}

	//쓰기 모드로 텍스트 파일을 열기
	FILE* p_file = fopen("nums.txt", "rt");

	if (NULL != p_file) {
		for (int i = 412; i < 431; i++) {
			if (i % 3 == 0) {
				fprintf(p_file, "\n");
			}
			fprintf(p_file, "%d", i);
		}

		printf("파일 내용을 이렇게 썼어요!~");

		fclose(p_file);
	}
	return 0;
}