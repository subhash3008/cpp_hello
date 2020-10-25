//============================================================================
// Name        : hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
#include <cassert>


class Stack {
private:
	using container_type = std::array<int, 10>;
	using size_type = container_type::size_type;
private:
	container_type m_array;
	size_type m_next{ 0 };
public:
	void reset() {
		m_next = 0;
	}
	bool push(int val) {
		if (m_next == m_array.size()) {
			return false;
		}
		m_array[m_next++] = val;
		return true;
	}
	int pop() {
		assert(m_next > 0 && "Cannot pop from empty stack");
		return m_array[--m_next];
	}
	void print() {
		std::cout << "( ";
		for (size_type i {0}; i < m_next; i++) {
			std::cout << m_array[i] << " ";
		}
		std::cout << ")\n";
	}

};

int main() {
	Stack stack;
	stack.push(1);
	stack.print();
	stack.push(2);
	stack.print();
//	stack.reset();
	stack.print();
	stack.pop();
	stack.print();
	stack.push(100);
	stack.print();


	return 0;
}
