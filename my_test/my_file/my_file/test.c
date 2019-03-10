#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<assert.h>




typedef struct node {
	char data_buf[2];
	struct node *prive;
	struct node *next;
}node;

node * establish_head_hode(int n)
{
	node *head_node, *node_pt,*end_node;
	head_node = (node*)malloc(sizeof(node));
	end_node = head_node;
	for (int i = 0; i < n; i++)
	{
		node_pt=(node*)malloc(sizeof(node));
		
	}
	
	return;
	
}
//循环列表的建立

typedef char elem_type ; //元素类型

typedef int status;
typedef struct dual_node{
	elem_type data;
	struct dual_node *prior;
}dual_node;
int main()
{
    

	return 0;
}






















