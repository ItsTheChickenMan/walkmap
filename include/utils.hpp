// general purpose utility methods

#ifndef WALKMAP_UTILS_H
#define WALKMAP_UTILS_H

#include <cstdlib>
#include <cstdint>
#include <cfloat>

#include <string>

// allocate memory for a type and return the address for the allocated memory
template <typename T>
T* allocateMemoryForType(){
	return (T*)malloc( sizeof(T) );
}

// signum implementation
// https://stackoverflow.com/a/4609795
template <typename T> int signum(T val) {
	return (T(0) < val) - (val < T(0));
}

// read the contents of a file and return a char buffer of the contents (free the buffer when done!)
char* read_entire_file(const char* file);

bool nearly_equal(float a, float b);
bool nearly_less_or_eq(float a, float b);
bool nearly_greater_or_eq(float a, float b);
bool isStringNumber(std::string& str);

#endif