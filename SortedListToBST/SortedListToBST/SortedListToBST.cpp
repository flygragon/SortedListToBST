// SortedListToBST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"ListNodeInput.h"
#include"sortedListToBST.h"
#include"BiTreeLevelOutput.h"
#include"BiTreeDFSOutput.h"
using namespace std;

int main()
{
	SingleListInput L;
	ListNode* p = L.Input();
 	SortedListToBST BT;
	TreeNode* TN = BT.ToBST(p);
	BiTreeLevelOutput BTPut;
	BTPut.LevelOutput(TN);
	BiTreeDFSOutput BTDFSPut;
	BTDFSPut.DFSOutput(TN);
    return 0;
}

