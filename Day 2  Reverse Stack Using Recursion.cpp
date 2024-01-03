void insertAtBottom(stack<int> &s, int element){
    //base case
    if(s.empty()){
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();

    //reverse call
    insertAtBottom(s,element);
    s.push(num);
}

void reverseStack(stack<int> &stack) {
    // Base Case
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();

    //Recursive Calll
    
    reverseStack(stack);


    insertAtBottom(stack,num);

}
