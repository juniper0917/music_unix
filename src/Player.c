#include "linkedlist.h"
#include "textfilewriter.h"
#include "node.h"

Node* current;

void init(Node* head)
{
    head -> next = head;
    head -> prev = head;
}

void dinsert(Node* prev,char* data)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data =(char*)malloc(sizeof(char) * (strlen(data)+1));
    strcpy(new_node -> data , data);
    printf("data [%s]의 길이 : %d\n", new_node -> data,strlen(new_node->data));

}



int main() {
    char h;
    char cmd;
    char title[100];
    char songList[100];
    int songNumber;

    Node* head = (Node*)malloc(sizeof(Node));
    init(head);

    do{
        scanf("%d",songNumber);
        cmd = getchar();

        switch(cmd){
            case 'add':
            case 'del':
            case 'list':
            case 'next':
            case 'prev':
            case 'move':
            case 'play':
            case 'clea':
            case 'load':
            case 'save':


        }
    }
    while(cmd != 'quit');
}
