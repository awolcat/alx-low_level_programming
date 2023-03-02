#include <stdlib.h>
#include <string.h>
/**
 * leet - function
 * @str: string
 * Description: function to replace 
 * Return: str
 */
char *leet(char *str) {
    const char *leet_map[128] = {0}; // initialize to NULL
    leet_map['a'] = leet_map['A'] = "4";
    leet_map['e'] = leet_map['E'] = "3";
    leet_map['o'] = leet_map['O'] = "0";
    leet_map['t'] = leet_map['T'] = "7";
    leet_map['l'] = leet_map['L'] = "1";

    size_t len = strlen(str);
    for (size_t i = 0; i < len; i++) {
        if (leet_map[str[i]]) {
            str[i] = *leet_map[str[i]];
        }
    }

	return str;
}
