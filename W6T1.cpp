#include <iostream>
using namespace std;
class BinTreeNode {
public:
	BinTreeNode(int value) {
		this->value = value;
		this->left = NULL;
		this->right = NULL;
	}
	int value;
	BinTreeNode* left;
	BinTreeNode* right;

};

BinTreeNode* tree_insert(BinTreeNode* tree, int item) {
	if (tree == NULL)
		tree = new BinTreeNode(item);
	else
		if (item < tree->value)
			if (tree->left == NULL)
				tree->left = new BinTreeNode(item);
			else
				tree_insert(tree->left, item);
		else
			if (tree->right == NULL)
				tree->right = new BinTreeNode(item);
			else
				tree_insert(tree->right, item);
	return tree;

}

void postorder(BinTreeNode* tree) {
	if (tree->left != NULL)
		postorder(tree->left);
	if (tree->right != NULL)
		postorder(tree->right);
	cout << tree->value << endl;

}

void in_order(BinTreeNode* tree) {
/*	if (tree->left != NULL)
		in_order(tree->left);
	cout << tree->value << endl;
	if (tree->right != NULL)
		in_order(tree->right); */
	BinTreeNode* prev = NULL;					//POINTER FOR THE PREVIOUS ELEMENT;
	BinTreeNode* root = tree;					//POINTS AT THE ROOT OF THE BST;
	
	while (tree->left != NULL)					//WHILE THERE ARE LEAVES TO THE LEFT :
	{					
		prev = tree;							//SAVES THE PREVIOUS POSITION IN A POINTER;
		tree = tree->left;						//CONTINUES MOVING ALONG THE LEFT BRANCH;
		if (tree->left == NULL)					//IF THERE ARE NO MORE LEFT LEAVES, PRINTS THE VALUE;
		{
			cout << tree->value << endl;
		}
	}
	while (tree->right != NULL)					//GOES TO THE RIGHT BRANCHES;
	{
		tree = tree->right;						
		cout << tree->value << endl;			//FOR RIGHT BRANCHES PRINTS THEM AS IT ITERATES OVER THEM 
		if (tree->right == NULL)				//IF THERE ARE NO MORE RIGHT BRANCHES, RETURNS TO THE ROOT AND PRINTS IT;
		{
			tree = prev;					
			cout << tree->value << endl;		
			tree = root;					
			cout << tree->value << endl;
			while (tree->right != NULL)			//THEN STARTS TO GO TO THE RIGHT BRANCH AND PRINTS EVERY VALUE;
			{
				tree = tree->right;
				cout << tree->value << endl;
			}
			break;
		}
	}
}
int main(int argc, char *argv[])
{
	BinTreeNode* t = tree_insert(0, 6);
	tree_insert(t, 10);
	tree_insert(t, 5);
	tree_insert(t, 2);
	tree_insert(t, 3);
	tree_insert(t, 4);
	tree_insert(t, 11);
	in_order(t);
	while (true);
	return 0;
}