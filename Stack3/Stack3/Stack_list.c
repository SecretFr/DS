#include <stdio.h>
#include <stdlib.h>

typedef struct Node //노드정의
{
	int data;
	struct Node *next;
}Node;

typedef struct Stack {//stack 구조체 정의
	Node *top; //맨 앞 노드(가장 최근에 생성한 노드
}Stack;

void InitStack(Stack *stack) {
	stack->top = NULL;
}

int IsEmpty(Stack *stack) {
	return stack->top == NULL;
}

void Push(Stack *stack, int data) {
	Node *now = (Node*)malloc(sizeof(Node));
	now->data = data;//데이터 설정
	now->next = stack->top;//now의 next링크를 현재 top으로 설정
	stack->top = now;//스택의 맨 앞은 now로 설정
	printf("Push item is: %d\n", now->data);
}

int Pop(Stack *stack){
	Node *now;
	int re;
	if (IsEmpty(stack)) {
		return 0;
	}
	now = stack->top;//now를 top으로 설정
	re = now->data;//꺼낼 값은 now의 data로 설정

	stack->top = now->next;//top을 now의 next로 설정
	free(now);//메모리 해제
	return re;
}

int main() {
	int i;
	Stack stack;
	for (i = 1; i <= 5; i++) {
		Push(&stack, i);
	}
	while (!IsEmpty(&stack)) {
		printf("%d\n", Pop(&stack));
	}
	return 0;
	{

	}
}