#pragma once
#include"ListNode.h"
#include"TreeNode.h"
#include<vector>

class SortedListToBST {
private:
	TreeNode* Convert(std::vector<int>& num, int i, int j) {
		int mid = (i + j) / 2;
		TreeNode* p = new TreeNode(num[mid]);
		//cout << p->val <<" ";
		if (mid >i) p->left = Convert(num, i, mid - 1);
		if (mid <j) p->right = Convert(num, mid + 1, j);
		return p;
	}
public:
	TreeNode* ToBST(ListNode* head) {
		if (!head) return nullptr;
		std::vector<int> val;
		for (ListNode* p = head; p; p = p->next)
			val.push_back(p->val);
		return Convert(val, 0, val.size() - 1);
	}
};