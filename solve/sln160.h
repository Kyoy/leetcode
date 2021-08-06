//
// Created by 金琪 on 2021/7/21.
//

#pragma once
#include "../include/listNode.h"
class Solution {
public:
    ListNode *getIntersectionNode1(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }
        ListNode *pA = headA, *pB = headB;
        while (pA != pB) {
            pA = pA == nullptr ? headB : pA->next;
            pB = pB == nullptr ? headA : pB->next;
        }
        return pA;
    }
};
