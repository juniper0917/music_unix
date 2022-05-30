#include <stdio.h>
#include <string.h>

#define MAX_TITLE_SIZE 50

void create_music_titles(FILE* stream){
        int count=0;
        char buffer[MAX_TITLE_SIZE];
        fscanf(stream, "%d", &count);
        clear();
        while(count-->0){
                fscanf(stream, "%s", buffer);
                append_left(strlen(buffer), buffer);
        }
	printf(buffer);
}

int main(){
	FILE *stream = fopen("test_text.txt", "r");
	/*
        int music_cnt;
        fscanf(stream, "%d", &music_cnt);
	fgetc(stream);
        char music_titles[music_cnt][100];
        for (int i=0; i < music_cnt; i++){
                fgets(music_titles[i], 100, stream);
		printf("%s", music_titles[i]);
        }
        int instr_cnt;
        fscanf(stream, "%d", &instr_cnt);
	fgetc(stream);
        char instr_set[instr_cnt][100];
        for (int i=0; i < instr_cnt; i++){
                fgets(instr_set[i], 100, stream);
		printf("%s", instr_set[i]);
        }
`	*/
	create_music_titles(stream);
	create_music_titles(stream);
	fclose(stream);
	return 0;
}

