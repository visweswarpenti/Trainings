using System;
using System.Collections.Generic;

namespace DataStructures.QueueProj
{
    public class QueueDemo
    {
        private int[] _array;
        private int _max, _front, _rear;
        public QueueDemo(int max)
        {
            _front = -1;
            _rear = -1;
            _max = max;
            _array = new int[max];
        }

        public void Insert(int ele)
        {
            if (_rear == _max - 1)
                throw new Exception("Queue is full");

            _rear++;
            _array[_rear] = ele;
            
            if (_front == -1)
            {
                _front = 0;
            }
        }
        
        public int Delete()
        {
            int ele;
            if (_front == -1)
                throw new Exception("Queue is empty");

            ele = _array[_front];

            if (_front == _rear)
                _front = _rear = -1;
            else
                _front++;

            return ele;
        }

        public List<int> Display()
        {
            int i;
            var queueElements =new List<int>();
            for (i = _front; i <= _rear; i++)
                queueElements.Add(_array[i]);

            return queueElements;
        }
    }
}
