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

zelkova_status parse_uint16(uint16_t *output, const char *string){
    if(output == NULL) return NULL_OUTPUT;

    *output = 0;

    if(string == NULL) return OK;
    if(*string == '-') return IO_PARSE_UNDERFLOW;

    uint64_t strsize = strnlen(string, 5);
    uint32_t aux = 0;

    for(uint8_t i = 0; i < strsize; ++i){
        aux = 10*aux + (uint32_t)(string[i] - '0');

        if(aux > (uint16_t)aux){
            return IO_PARSE_OVERFLOW;
        }
    }

	*output = (uint16_t)aux;
    return OK;
}

zelkova_status parse_int16(int16_t *output, const char *string){
    if(output == NULL) return NULL_OUTPUT;

    *output = 0;

    if(string == NULL) return OK;

    uint64_t strsize = strnlen(string, 6);
    int32_t aux = 0;

    if(*string == '-'){
        for(uint8_t i = 1; i < strsize; ++i){
            aux = 10*aux - (int32_t)(string[i] - '0');

            if(aux < (int16_t)aux){
                return IO_PARSE_UNDERFLOW;
            }
        }
    } else {
        for(uint8_t i = 0; i < strsize; ++i){
            aux = 10*aux + (int32_t)(string[i] - '0');

            if(aux > (int16_t)aux){
                return IO_PARSE_OVERFLOW;
            }
        }
    }

	*output = (int16_t)aux;

	return OK;
}

zelkova_status parse_uint32(uint32_t *output, const char *string){
    if(output == NULL) return NULL_OUTPUT;

    *output = 0;

    if(string == NULL) return OK;
    if(*string == '-') return IO_PARSE_UNDERFLOW;

    uint64_t strsize = strnlen(string, 10);
    uint64_t aux = 0;

    for(uint8_t i = 0; i < strsize; ++i){
        aux = 10*aux + (uint64_t)(string[i] - '0');

        if(aux > (uint32_t)aux){
            return IO_PARSE_OVERFLOW;
        }
    }

	*output = (uint32_t)aux;

    return OK;
}

zelkova_status parse_int32(int32_t *output, const char *string){
    if(output == NULL) return NULL_OUTPUT;

    *output = 0;

    if(string == NULL) return OK;

    uint64_t strsize = strnlen(string, 11);
    int64_t aux = 0;

    if(*string == '-'){
        for(uint8_t i = 1; i < strsize; ++i){
            aux = 10*aux - (int64_t)(string[i] - '0');

            if(aux < (int32_t)aux){
                return IO_PARSE_UNDERFLOW;
            }
        }
    } else {
        for(uint8_t i = 0; i < strsize; ++i){
            aux = 10*aux + (int64_t)(string[i] - '0');

            if(aux > (int32_t)aux){
                return IO_PARSE_OVERFLOW;
            }
        }
    }

	*output = (int32_t)aux;

	return OK;
}

zelkova_status parse_uint64(uint64_t *output, const char *string){
    if(output == NULL) return NULL_OUTPUT;

    *output = 0;

    if(string == NULL) return OK;
    if(*string == '-') return IO_PARSE_UNDERFLOW;

    uint64_t strsize = strnlen(string, 20);
    uint64_t aux = 0, cmp = 0;

    for(uint8_t i = 0; i < strsize; ++i){
		cmp = aux;
        aux = 10*aux + (uint64_t)(string[i] - '0');

		if(cmp > aux){
			return IO_PARSE_OVERFLOW;
		}
    }

	*output = aux;

    return OK;
}

zelkova_status parse_int64(int64_t *output, const char *string){
    if(output == NULL) return NULL_OUTPUT;

    *output = 0;

    if(string == NULL) return OK;

    uint64_t strsize = strnlen(string, 21);
    int64_t aux = 0, cmp = 0;

    if(*string == '-'){
        for(uint8_t i = 1; i < strsize; ++i){
			cmp = aux;
            aux = 10*aux - (int64_t)(string[i] - '0');

            if(cmp < aux){
                return IO_PARSE_UNDERFLOW;
            }
        }
    } else {
        for(uint8_t i = 0; i < strsize; ++i){
			cmp = aux;
            aux = 10*aux + (int64_t)(string[i] - '0');

            if(cmp > aux){
                return IO_PARSE_OVERFLOW;
            }
        }
    }

	*output = aux;

	return OK;
}
