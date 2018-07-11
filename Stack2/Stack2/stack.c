#include<stdio.h>


// ��� �� define
#define LEN 10        // ������ ����
#define TRUE 1        
#define FALSE 0

typedef int Data;    // ��������(������)                              

					 // ���� ����ü
typedef struct array_stack {
	Data Arr[LEN];
	int top;
} array_stack;

// ���� ��� ��ȯ
typedef array_stack Stack;

// ���� �ʱ� ����
void stack_init(Stack *pstack) {
	pstack->top = -1;
}
// �� ���� Ȯ��
int IsEmpty(Stack *pstack) {
	if (pstack->top == -1)
		return TRUE;
	else
		return FALSE;
}

// ������ ����
void Push(Stack *pstack, Data Data) {
	pstack->top += 1;
	pstack->Arr[pstack->top] = Data;
}

// ������ ����
void Pop(Stack *pstack) {

	if (IsEmpty == TRUE) {
		printf("memory error!");
		exit(-1);
	}

	pstack->top -= 1;
}

// top index�� ������ Ȯ��
Data peek(Stack *pstack) {
	if (IsEmpty == TRUE) {
		printf("memory error!");
		exit(-1);
	}

	return pstack->Arr[pstack->top];
}

// stack ���尪 ���
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