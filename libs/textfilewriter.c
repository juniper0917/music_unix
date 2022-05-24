void create_music_titles(FILE* stream){

}
void read_file(char* file_name){
	FILE *stream;
	stream = fopen(file_name, "r");
	int music_count = (int)fgets();
	char* music_titles[] = new char*[music_count];
        for (int i=0; i < music_count; i++){
                music_titles[i] = fgets();
        }
	int instr_cnt = (int)fgets();
	char* instr_set[] = new char*[instr_cnt];
        for (int i=0; i < instr_cnt; i++){
                instr_set[i] = fgets();
        }
	create_music_titles(steam);
}
void write_file(char* file_name){
	FILE *stream;
	stream = fopen(file_name, "w");
	fputs( , stream);
	fclose(stream);
}


