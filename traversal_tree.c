#include <stdio.h>
/*
求一棵二叉树的前序遍历，中序遍历和后序遍历
*/

typedef struct Binary_Tree
{
	int data;
	struct Binary_Tree *left_tree;
	struct Binary_Tree *right_tree;
}binary_tree;

binary_tree b_tree[1024];

void Creat_tree(int s)
{
	int i,m,n;

	b_tree[1].data = 1;

	for(i = 1; i <= s; ++i)
	{
		scanf("%d%d", &m,&n);
		b_tree[i].left_tree = &b_tree[m];
		b_tree[i].left_tree->data = m;
		b_tree[i].right_tree = &b_tree[n];
		b_tree[i].right_tree->data = n;
	}
}

void PreOrderTraversal(binary_tree *tree)
{
	if(tree->data)
	{
		printf("%d ", tree->data);
		PreOrderTraversal(tree->left_tree);
		PreOrderTraversal(tree->right_tree);
	}

}

void InOrderTraversal(binary_tree*tree)
{
	if(tree->data)
	{
		InOrderTraversal(tree->left_tree);
		printf("%d ", tree->data);
		InOrderTraversal(tree->right_tree);
	}
}

void PostOrderTraversal(binary_tree *tree)
{
	if(tree->data)
	{
		PostOrderTraversal(tree->left_tree);
		PostOrderTraversal(tree->right_tree);
		printf("%d ", tree->data);
	}
}
int main()
{
	int n;

	scanf("%d", &n);

	Creat_tree(n);
	PreOrderTraversal(&b_tree[1]);
	printf("\n");
	InOrderTraversal(&b_tree[1]);
	printf("\n");
	PostOrderTraversal(&b_tree[1]);

	return 0;
}