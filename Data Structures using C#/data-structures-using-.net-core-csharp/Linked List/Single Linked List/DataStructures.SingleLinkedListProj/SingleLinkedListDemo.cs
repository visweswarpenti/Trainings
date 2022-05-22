using System;
using System.Collections.Generic;

namespace DataStructures.SingleLinkedListProj
{
    public class Node
    {
        public int info;
        public Node ptr;
    }

    public class SingleLinkedListDemo
    {
        Node head = null, cur = null, newn = null, temp = null;
        int info, length = 0;

        public void Creation(int ele)
        {
            newn = new Node();
            newn.info = ele;
            if (head == null)
            {
                newn.ptr = null;
                head = cur = newn;
            }
            else
            {
                newn.ptr = null;
                cur.ptr = newn;
                cur = newn;
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
            if (index == 0)
            {
                newn.ptr = head;
                head = newn;
            }
            else
            {
                temp = head;
                for (i = 0; i < index - 1; i++)
                    temp = temp.ptr;
                newn.ptr = temp.ptr;
                temp.ptr = newn;
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

            if (index == 0)
            {
                ele = head.info;
                head = head.ptr;
            }
            else
            {
                temp = head;
                for (i = 0; i < index - 1; i++)
                    temp = temp.ptr;
                ele = temp.ptr.info;
                temp.ptr = temp.ptr.ptr;
            }
            length--;

            return ele;
        }

        public int ElementAt(int index)
        {
            int i, ele;
            if (head == null)
                throw new Exception("list is empty");
            if (index < 0 || index >= length)
                throw new Exception("deletion is not possible");
            temp = head;
            for (i = 0; i < index; i++)
                temp = temp.ptr;
            ele = temp.info;
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
                temp = temp.ptr;
            }

            return listValues;
        }
    }
}
