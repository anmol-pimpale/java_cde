package stack;

class Stack {

	private int arr[];

	private int top;

	private int capacity;

	Stack(int size) {
		arr = new int[5];
		capacity = size;
		top = -1;
	}

	public void push(int x) {
		if (isFull()) {
			System.out.println("Stack is full.");
			System.exit(1);
		}

		System.out.println("Inserting " + x);
		
		// top ++;
		// arr[top]=x;
		
		arr[++top] = x;
	}

	public int pop() {

		if (isEmpty()) {
			System.out.println("Stack is empty.");
			System.exit(1);
		}

		return arr[top--];
	}

	public int getSize() {
		return top + 1;
	}

	public Boolean isEmpty() {
		return top == -1;
	}

	public Boolean isFull() {
		return (top == capacity - 1);
	}

	public void printStack() {
		for (int i = 0; i <= top; i++) {
			System.out.print(arr[i] + ", ");
			System.out.println();
		}
	}

}