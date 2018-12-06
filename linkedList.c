#include <stdio.h>
#include <stdlib.h>
 
typedef struct linknd {
	int data;	// 데이터 저장 멤버 
	
	void *next;	// 다음 node를 가리킬 포인터 변수 선언  
	//struct linknd *next;
} linknd_t;	// typedef 조합, node 형태 구현  

//정적 할당, 외부에서 접근 불가, static 없으면 다른 파일에서 extern해도 접근 불가   
static linknd_t *list;	// linked list 실체 구현, struct 빠짐, typedef 써서  

linknd_t* create_node(int value) {
	
	linknd_t* ndPtr;
	
	//동적 메모리 할당 
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t) );
	
	if (ndPtr == NULL)	// 정상적인 메모리를 가리키고 있는지의 여부  
	{
		printf("ERROR!\n"); 
		return NULL; // 가리키지 않으면 NULL값 반환  
	}
	
	//정수값 저장  
	ndPtr->data = value;
	ndPtr->next - NULL;	// linked list의 next 초기화 
	
	return ndPtr; 
}

