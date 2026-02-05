
**Insert in Circular Singly Linked LIST ALGO**

Procedure : Insert_CSLL(head, item)

I/P : head → pointer to first node
      item → element to be inserted
O/P : modified head returned

Begin

newnode ← Getnode()
info[newnode] ← item

/* Case 1 : Empty list */
if head = NULL then
    next[newnode] ← newnode
    head ← newnode
    return head
end if

/* Case 2 : Insert at end */
temp ← head
while next[temp] ≠ head do
    temp ← next[temp]
end while

next[temp] ← newnode
next[newnode] ← head

return head

End
