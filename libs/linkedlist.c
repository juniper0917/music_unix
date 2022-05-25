#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

static Node* _head = NULL;
static Node* _tail = NULL;
static Node* _cur_node = NULL;

bool empty(){
	_head = (Node *)malloc(sizeof(Node));
	_tail = (Node *)malloc(sizeof(Node));
	_cur_node = (Node *)malloc(sizeof(Node));

	_head = NULL;
	_tail = NULL;
	_cur_node = NULL;
}

size_t size(){
	size_t n = 0;
	_cur_node = _head;
	
	while(_cur_node != _tail){
		n++;
		_cur_node = _cur_node->next;
	}
	n++;
	return n;
}

void print(){
	_cur_node = _head;
	printf("Linkedlist [ ");
	int i = 0;
	n = size();
	
	for(i = 0; i<n; i++){
		printf("%s ", _cur_node->data);
		_cur_node = _cur_node->next;
	}
	printf("]\n");
}

void print_file(FILE*stream){}

void clear(){
	_cur_node = _head;
	Node* temp;
	
	for(int i=0; i<size(); i++){
		temp = _cur_node->next;
		free(_cur_node);
		_cur_node = temp;
	}
	printf("Linkedlist is cleared!");
	_head = NULL;
	_tail = NULL;
	_cur_node = NULL;
}

Node* append_left(size_t n, char new_data[n]){
	Node* temp = (Node *)malloc(sizeof(Node));
	temp->data = new_data;

	if(_head == NULL){
		_head = _tail = temp;
		_head->prev = temp;
		_head->next = temp;
	}
	else{
		temp->prev = _head->prev;
		temp->next = _head;
		_head->prev = temp;
		_tail->next = temp;
		_head = temp;
	}
}

Node* insert_after(Node* cur_node, Node* new_node){
	new_node->next = cur_node->next;
	new_node->prev = cur_node;
	cur_node->next->prev = new_node;
	cur_node->next = new_node;
}

Node* append(size_t n, char new_data[n]){
	Node *temp = (Node *)malloc(sizeof(Node));
	temp->data = new_data;

	if(_tail = NULL){
		_head = _tail = temp;
		_tail->prev = temp;
		_tail->next = temp;
	}
	else{
		temp->prev = _tail;
		temp->next = _tail->next;
		_tail->next = temp;
		_head->prev = temp;
		_tail = temp;
	}
}

Node* delete_node(Node* cur_node){
	Node* temp;
	temp = cur_node->prev;
	temp->next = cur_node->next;
	cur_node->next->prev = temp;

	free(cur_node);
}

Node* delete(char* data){
	_cur_node = _head;

	for(int i=0; i<size(); i++;){
		if(_cur_node->data == data)
			delete_node(_cur_node);
		else
			_cur_node = _cur_node->next;
	}
}

Node* get_node(size_t index){}

Node* first(){
	_cur_node = _head;
}

Node* last(){
	_cur_node = _tail;
}

Node* next(){
	_cur_node = _cur_node->next;
}

Node* prev(){
	_cur_node = _cur_node->prev;
}

