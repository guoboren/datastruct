/*
 * @Description: In User Settings Edit
 * @Author: your name
 * @Date: 2019-09-16 15:34:29
 * @LastEditTime: 2019-09-16 16:58:00
 * @LastEditors: Please set LastEditors
 */
#pragma once

class BBSTree
{
private:
    enum _EF
    {
        LH = -1,
        EH = 0,
        RH = 1
    };
    class Node
    {
    public:
        Node *left;
        Node *right;
        int EF;
        int data;
    };
    Node *root;

public:
    BBSTree();
    ~BBSTree();
    void Insert(int d);
    void Delete(int d);
    void PreOrder();
    void InOrder();
    void PostOrder();

private:
    void LRotate(Node **n);
    void RRotate(Node **n);
    bool LBalance(Node **n);
    bool RBalance(Node **n);
    bool Insert(Node **n, int d, bool *taller);
    void Delete(Node **n, int d);
    void PreOrder(Node *n);
    void InOrder(Node *n);
    void PostOrder(Node *n);
    void Destroy(Node *n);
    int Height(Node *n);
    BBSTree::Node* FindLeftMax(Node *n);
};