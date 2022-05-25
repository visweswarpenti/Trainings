using System;
using System.Collections.Generic;

namespace DataStructures.DoubleEndedQueueProj
{
    public class DoubleEndedQueueDemo
    {
        private int[] _array;
        private int _max, _front, _rear;
        public DoubleEndedQueueDemo(int max)
        {
            _front = -1;
            _rear = -1;
            _max = max;
            _array = new int[max];
        }

        public void InsertFront(int ele)
        {
            int i;
            if (_front == 0 && _rear == _max - 1)
                throw new Exception("Queue is full");

            if (_front == -1)
            {
                _front = _rear = 0;
                _array[_front] = ele;
                return;
            }

            if (_front == 0)
            {
                for (i = _rear; i >= _front; i--)
                    _array[i + 1] = _array[i];
                _array[_front] = ele;
                _rear++;
                return;
            }
            
            _front--;
            _array[_front] = ele;
        }

        public void InsertRear(int ele)
        {
            int i;
            if (_front == 0 && _rear == _max - 1)
                throw new Exception("Queue is full");

            if (_front == -1)
            {
                _front = _rear = 0;
                _array[_rear] = ele;
                return;
            }

            if (_rear == _max - 1)
            {
                for (i = _front; i <= _rear; i++)
                    _array[i - 1] = _array[i];
                _array[_rear] = ele;
                _front--;
                return;
            }

            _rear++;
            _array[_rear] = ele;
        }

        public int DeleteFront()
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

        public int DeleteRear()
        {
            int ele;
            if (_front == -1)
                throw new Exception("Queue is empty");

            ele = _array[_rear];
            if (_front == _rear)
                _front = _rear = -1;
            else
                _rear--;
            return ele;
        }

        public List<int> Display()
        {
            int i;
            var queueElements = new List<int>();
            for (i = _front; i <= _rear; i++)
                queueElements.Add(_array[i]);

            return queueElements;
        }
    }
}
