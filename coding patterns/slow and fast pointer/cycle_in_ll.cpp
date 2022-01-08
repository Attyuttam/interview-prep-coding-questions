#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* sp = head;
        ListNode* fp = head;
        
        if(sp==NULL && fp==NULL)return false;
        if(sp->next==NULL)return false;
            
        while(fp!=NULL){
            sp=sp->next;
            fp=fp->next;
            if(fp!=NULL)fp=fp->next;
            
            if(sp==fp)return true;
        }
        return false;
    }
};
int main(){

	return 0;
}


