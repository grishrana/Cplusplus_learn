#include <iostream>

template <class T1>
class sort{
	T1 *array;
	int n;

public:
	sort(){
		std::cout << "Enter no of elments: ";
		std::cin >> n;
		array = new T1[n];
	}
	
	sort(int num): n(num){
		array = new T1[n];
	}

	void get_elements(){
		for(int i=0;i<n;i++)
		{
			std::cout << "\nEnter element"<<i+1<<" : ";
			std::cin >> array[i];
		}
	}

	void display(){
		std::cout<<"\nArray: [\t";
		for(int i=0;i<n;i++)
		{
			std::cout << array[i] << "\t";
		}
		std::cout << "]\n";
	
	}

	void sort_ascending(){
		T1 temp;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(array[i]>array[j])
				{
					temp=array[i];
					array[i]=j;
					array[j]=temp;
				}
			}
		}
	}


	void sort_descending(){
		T1 temp;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(array[i]<array[j])
				{
					temp=array[i];
					array[i]=j;
					array[j]=temp;
				}
			}
		}
	}

	~sort(){
		delete[] array;
	}
};

int main(){
	sort <int>s1;
	s1.get_elements();
	s1.display();
	s1.sort_ascending();
	s1.display();
	s1.sort_descending();
	s1.display();
	return 0;
}
