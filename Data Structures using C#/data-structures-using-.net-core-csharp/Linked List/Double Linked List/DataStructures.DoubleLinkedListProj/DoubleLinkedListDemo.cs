using System;
using System.Collections.Generic;

namespace DataStructures.DoubleLinkedListProj
{
    public class Node
    {
        public Node lptr;
        public int info;
        public Node rptr;
    }

    public class DoubleLinkedListDemo
    {
        Node head = null, tail = null, cur = null, newn = null, temp = null;
        int info, length = 0;

        public void Creation(int ele)
        {
            newn = new Node();
            newn.info = ele;
            if (head == null)
            {
                newn.lptr = null;
                newn.rptr = null;
                head = tail = newn;
            }
            else
            {
                newn.rptr = null;
                newn.lptr = tail;
                tail.rptr = newn;
                tail = newn;
            }
            length++;
        }

        public void Insertion(int ele, int index)
        {
            int i;
            if (index < 0 || index > length)
                throw new Exception("insertion is not possible");

            newn = new Node();
            newn.info = ele;
            if (head == null)
            {
                newn.lptr = newn.rptr = null;
                head = tail = newn;
            }
            else if (index == 0)
            {
                newn.lptr = null;
                newn.rptr = head;
                head.lptr = newn;
                head = newn;
            }
            else if (index == length)
            {
                newn.rptr = null;
                newn.lptr = tail;
                tail.rptr = newn;
                tail = newn;
            }
            else
            {
                temp = head;
                for (i = 0; i < index; i++)
                {
                    temp = temp.rptr;
                }
                newn.lptr = temp.lptr;
                newn.rptr = temp;
                newn.lptr.rptr = newn;
                newn.rptr.lptr = newn;
            }
            length++;
        }

        public int Deletion(int index)
        {
            int i, ele;

            if (head == null)
                throw new Exception("list is empty");

            if (index < 0 || index >= length)
                throw new Exception("deletion is not possible");

            if (head == tail)
            {
                ele = head.info;
                head = tail = null;
            }
            else if (index == 0)
            {
                ele = head.info;
                head = head.rptr;
                head.lptr = null;
            }
            else if (index == length - 1)
            {
                ele = tail.info;
                tail = tail.lptr;
                tail.rptr = null;
            }
            else
            {
                temp = head;
                for (i = 0; i < index; i++)
                {
                    temp = temp.rptr;
                }
                ele = temp.info;
                temp.rptr.lptr = temp.lptr;
                temp.lptr.rptr = temp.rptr;
            }
            length--;

            return ele;
        }

        public int[] Display()
        {
            int i;
            int[] listValues = new int[length];
            temp = head;
            for (i = 0; i < length; i++)
            {
                listValues[i] = temp.info;
                temp = temp.rptr;
            }

            return listValues;
        }

        public int[] DisplayReverseOrder()
        {
            int i;
            int[] listValues = new int[length];
            temp = tail;
            for (i = 0; i < length; i++)
            {
                listValues[i] = temp.info;
                temp = temp.lptr;
            }

            return listValues;
        }
    }
}
