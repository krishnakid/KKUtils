/*
 * Implementation file for KKStringUtils
 *
 * @author Rahul Dhodapkar (krishnakid)
 * @version 8.18.2013
 */

#include <string.h>
#include <stdlib.h>
#include "KKStringUtils.h"

/* 
 * method to determine if string str starts with prefix pre.
 *
 * @return 1 if the string starts with pre, 
 * 				 0 otherwise
 */
int strStartsWith(char *str, char *pre) {
	size_t stringLen = strlen(str);
	size_t prefixLen = strlen(pre);
	return (stringLen < prefixLen) ? -1 : strncmp(str, pre, prefixLen);
}

/*
 * method to determine if string str contains string substr
 *
 * @return 1 if the string contains substr
 * 				 0 otherwise
 */
int strContains(char *str, char *substr) {
	size_t stringLen = strlen(str);
	size_t subLen = strlen(substr);
	int diff = stringLen - subLen;
	int i;
	for(i = 0; i < diff; i++) {
		if(strncmp(&(str[i]), substr, subLen) == 0)
			return 0;
	}
	return -1;											// there was no appropriate match.
}
