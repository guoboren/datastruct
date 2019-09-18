/*
 * @Description: In User Settings Edit
 * @Author: your name
 * @Date: 2019-09-16 15:34:49
 * @LastEditTime: 2019-09-16 18:18:45
 * @LastEditors: Please set LastEditors
 */
#include "BBSTree.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "平衡二叉树" << endl;
    int arr[] = {3, 2, 1, 4, 5, 6, 7, 10, 9, 8};
    BBSTree tree;
    for (int i = 0; i < end(arr) - begin(arr); i++)
    {
        tree.Insert(arr[i]);
    }
    tree.PreOrder();
    tree.InOrder();
    tree.PostOrder();
    cout << "删除节点6" << endl;
    tree.Delete(7);
    tree.PreOrder();
    tree.InOrder();
    tree.PostOrder();
    cout << "插入节点11" << endl;
    tree.Insert(11);
    tree.PreOrder();
    tree.InOrder();
    tree.PostOrder();
    return 0;
}