#include <iostream>
#include <deque>

template<class T>
class Stack {
	std::deque<T> data;
public:
	Stack() {};
	
	void push(const T& value) {
		data.push_back(value);
	}

	void pop() {
		if (!empty()) {
			data.pop_back();
		}
		else {
			throw std::out_of_range("Stack is empty");
		}
	}

	T top() const{
		if (!empty()) {
			return data.back();
		}
		else {
			throw std::out_of_range("Stack is empty");
		}
	}

	bool empty() const{
		return data.empty();
	}

	size_t size() const{
		return data.size();
	}

	void clear() {
		data.clear();
	}
};