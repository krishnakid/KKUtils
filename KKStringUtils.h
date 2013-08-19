/*
 * ======= KKStringUtils (krishnakid string utils) =======
 * is a package to extend the simple string capabilities
 * of native ANSI C
 *
 * @author Rahul Dhodapkar (krishnakid)
 * @version 8.18.2013
 */

/* 
 * method to determine if string str starts with prefix pre.
 *
 * @return 1 if the string starts with pre, 
 * 				 0 otherwise
 */
int strStartsWith(char *str, char *pre);

/*
 * method to determine if string str contains string substr
 *
 * @return 1 if the string contains substr
 * 				 0 otherwise
 */
int strContains(char *str, char *substr);
