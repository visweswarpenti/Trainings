using System;

namespace DataStructures.StackUsingLinkedListProj
{
    public class Node
    {
        public int info;
        public Node ptr;
    }

    public class StackUsingLinkedListDemo
    {

        Node top = null, cur = null, newn = null, temp = null;
        int info, length = 0;

        public void Push(int ele)
        {
            newn = new Node();
            newn.info = ele;
            if (top == null)
            {
                newn.ptr = null;
                top = newn;
            }
            else
            {
                newn.ptr = top;
                top = newn;
            }
            length++;
        }
        public int Pop()
        {
            int ele;
            if (top == null)
            {
                throw new Exception("underflow");
            }
            ele = top.info;
            top = top.ptr;
            length--;
            return ele;
        }
        public int Peek()
        {
            if (top == null)
            {
                throw new Exception("underflow");
            }
            return top.info;
        }
        public int[] Display()
        {
            int i;
            int[] stackElements = new int[length];
            temp = top;
            for (i = 0; i < length; i++)// while(temp!= null)
            {
                stackElements[i] = temp.info;
                temp = temp.ptr;
            }

            return stackElements;
        }
    }
}
