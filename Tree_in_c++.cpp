#include<iostream>
#include<conio.h>

using namespace std;

// class tree{
   
//    private:
//    int root_node[20]={1,2,-1,-1,3,-1,6,-1,-1};

//   public:
//   int create_tree(){
//        int size=sizeof(root_node)/4;     
//        for(int i=0;i<size;i++){
          
//           if(root_node[i]!=-1){
          
//             return root_node[i];
//           }
            
//        }
//   }
// };

// int main(){
//       tree real_tree;
   
//    cout<<"The order of the tree is "<< real_tree.create_tree();     


//    if(real_tree.create_tree()==1){
//       cout<<"Your tree is created successfully";
//    }
//    else{
//       cout<<"Sorry their is fault";
//    }    
// }



struct Node {
      int data;

      struct Node* left;
      struct Node* right;

      Node(int val) {
            data=val;
            left = NULL;
            right = NULL;
      }
};

int main(){
struct Node* root = new Node(1);
      root->left = new Node(2);
      root->right = new Node(3);


      root->left->left = new Node(4);
      root->left->right = new Node(5);  


      return 0;
}


