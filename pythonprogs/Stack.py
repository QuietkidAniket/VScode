top = None
def isEmpty(stk):
    if stk == []:
        return True
    else:
        return False

def Push(stk, item):
    stk.append(item)
    top = len(stk) - 1

def Pop(stk):
    if isEmpty(stk):
        return "Underflow"
    else: 
        item = stk.pop()
        if len(stk) == 0:
            top = None
        else:
            top = len(stk) - 1
def Peek(stk):
    if isEmpty(stk):
        return "Undeflow"
    else:
        top = len(stk) - 1
        return stk[top]

def Display(stk):
    if isEmpty(stk):
        print("Stack is empty")
    else:
        top = len(stk) - 1
        print(stk[top], "<--top")
        for a in range(top-1, -1, -1):
            print(stk[a])
    
