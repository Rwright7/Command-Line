#include <stdio.h>
#include <stc/cstr.h>
#include <splitfunction.h>

//Create a external function in a next file to split the input into both left and right. 
void splitfunction(const cstr *input, csview *left, csview *right)
{
	//Find the position of the "=" character in the input string
	size_t splitIndex = cstr_find_at(input, 0, "=");


	*left = c_sv(cstr_str(input), splitIndex - 0);
	*right = c_sv(cstr_str(input) + splitIndex + 1 , cstr_size(input) - splitIndex);

}