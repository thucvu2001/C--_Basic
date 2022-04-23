#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left; // con tro trai
    struct Node* right; // con tro phai
    Node(int val) // val la gia tri cua truong data cua node
    {
        data = val; // tao node gom 3 truong, du lieu, con tro trai, con tro phai
        left = NULL;
        right = NULL;
    }
};

void printPostorder(struct Node* node) // duyet trai->phai->goc
{
    if (node == NULL)
        return;
    // duyet node trai trc
    printPostorder(node->left);
    // sau do duyet node phai
    printPostorder(node->right);
    // sau do duyet node goc
    cout << node->data << " ";
}

void printInorder(struct Node* node) // duyet trai->goc->phai
{
    if (node == NULL)
        return;
    // duyet den node ngoai cung ben trai
    printInorder(node->left);
    // in node goc
    cout << node->data << " ";
    // duyet den node ngoai cung ben phai
    printInorder(node->right);
}

void printPreorder(struct Node* node) // duyet goc->trai->phai
{
    if (node == NULL)
        return;
    // duyet node goc trc
    cout << node->data << " ";
    // sau do duyet node trai
    printPreorder(node->left);
    // sau do duyet node phai
    printPreorder(node->right);
}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "\nKet qua duyet cay NLR: \n";
    printPreorder(root);
    cout << "\nKet qua duyet cay LNR: \n";
    printInorder(root);
    cout << "\nKet qua duyet cay LRN: \n";
    printPostorder(root);
    return 0;
}
