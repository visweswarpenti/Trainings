using System;
using System.Collections.Generic;

namespace DataStructures.QueueUsingLinkedListProj
{
    public class Node
    {
        public int info;
        public Node ptr;
    }

    public class QueueUsingLinkedListDemo
    {
        Node front = null, rear = null, temp = null, newn;
        int length = 0;

        public void Insert(int ele)
        {
            newn = new Node();
            newn.info = ele;
            newn.ptr = null;
            if (rear == null)
            {
                front = rear = newn;
            }
            else
            {
                rear.ptr = newn;
                rear = newn;
            }
            length++;
        }

        public int Delete()
        {
            int ele;
            if (front == null)
                throw new Exception("Queue is empty");

            ele = front.info;
            if (front == rear)
            {
                front = rear = null;
            }
            else
            {
                front = front.ptr;
            }
            length--;

            return ele;
        }

        public int[] Display()
        {
            int i;
            var queueElements = new int[length];
            temp = front;
            for (i = 0; i < length; i++)
            {
                queueElements[i] = temp.info;
                temp = temp.ptr;
            }

            return queueElements;
        }
    }
}
