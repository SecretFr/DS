#include<stdio.h>


// 상수 값 define
#define LEN 10        // 스택의 길이
#define TRUE 1        
#define FALSE 0

typedef int Data;    // 데이터형(가변성)                              

					 // 스택 구조체
typedef struct array_stack {
	Data Arr[LEN];
	int top;
} array_stack;

// 스택 명명 변환
typedef array_stack Stack;

// 스택 초기 설정
void stack_init(Stack *pstack) {
	pstack->top = -1;
}
// 빈 스택 확인
int IsEmpty(Stack *pstack) {
	if (pstack->top == -1)
		return TRUE;
	else
		return FALSE;
}

// 데이터 삽입
void Push(Stack *pstack, Data Data) {
	pstack->top += 1;
	pstack->Arr[pstack->top] = Data;
}

// 데이터 삭제
void Pop(Stack *pstack) {

	if (IsEmpty == TRUE) {
		printf("memory error!");
		exit(-1);
	}

	pstack->top -= 1;
}

// top index의 데이터 확인
Data peek(Stack *pstack) {
	if (IsEmpty == TRUE) {
		printf("memory error!");
		exit(-1);
	}

	return pstack->Arr[pstack->top];
}

// stack 저장값 출력
void print(Stack *pstack) {
	int i;
	if (IsEmpty == TRUE) {
		printf("memory error!");
		exit(-1);
	}

	for (i = 0; i < (pstack->top) + 1; i++) {
		printf("%d\n", pstack->Arr[i]);
	}
}


int main() {
	Stack stack;
	stack_init(&stack);

	Push(&stack, 1);
	Push(&stack, 4);
	Push(&stack, 5);
	Push(&stack, 3);
	Push(&stack, 1);

	print(&stack);
}