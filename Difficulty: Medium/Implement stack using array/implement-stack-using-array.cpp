class myStack {
    int*stack;
    int top;
    int size;
  public:
    myStack(int n) {
        // Define Data Structures
        size=n;
        stack=new int[n];
        top=-1;
    }

    bool isEmpty() {
        // check if the stack is empty
        if(top==-1)return true;
        return false;
    }

    bool isFull() {
        // check if the stack is full
        if(top==size-1)return true;
        return false;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(isFull())return;
        else{
            top++;
            stack[top]=x;
        }
    }

    int pop() {
        // removes an element from the top of the stack
        if(isEmpty())return -1;
        else{
            top--;
        }                                           
    }

    int peek() {
        // Returns the top element of the stack
        if(top==-1)return -1;
        return stack[top];
    }
};














/*class myStack {
public:
    int *stack;
    int top;
    int max;

    myStack(int n) {
        max = n;
        stack = new int[max];
        top = -1;
    }
    bool isEmpty() {
        //if (top < 0) return true;
        //return false;
        return top==-1;
    }
    bool isFull() {
        //if (top >= max - 1) return true;
        if (top == max - 1) return true;
        return false;
    }
    void push(int x) {
        if (isFull()) {
            return;
        }
        top++;
        stack[top] = x;
    }
    void pop() {
        if (isEmpty()) {
            return;
        }
        top--;
    }
    int peek() {
        if (isEmpty()) {
            return -1;
        }
    return stack[top];
    }
};*/