#include <cmath>
#include <iostream>
using namespace ::std;

template <class T>
class Node {
public:
    Node<T>* left;
    Node<T>* right;
    T data;

    Node(T data)
    {
        this->left = nullptr;
        this->right = nullptr;
        this->data = data;
    }
};

template <class T>
class BinarySearchTree {
    Node<T>* root;

public:
    BinarySearchTree()
    {
        root = nullptr;
    }

    void add(T value)
    {
        root = add(root, value);
    }

    Node<T>* add(Node<T>* r, T value)
    {
        if (r == nullptr) {
            return new Node<T>(value);
        }
        if (value >= r->data) {
            r->right = add(r->right, value);
        } else {
            r->left = add(r->left, value);
        }
        return r;
    }

    void inOrder()
    {
        inOrder(root);
        cout << endl;
    }

    void inOrder(Node<T>* r)
    {
        if (r != nullptr) {
            inOrder(r->left);
            cout << r->data << ' ';
            inOrder(r->right);
        }
    }

    int totalNode()
    {
        return totalNode(root);
    }

    int totalNode(Node<T>* r)
    {
        if (r == nullptr) {
            return 0;
        }
        return 1 + totalNode(r->left) + totalNode(r->right);
    }

    int countLeafNode()
    {
        return countLeafNode(root);
    }

    int countLeafNode(Node<T>* r)
    {
        if (r == nullptr) {
            return 0;
        }
        if (r->left == nullptr && r->right == nullptr) {
            return 1;
        }
        return countLeafNode(r->left) + countLeafNode(r->right);
    }

    int countTwoSubTreeNode()
    {
        return countTwoSubTreeNode(root);
    }

    int countTwoSubTreeNode(Node<T>* r)
    {
        if (r == NULL) {
            return 0;
        }
        if (r->left != nullptr && r->right != nullptr) {
            return 1 + countTwoSubTreeNode(r->left) + countTwoSubTreeNode(r->right);
        }
        return countTwoSubTreeNode(r->left) + countTwoSubTreeNode(r->right);
    }

    int countOneSubTreeNode()
    {
        return countOneSubTreeNode(root);
    }

    int countOneSubTreeNode(Node<T>* r)
    {
        if (r == nullptr) {
            return 0;
        }
        if ((r->left != nullptr && r->right == nullptr) || (r->right != nullptr && r->left == nullptr)) {
            return 1 + countOneSubTreeNode(r->left) + countOneSubTreeNode(r->right);
        }
        return countOneSubTreeNode(r->left) + countOneSubTreeNode(r->right);
    }

    int countBranchNode()
    {
        return countBranchNode(root);
    }

    int countBranchNode(Node<T>* r)
    {
        if (r == nullptr || (r->left == nullptr && r->right == nullptr)) {
            return 0;
        }
        return 1 + countBranchNode(r->left) + countBranchNode(r->right);
    }

    int height()
    {
        return height(root);
    }

    int height(Node<T>* r)
    {
        if (r == nullptr || (r->left == nullptr && r->right == nullptr)) {
            return 0;
        } else {
            int leftHeight = height(r->left);
            int rightHeight = height(r->right);
            return 1 + max(leftHeight, rightHeight);
        }
    }
};

int main()
{
    int n;
    cin >> n;
    BinarySearchTree<int> tree;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        tree.add(x);
    }
    cout << tree.height() << endl;

    return 0;
}