#include <zelkova.h>
#include <io/parsing.h>

#include <string.h>

zelkova_status parse_uint8(uint8_t *output, const char *string){
    if(output == NULL) return NULL_OUTPUT;

    *output = 0;

    if(string == NULL) return OK;
    if(*string == '-') return IO_PARSE_UNDERFLOW;

    uint64_t strsize = strnlen(string, 3);
    uint16_t aux = 0;

    for(uint8_t i = 0; i < strsize; ++i){
        aux = 10*aux + (uint16_t)(string[i] - '0');

        if(aux > (uint8_t)aux){
            return IO_PARSE_OVERFLOW;
        }
    }

	*output = (uint8_t)aux;
    return OK;
}

zelkova_status parse_int8(int8_t *output, const char *string){
    if(output == NULL) return NULL_OUTPUT;

    *output = 0;

    if(string == NULL) return OK;

    uint64_t strsize = strnlen(string, 4);
    int16_t aux = 0;

    if(*string == '-'){
        for(uint8_t i = 1; i < strsize; ++i){
            aux = 10*aux - (int16_t)(string[i] - '0');

            if(aux < (int8_t)aux){
                return IO_PARSE_UNDERFLOW;
            }
        }
    } else {
        for(uint8_t i = 0; i < strsize; ++i){
            aux = 10*aux + (int16_t)(string[i] - '0');

            if(aux > (int8_t)aux){
                return IO_PARSE_OVERFLOW;
            }
        }
    }

	*output = (int8_t)aux;

    return OK;
}
