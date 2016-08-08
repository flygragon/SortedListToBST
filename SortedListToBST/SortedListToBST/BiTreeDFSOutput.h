#pragma once
#include<iostream>
#include"TreeNode.h"
using namespace std;
class BiTreeDFSOutput {
public:
	void DFSOutput(TreeNode* root) {
		if (root) {
			cout << root->val << " ";
			if (root->left)
				DFSOutput(root->left);
			if (root->right)
				DFSOutput(root->right);
			cout << endl;
		}
	}
};