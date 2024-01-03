#include <stdio.h>
#include <stc/cstr.h>
#include <validVarName.h>
#include <ctype.h>

bool validVarName(const char *s){

	// Check if the input string is empty or null
	if(s == NULL || *s == '\0'){
		return false;
	}

	// Check the first character of the identifier
	if(!isalpha(s[0]) && s[0] != '_'){
		return false;
	}
	// All checks passed, it is a valid identifier
	return true;
}
