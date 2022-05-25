void create_music_titles(FILE* stream){

}
void read_file(char* file_name){
	FILE *stream;
	stream = fopen(file_name, "r");
	int music_cnt;
	fscanf(stream, "%d", &music_cnt);
	char music_titles[music_cnt][100];
        for (int i=0; i < music_cnt; i++){
                fgets(music_titles[i], 100, stream);
        }
	int instr_cnt;
	fscanf(stream, "%d", &instr_cnt);
	char instr_set[instr_cnt][100];
        for (int i=0; i < instr_cnt; i++){
                fgets(instr_set[i], 100, stream);
        }
	//create_music_titles(steam);
}
void write_file(char* file_name){
	FILE *stream;
	stream = fopen(file_name, "w");
	fputs( , stream);
	fclose(stream);
}


