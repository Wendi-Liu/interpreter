#ifndef STACKNODE_INCLUDED
#define STACKNODE_INCLUDED

template<typename T>
class StackNode
{
public:
	StackNode(const T item):m_item(item){}

	void Link(StackNode<T>* next) //why can't I use "const" for the input parameter
	{	m_next = next;	}

	StackNode<T>* NextNode() const
	{	return m_next;	}

	T GetValue() const
	{	return m_item;	}
private:
	T m_item;
	StackNode<T>* m_next;

};


#endif