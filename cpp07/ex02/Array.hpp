#pragma once

#include <iostream>
#include <exception>


template <typename T> class Array{
	
	private:
		T* array;
		unsigned int arraySize;
	
	public:
		Array() : array(NULL), arraySize(0){};

		Array(unsigned int n) : arraySize(n) {
			this->array = new T[arraySize]; // yer actin
			for(unsigned int i = 0; i < arraySize; i++){ // deger verildi
				this->array[i] = T();
			}
		};

		Array(const Array& copy){
			this->array = new T[copy.arraySize];
			this->arraySize = copy.size();
        	for (unsigned int i = 0; i < copy.size(); i++)
            	array[i] = copy.array[i];
		};

		Array operator=(const Array& copy){
			if (this != &copy)
			{
				if (array)
					delete[] array;
				array = new T[copy.arraySize];
				arraySize = copy.arraySize;
				for (int i = 0; i < copy.len(); i++)
					array[i] = copy.array[i];
			}    
    		return *this;
		}; // deepcopy

		~Array(){
			delete [] this->array;
		};

		T& operator[](unsigned int index) {
			
			if(index >= arraySize)
				throw std::out_of_range("index is out of bounds");
			return (this->array[index]);
			
		}; //overload []

		unsigned int size(void) const{
			return (this->arraySize);
		};

};



