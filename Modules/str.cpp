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

	//�ڴ˴���������ַ������ȵĴ���
	return 0; 
}

char* toLowerCase(char* str)
{ 
	//�ڴ˴�����ת��ΪСд�Ĵ���  
	return str;
}