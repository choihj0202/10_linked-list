#include <stdio.h>
#include <stdlib.h>

// node ���� ����
typedef struct linknd {
	
	int data;	// ������ ���� ��� 
	
	void *next;	// ���� node�� ����ų ������ ���� ����  
	//struct linknd *next;
} linknd_t;	// typedef ����   

//���� �Ҵ�, �ܺο��� ���� �Ұ�, static ������ �ٸ� ���Ͽ��� extern�ص� ���� �Ұ� 
// linked list ��ü ����
static linknd_t *list;	// struct ����, typedef �Ἥ  

// node ���� �Լ� ����  
linknd_t* create_node(int value) {
	
	linknd_t *ndPtr;
	
	//���� �޸� �Ҵ� 
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t) );
	
	if (ndPtr == NULL)	// �������� �޸𸮸� ����Ű�� �ִ����� ����  
	{
		printf("ERROR!\n"); 
		return NULL; // ����Ű�� ������ NULL�� ��ȯ  
	}
	
	//������ ����  
	ndPtr->data = value;
	ndPtr->next = NULL;	// linked list�� next �ʱ�ȭ 
	
	return ndPtr; 
}

// node ����
void addTail(int value) {
	
	linknd_t *ndPtr, *newPtr;
	
	if (list == NULL)
	{
		return;
	}
	
	else
	{
		ndPtr = list;
		
		while (ndPtr->next != NULL)
		{
			ndPtr = ndPtr->next;
		}
		
		newPtr = create_node(value);
		ndPtr->next = newPtr;
	}
}

// list ����  
void genList(void) {
	
	list = create_node(0); // headernode ����  
	
	return; 
}

// node ���� �ϰ� ���, �ι�° ������ 
void print_list(void) {
	linknd_t *ndPtr; // node�� ����Ű�� ������ ���� ����
	
	ndPtr = (linknd_t*)list->next;
	
	while (ndPtr != NULL)
	{
		printf("%d ", ndPtr->data);
		ndPtr = ndPtr->next;
	} 
} 

// addTail, genList, print_list�� ���ο��� �� ��  

