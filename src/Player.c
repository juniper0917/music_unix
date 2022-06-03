#include <stdlib.h>
#include <string.h>

#include "linkedlist.h"
#include "textfilewriter.h"


void read_command(char** cmds);

int main(){
char ** cmds;
scanf("%c",cmds);
read_command(cmds);
    
}

void read_command(char** cmds) {

    Node* head = (Node*)malloc(sizeof(Node));
    int songNumber;
    Node* current = head -> data;
    char title[100];
    int index;

    do{
        scanf("%d",songNumber);
        cmds = getchar();

        switch(cmds){
            case 'add':
                scanf("%d", &songNumber);
                scanf("%c",&title);
                append(n,new_data);
                append_left(n,new_data);
                create_music_titles(stream);
            case 'del':
                delete_node(current);
                delete(current);
            case 'list':
                print();
            case 'next':
                next();
            case 'prev':
                prev();
            case 'move':
                scanf("%d",index);
                char moveTo = get_node(index);
                append_left(moveTo);
            case 'play':
                char temp = get_node(current);
                printf("%c is now Playing!",temp);
            case 'clea':
                clear();
            case 'load':
                read_file();
            case 'save':
                write_file();

        }
    }
    while(cmds != 'quit');
    
}
