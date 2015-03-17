#ifndef STACK_INCLUDED
#define STACK_INCLUDED

#include "StackNode.h"

template <typename T>
class StackNode;

template <typename T>
class Stack
{
public:
	Stack()
	{
		m_top = nullptr;
	}

	void push(T x)
	{
		StackNode<T> * ptr = new StackNode<T>(x);
		ptr->Link(m_top);
		m_top = ptr;
		return;
	}

	void pop()
	{
		if(empty()) return;
		StackNode<T> * ptr = m_top->NextNode();
		delete m_top;
		m_top = ptr;
		return;
	}

	T top() const
	{
		if (empty()) return '\0';
		return m_top->GetValue();
	}

	bool empty() const
	{
		if (m_top == nullptr) 
			return true;
		return false;
	}

	~Stack()
	{
		while (!empty())
		{
			pop();
		}
	}

private:
	StackNode<T> * m_top;
};

#endif

