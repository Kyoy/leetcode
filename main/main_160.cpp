#include <iostream>
#include "../solve/sln160.h"

using namespace std;

int main() {
    ListNode a1(4), a2(1);
    ListNode b1(5), b2(0), b3(1);
    ListNode c1(8), c2(4), c3(5);
    a1.next = &a2;
    b1.next = &b2;
    b2.next = &b3;
    b3.next = &c1;
    a2.next = &c1;
    c1.next = &c2;
    c2.next = &c3;
    auto ret = Solution().getIntersectionNode1(&a1, &b1);
    cout << ret->val << endl;
    return 0;
}