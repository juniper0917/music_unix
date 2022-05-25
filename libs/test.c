#include <stdio.h>

int main(){
	FILE *stream = fopen("test_text.txt", "r");
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

	return 0;
}
