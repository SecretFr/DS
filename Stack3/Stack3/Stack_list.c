#include <stdio.h>
#include <stdlib.h>

typedef struct Node //�������
{
	int data;
	struct Node *next;
}Node;

typedef struct Stack {//stack ����ü ����
	Node *top; //�� �� ���(���� �ֱٿ� ������ ���
}Stack;

void InitStack(Stack *stack) {
	stack->top = NULL;
}

int IsEmpty(Stack *stack) {
	return stack->top == NULL;
}

void Push(Stack *stack, int data) {
	Node *now = (Node*)malloc(sizeof(Node));
	now->data = data;//������ ����
	now->next = stack->top;//now�� next��ũ�� ���� top���� ����
	stack->top = now;//������ �� ���� now�� ����
	printf("Push item is: %d\n", now->data);
}

int Pop(Stack *stack){
	Node *now;
	int re;
	if (IsEmpty(stack)) {
		return 0;
	}
	now = stack->top;//now�� top���� ����
	re = now->data;//���� ���� now�� data�� ����

	stack->top = now->next;//top�� now�� next�� ����
	free(now);//�޸� ����
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