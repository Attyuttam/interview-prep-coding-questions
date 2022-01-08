#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL)return false;
        if(head->next==NULL)return true;
        
        ListNode* sp = head;
        ListNode* fp = head;
        
        while(fp!=NULL){
            sp=sp->next;
            fp=fp->next;
            
            if(fp!=NULL)fp=fp->next;
        }
        string val1 = "";
        string val2 = "";
        
        ListNode* p = head;
        
        while(p!=sp){
            val1+=to_string(p->val);
            p=p->next;
        }
        
        p = sp;
        while(p!=NULL){
            val2+=to_string(p->val);
            p=p->next;
        }
        
        reverse(val2.begin(),val2.end());
        
        if(val1.size()==val2.size() && val1!=val2)return false;
        if(val1.size()!=val2.size()){
            val1.erase(val1.begin()+(val1.length()-1));
            return val1 == val2;           
        }
        return true;
    }
};
int main(){

	return 0;
}


