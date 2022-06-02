#include "linkedlist.h"
#include "textfilewriter.h"
#include "node.h"

static Node* _head = NULL;

static Node* _tail = NULL;

static Node* _cur_node = NULL;

static int count = 0;


int main() {
    char h;
    char cmd;
    char title[100];
    char songList[100];
    int songNumber;

    Node* head = (Node*)malloc(sizeof(Node));

    do{
        scanf("%d",songNumber);
        cmd = getchar();

        switch(cmd){
            case 'add':

            case 'del':
                delete_node(_cur_node);
            case 'list':
            case 'next':
                next();
            case 'prev':
                prev();
            case 'move':
            case 'play':
                printf("%c is now playing!", _cur_node);
            case 'clea':
                clear();
            case 'load':
                read_file(fileno);
            case 'save':
                write_file(fileno);


        }
    }
    while(cmd != 'quit');
}
