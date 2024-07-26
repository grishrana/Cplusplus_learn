#include <iostream>

template <class T>
class stack{
	T *arr;
	int top,n=10;

public:
	stack(){
		arr = new T[n];
        top = -1;
	}
	
	bool empty(){
		return (top==-1);
	}

	void push(T x){
		if(top==n-1){
			std::cout << "Stack Overflow" << std::endl;
		}
		else {
			top++;
			arr[top]=x;
		}
	}

	void pop(){
		if(empty()){
			std::cout << "No Element\n";
		}
		else{
			top--;
		}
	}

	T Top(){
		if(empty()){
			std::cout << "No element\n";
			return -1;
		}
		else {
			return arr[top];
		}
	}

};

int main(){
	stack <int>st;
	st.push(1);
	st.push(2);
	st.push(3);
	std::cout << st.Top()<<std::endl;
	st.pop();
	std::cout << st.Top() << std::endl;
	st.pop();
	st.pop();
	st.pop();
	std::cout << st.Top() << std::endl;
	std::cout << st.empty();
	
	return 0;
}
