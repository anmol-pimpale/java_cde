package linklist;

import java.util.Scanner;

class LinkedList {
    Node head;
    Node tail;

    public void addToStart(int data) {
        Node node = new Node(data);
        if (head == null) {
            head = node;
            tail = node;
        } else {
            node.next = head;
            head = node;
        }
    }

    public void addToEnd(int data) {
        Node node = new Node(data);
        if (head == null) {
            head = node;
            tail = node;
        } else {
            tail.next = node;
            tail = tail.next;
        }
    }

    public void addBefore(int data, int pre) {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        if (head.data == data) {
            Node node = new Node(pre);
            node.next = head;
            head = node;
            return;
        }

        Node curr = head;
        while (curr.next != null) {
            if (curr.next.data == data) {
                Node node = new Node(pre);
                node.next = curr.next;
                curr.next = node;
                return;
            }
            curr = curr.next;
        }

        System.out.println("Element not found in the list");
    }

    public void addAfter(int data, int n) {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        Node node = new Node(data);
        Node curr = head;

        while (curr != null) {
            if (curr.data == n) {
                node.next = curr.next;
                curr.next = node;
                break;
            }
            curr = curr.next;
        }
    }

    public void deleteAtStart() {
        if (head == null) {
            return;
        }
        head = head.next;
        while (tail != null) {
            if (tail.next == null) {
                tail = null;
                break;
            }
            tail = tail.next;
        }
    }

    public void deleteAtEnd() {
        if (head == null || head.next == null) {
            head = null;
            tail = null;
            return;
        }
        Node curr = head;
        Node prev = null;
        while (curr != null) {
            if (curr.next == null) {
                prev.next = null;
                tail = prev;
                break;
            }
            prev = curr;
            curr = curr.next;
        }
    }

    public void deleteAfter(int n) {
        if (head == null) {
            return;
        }

        Node curr = head;
        while (curr != null) {
            if (curr.data == n && curr.next != null) {
                curr.next = curr.next.next;
                break;
            }
            curr = curr.next;
        }
    }

    public void print() {
        Node curr = head;
        while (curr != null) {
            System.out.print(curr.data + "->");
            curr = curr.next;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.println("1. Add to Start");
            System.out.println("2. Add to End");
            System.out.println("3. Add Before");
            System.out.println("4. Add After");
            System.out.println("5. Delete at Start");
            System.out.println("6. Delete at End");
            System.exit(1);
            list.addToStart(4);
        }
    }
   
}
            
            
            
            
            
            
            