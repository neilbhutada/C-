#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *left = NULL;
    struct node *right = NULL;
};
class BinarySearchTree
{
    public:
    struct node *root = NULL;
    int size;
    BinarySearchTree()
    {
        cout<<"Enter size";
        cin>>size;
    }
    int flag = 0;
    void create(struct node *parent ,int key)
    {
       if(root == NULL)
       {
           cout <<"Value entered in root "<<key;
           parent->data = key;
           root = parent;
           return;
       }

       if(key > parent->data)
       {

           if(parent->right != NULL)
           {
               cout<<"\n going towards right "<<key<<endl;
               create(parent->right , key);
           }
           else
           {
               cout<<"\nNode entered in right side "<<key<<endl;
            struct node *rightchild = new node;
            /*rightchild->right = NULL;
            rightchild->left = NULL;*/
            parent->right = rightchild;
            rightchild->data = key;
            return;
           }
       }
       else
       {
           if(parent->left != NULL)
           {
               cout<<"\n"<<key<<" going towards left"<<endl;
               create(parent->left , key );
           }
           else
           {
               cout<<"\n Node entered in left side "<<key<<endl;
               struct node *leftchild = new node;
               /*leftchild->right = NULL;
               leftchild->left = NULL;*/
               parent->left = leftchild;
               leftchild->data = key;
               return;
           }
       }

    }


    void preorder(struct node *temp)
    {
        if(temp != NULL)
        {

            cout<<temp->data<<endl;

            preorder(temp->left);
            preorder(temp->right);
        }

    }
    void postorder(struct node *temp)
    {
        if(temp!=NULL)
        {
            postorder(temp->left);
            postorder(temp->right);
            cout<<temp->data<<endl;
        }
    }
 void inorder(struct node *temp)
    {
        if(temp!=NULL)
        {
            inorder(temp->left);
            cout<<(temp->data)<<endl;
            inorder(temp->right);
        }
    }
    void delete_node(struct node *ele,int key)
    {
        struct node *point;

        if(key == ele->data)
        {
            cout<<"\n Element is found"<<ele->data;

             if(ele->right==NULL || ele->left == NULL )
            {
                if(ele->right != NULL)
                {
                    point = ele;
                    if(point->right!=NULL)
                    {
                      point->right = point->right->right;
                      return;
                    }
                    point = NULL;
                    return;
                }
                else
                {
                     point = ele;
                    if(point->left!=NULL)
                    {
                       point->left = point->left->left;
                       return;
                    }
                    point = NULL;
                    return;
                }
            }
            else
            {
                if(point->right->left!=NULL)
                   {
                       point->data = point->right->left->data;
                       delete_node(point->right->left , point->right->left->data );
                   }
                   else
                   {
                       point->data = point->right->data;
                       delete_node(point->right,point->right->data);
                   }
            }

        }
         else if(key>ele->data)
         {
             delete_node(ele->right,key);
         }
         else
         {
             delete_node(ele->left , key);
         }
    }

    void begin()
    {
struct node *start = new node;
/*start->right = NULL;
start ->left = NULL;*/
create(start,9);
create(root , 12);
create(root ,6);
create(root,13);
create(root,5);
create(root , 7);
create(root , 10);


cout<<"\n";
       preorder(root);

cout<<"\n";
 inorder(root);
cout<<"\n";
postorder(root);
       //delete_node(root , 9);
        //postorder(root);
        //inorder(root);

    }
};
int main()
{
    BinarySearchTree bst;
    bst.begin();
}
