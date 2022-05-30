#include <string.h>
#include "../include/textfilewriter.h"
#include "../include/linkdelist.h"

void create_music_titles(FILE* stream){
	int count=0;
	char buffer[MAX_TITLES_SIZE];
	fscanf(stream, "%d", &count);
	clear();
	while(count-->0){
		fscanf(stream, "%s", buffer);
		append_left(strlen(buffer), buffer);
	}
}
/*
void test_instruction(FILE* stream){
	int music_cnt;
        fscanf(stream, "%d", &music_cnt);
        fgetc(stream);
        char music_titles[music_cnt][100];
        for (int i=0; i < music_cnt; i++){
                fgets(music_titles[i], 100, stream);
        }
        int instr_cnt;
        fscanf(stream, "%d", &instr_cnt);
        fgetc(stream);
        char instr_set[instr_cnt][100];
        for (int i=0; i < instr_cnt; i++){
                fgets(instr_set[i], 100, stream);
        }
}
*/

void read_file(char* file_name){
        FILE *f = fopen(file_name, "r");
        create_music_titles(f);
	fclose(f);
}
void write_file(char* file_name){
        FILE *stream = fopen(file_name, "w");
        //fputs( , stream);
	print_file(f);
        fclose(f);
}


