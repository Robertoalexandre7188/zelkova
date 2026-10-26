#include <zelkova.h>
#include <io/parsing.h>

#include <string.h>
#include <float.h>
#include <math.h>

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

zelkova_status parse_float(float *output, const char *string){
	if(output == NULL) return NULL_OUTPUT;

	*output = 0;

	if(string == NULL) return OK;

	uint64_t strsize = strnlen(string, 64);
	uint8_t max_exp = 0, is_neg = 0;

	if(*string == '-'){
		string += 1;
		strsize -= 1;
		is_neg = 1;
	};

	while(max_exp < strsize && string[max_exp] != '.'){
		++max_exp;
	};

	double aux = 0.0;
	for(uint8_t i = 0; i < max_exp; ++i){
		if(string[i] - '0' < 0 || string[i] - '0' > 9){
			return IO_PARSE_INVALID_FORMAT;
		};

		aux = 10*aux + (string[i] - '0');

		if(aux - (float)aux > 0.1)
			return is_neg ? IO_PARSE_UNDERFLOW : IO_PARSE_OVERFLOW;
	};

	float factor = 0.1f; 
	for(uint8_t i = max_exp + 1; i < strsize; ++i){
		if(string[i] - '0' < 0 || string[i] - '0' > 9){
			return IO_PARSE_INVALID_FORMAT;
		};

		aux += (string[i] - '0') * factor;
		factor *= 0.1f;

		// Arbitrary value chosen, since both under and overflow would have a very major difference between the two numbers being compared,
		// so what matters is that they are either equal or different
		if(aux - (float)aux > 1)
			return is_neg ? IO_PARSE_UNDERFLOW : IO_PARSE_OVERFLOW;
	};

	*output = (float)(is_neg ? -aux : aux);

	return OK;
}
