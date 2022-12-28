stack = None
top = -1
def initstack(length=10):
    stack = list(length)

def push(item):
    if len(stack) == top :
        print("Stack Overflow!!! \t cannot accomodate more items in the stack")
        return 
    stack.append(item)
    top = len(stack) - 1

def pop():
    if top == -1:
        print("Stack Underflow!!! \t no element to remove")
        return
    stack.pop()
    top = len(stack) - 1

def peek():
    if top == -1:
        print("No elements to show!")
    return stack[top]
def display():
    if len(stack) == 0:
        print("Stack is empty")
    else:
        for item in stack:
            print(item)
    

#demonstrating the initialisation of stack
initstack(5)
push('This is the first element')
push(12)
push(7.0)
push(2004)
push('last element stored')
print("Last element : ",peek())
push('This won\'t be stored in the stack')
pop()
pop()
pop()
pop()
pop()
#This will result into an underflow 
pop()
