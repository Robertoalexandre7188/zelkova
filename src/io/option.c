#include <io/option.h>
#include <string.h>

const char *get_option_name(const char *string, const char **aliases){
    if(string == NULL) return NULL;
    if(string[0] != '-') return NULL;
    if(string[1] == 0) return NULL;

    unsigned long string_length = strnlen(string, 256);
    if(string[2] == '-') return NULL;

    if(string[1] != '-'){
        const char *alias = NULL;
        unsigned char found = 0;

        while(*aliases){
            alias = *aliases;

            if(strncmp(alias, string + 1, 1) != 0) goto end;

            while(*alias != '=') ++alias;

            string = alias + 1;
            found = 1;
            break;

            end: ++aliases;
        }

        if(!found) return NULL;
    } else {
        string += 2;
    };

    return string;
};