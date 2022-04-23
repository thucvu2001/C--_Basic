#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
class solution {
public:
    void preOrder(Node* root)
    {
        if (root == NULL)
            return;
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
    Node* insert(Node* root, int value)
    {
        if (root == NULL) {
            Node* newNode;
            newNode = (Node*)malloc(sizeof(Node));
            newNode->left = NULL;
            newNode->right = NULL;
            newNode->data = value;
            return newNode;
        }
        if (value <= root->data)
            root->left = insert(root->left, value);
        else
            root->right = insert(root->right, value);
        return root;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solution myTree;
    Node* root = NULL;
    int t, data;
    cin >> t;
    while (t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.preOrder(root);
}