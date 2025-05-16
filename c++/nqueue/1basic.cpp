#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left ;
    node *right ;

    node(int data)
    {
        this -> data = data ;  
        this -> left = NULL ;
        this -> right = NULL ;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting at left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting at right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTranverse(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);                      // L
    cout << root->data << " ";                // N
    inorder(root->right);                     // R 
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";                // N
    preorder(root->left);                     // L

    preorder(root->right);                   // R
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    
    postorder(root->left);                 // L

    postorder(root->right);                // R
    cout << root->data << " ";             // N
}

int main()
{

    node *root = NULL;

    root = buildTree(root);
    //  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // levelOrder
    cout << " Binary tree in transversal order " << endl;
    levelOrderTranverse(root);
    cout << "Inorder transversal " << endl;
    inorder(root);
    cout << endl;
    cout << "Preoder transversal " << endl;
    preorder(root);
    cout << endl;
  cout << "Postorder transversal" << endl;
    postorder(root);
    return 0;
}