#include <iostream>
#include <stack>

int main(){
	std::stack <char> st;
	
	st.push('H');
	st.push('E');
	st.push('L');
	st.push('L');
	st.push('O');
	
	std::cout << st.top() << std::endl;
	st.pop();
	std::cout << st.top() << std::endl;
	st.pop();
	std::cout << st.top() << std::endl;
	st.pop();
	std::cout << st.top() << std::endl;
	st.pop();
	std::cout << st.top() << std::endl;
	st.pop();
	
	return 0;
}
