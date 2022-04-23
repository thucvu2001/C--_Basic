#include <bits/stdc++.h>
#define SPACE 10
using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class BST {
public:
    TreeNode* root;
    BST()
    {
        root = NULL;
    }
    bool isTreeEmpty()
    {
        if (root == NULL) {
            return true;
        } else {
            return false;
        }
    }

    TreeNode* insertRecursive(TreeNode* r, TreeNode* new_node)
    {
        if (r == NULL) {
            r = new_node;
            return r;
        }

        if (new_node->value < r->value) {
            r->left = insertRecursive(r->left, new_node);
        } else if (new_node->value > r->value) {
            r->right = insertRecursive(r->right, new_node);
        }
        return r;
    }

    void print2D(TreeNode* r, int space)
    {
        if (r == NULL)
            return;
        space += SPACE;
        print2D(r->right, space);
        cout << endl;
        for (int i = SPACE; i < space; i++)
            cout << " ";
        cout << r->value << "\n";
        print2D(r->left, space);
    }

    void printPreorder(TreeNode* r)
    {
        if (r == NULL)
            return;
        cout << r->value << " ";
        printPreorder(r->left);
        printPreorder(r->right);
    }

    int height(TreeNode* r)
    {
        if (r == NULL) {
            return -1;
        } else {
            int hl = height(r->left);
            int hr = height(r->right);
            if (hl > hr)
                return (hl + 1);
            else
                return (hr + 1);
        }
    }
};

int main()
{
    BST obj;
    int t, val;
    cin >> t;
    while (t--) {
        TreeNode* new_node = new TreeNode();
        cin >> val;
        new_node->value = val;
        obj.root = obj.insertRecursive(obj.root, new_node);
    }
    cout << obj.height(obj.root) << endl;
    return 0;
}