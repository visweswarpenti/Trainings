using System;

namespace DataStructures.StackProj
{
    public class StackDemo
    {
        private int[] array;
        private int max, top = -1;
        public StackDemo(int max)
        {
            this.max = max;
            array = new int[max];
        }
        public void Push(int ele)
        {
            if (top == max - 1)
            {
                throw new Exception("overflow");
            }
            top++;
            array[top] = ele;
        }
        public int Pop()
        {
            int ele;
            if (top == -1)
            {
                throw new Exception("underflow");
            }
            ele = array[top];
            top--;
            return ele;
        }
        public int Peek()
        {
            if (top == -1)
            {
                throw new Exception("underflow");
            }
            return array[top];
        }
        public int[] Display()
        {
            int i, j;
            int[] stackElements = new int[top + 1];
            for (i = top, j = 0; i >= 0; i--, j++)
                stackElements[j] = array[i];
            return stackElements;
        }
    }
}
