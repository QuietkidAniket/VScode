class stack{
    private int stk[];
    private int top = -1;

    public stack(int length){
        stk = new int[length];
    }

    public void pop(){
        if(top == -1){
            System.out.println("Underflow Error! \t Cannot remove items from empty stack");
            return;
        }else{
            stk[top--] = 0;
        }
    }

    public void push(int item){
        if(top == stk.length - 1){    
            System.out.println("Overflow Error! \t");

        }else{
            stk[++top] = item;
        }
    }

    public int peek(){
        return stk[top];
    }

    public static void main(String args[]){
        stack obj = new stack(5);
        obj.push(10);
        obj.push(11);
        obj.push(12);
        obj.push(13);
        obj.push(14);
        obj.push(15);
        System.out.println(obj.peek());
        obj.pop();
        obj.pop();
        obj.pop();
        obj.pop();
        obj.pop();
        obj.pop();
    }
}