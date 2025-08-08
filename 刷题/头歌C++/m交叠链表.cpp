#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


struct Node
{
	int  value;
	struct Node* next;
};


struct Node* creat(int* nums, int cnt)
{
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* front_p = head;
	struct Node* current_p = NULL;

	for (int i = 0; i < cnt; i++)
	{
		current_p = (struct Node*)malloc(sizeof(struct Node));
		current_p->value = nums[i];

		front_p->next = current_p;
		front_p = current_p;
	}

	front_p->next = NULL;

	return head;
}

void show(struct Node* p)
{
	p = p->next;
	while (p)
	{
		printf("%d ", p->value);
		p = p->next;
	}
}

struct Node* fun(struct Node* line1, struct Node* line2)
{
	//start
	struct Node* ret = (struct Node*)malloc(sizeof(struct Node));
	struct Node* c_ret = (struct Node*)malloc(sizeof(struct Node));
	c_ret = ret;
	
	struct Node* c1 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* c2 = (struct Node*)malloc(sizeof(struct Node));
	c1=line1->next;
	c2=line2->next;
	
	while(c1 && c2){
		c_ret->next=c1;
		c_ret=c_ret->next;//f
		//c_ret=c1;//t
		c1=c1->next;
		
		c_ret->next=c2;
		c_ret=c_ret->next;//f
		//c_ret=c2;//t
		c2=c2->next;
	}
	
	if(c1) c_ret->next=c1;
	if(c2) c_ret->next=c2;
	
	return ret;
	//end
}


int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	int a1[100000], a2[100000];
	for (int i = 0; i < n1; i++)
		scanf("%d", &a1[i]);

	for (int i = 0; i < n2; i++)
		scanf("%d", &a2[i]);

	struct Node* line1 = creat(a1, n1);
	struct Node* line2 = creat(a2, n2);

	struct Node* end = fun(line1, line2);

	show(end);
}
