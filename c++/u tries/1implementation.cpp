#include <iostream>
using namespace std;

class Trienode{
public:
    char data;
    Trienode *children[26];
    bool isterminal;
    // constructor
    Trienode(char ch){
        data = ch;
        for (int i = 0; i < 26; i++){
            children[i] = NULL;
        }
        isterminal = false;
    }
};

class Trie{
public:
    Trienode* root;
   // constructor
    Trie() {
        root = new Trienode('\0');
    }

    void insertUtil(Trienode *root, string word){
        // base case
        if (word.length() == 0){
            root->isterminal = true;
            return ;}

        int index = word[0] - 'A';
        Trienode *child;

        // present
        if (root->children[index] != NULL){
            child = root -> children[index];
        }

        // absent
        else{
            child = new Trienode(word[0]);
            root->children[index] = child;
        }

        // recursion
        insertUtil(child, word.substr(1));
    }

    void insertword(string word){
        insertUtil(root,word);
    }

    bool searchutil(Trienode* root , string word){
      
      // base 
      if(word.length() == 0){
        return root -> isterminal;
      }
      int index = word[0]-'A';
      Trienode* child;
      //present
      if(root->children[index] != NULL){
      child = root->children[index];
      }
      else{
        //absent
        return false;
      }
      //recursion
      return searchutil(child,word.substr(1));
    }

    bool searchword(string word){
        return searchutil(root,word);
    }

    void deleteutil(Trienode* root , string word){
      
      // base 
      if(word.length() == 0){
        root -> isterminal  = false;
      }
      int index = word[0]-'A';
      Trienode* child;
      //present
      if(root->children[index] != NULL){
      child = root->children[index];
      }
      else{
        //absent
        return ;
      }
      //recursion
      return deleteutil(child,word.substr(1));
    }

    void deleteword(string word){
         deleteutil(root,word);
    }
};
int main()
{
    

    Trie *t = new Trie();
    t->insertword("ABCDE");
    cout << " hi are u there??" << endl << endl;
    cout << "present or not " << t->searchword("ABCDE") << endl;
    t->insertword("TOMMY");
    cout << "present or not " << t->searchword("TOM") << endl;
    cout << "present or not " << t->searchword("TOMMY") << endl;
    t-> deleteword("TOMMY");
    cout << "deleted tommy " << endl;
    cout << "present or not " << t->searchword("TOMMY") << endl;



    return 0;
   
}