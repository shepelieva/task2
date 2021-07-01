#include <iostream>
#include <stdlib.h>
#include <exception>
#include "recursion.h"


int main(int argc, char **argv)
{
	try
	{
		if(argc < 2){
			std::cout<<"no given parametr\n"<<std::endl;
			return 1;
		}
		int n = atoi(argv[1]);
		if(n < 1){
			std::cout<<"incorrect token count\n"<<std::endl;
		}
		for(int i = 0;i < n; ++i)
			std::cout<<i<<") "
				<<shepelieva::fibonacci(i)<<std::endl;
	}
	catch(const std::exception &ex)
	{
		std::cout<<ex.what()<<std::endl;
	}
	catch(...)
	{
		std::cout<<"Unhandled exception"<<std::endl;
	}
	return 0;
}
