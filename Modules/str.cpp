#include <assert.h>

char* strCopy(char* destination, const char* source)
{
	assert(destination != NULL && source != NULL);
	char* returnValue = destination;
	while ((*destination++ = *source++) != '\0');
	return returnValue;
}

int strLength(const char* str)
{

	//在此处加入计算字符串长度的代码
	return 0; 
}

char* toLowerCase(char* str)
{ 
	//在此处加入转换为小写的代码  
	return str;
}