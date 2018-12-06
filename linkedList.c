#include <stdio.h>
#include <stdlib.h>
 
typedef struct linknd {
	int data;	// ������ ���� ��� 
	
	void *next;	// ���� node�� ����ų ������ ���� ����  
	//struct linknd *next;
} linknd_t;	// typedef ����, node ���� ����  

//���� �Ҵ�, �ܺο��� ���� �Ұ�, static ������ �ٸ� ���Ͽ��� extern�ص� ���� �Ұ�   
static linknd_t *list;	// linked list ��ü ����, struct ����, typedef �Ἥ  

linknd_t* create_node(int value) {
	
	linknd_t* ndPtr;
	
	//���� �޸� �Ҵ� 
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t) );
	
	if (ndPtr == NULL)	// �������� �޸𸮸� ����Ű�� �ִ����� ����  
	{
		printf("ERROR!\n"); 
		return NULL; // ����Ű�� ������ NULL�� ��ȯ  
	}
	
	//������ ����  
	ndPtr->data = value;
	ndPtr->next - NULL;	// linked list�� next �ʱ�ȭ 
	
	return ndPtr; 
}

