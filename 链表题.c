删除链表中等于给定值 val 的所有节点。
https ://leetcode-cn.com/problems/remove-linked-list-elements/submissions/ 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val) {
	if (head == NULL)
	{
		return NULL;
	}

	struct ListNode* cur = head;
	struct ListNode* prev = NULL;

	while (cur != NULL)
	{
		if (cur->val == val)
		{
			struct ListNode* next = cur->next;
			if (cur == head)
			{
				head = cur->next;
			}
			else
			{
				prev->next = cur->next;
			}

			free(cur);
			cur = next;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}
