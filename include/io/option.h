#pragma once

#include <zelkova.h>
#include <stdint.h>

typedef struct option {
	char *name;
	char **value;
	unsigned char quantity;
} option;

/**
 * @param output The address to store the parsed option
 * @param args The argument list to parse
 * @param min_args The minimum number of arguments the option expects
 * @param max_args The maximum number of arguments the option expects
 * @param aliases A list of null-terminated strings formatted as "<letter>=<option-name>", terminatted by `NULL`
 *
 * @returns
 * Whether any errors ocurred during the parsing.
 *
 * @brief
 * Parses an option string to a `struct option`. Accepts both long options and short options (nominated as aliases)
 *
 * @details
 * An option string is any string preffixed with '--'.
 *
 * `aliases` is a null-terminated list which should contain null-terminated strings on the format "<letter>=<option>".
 * `<letter>` represents an ASCI character that will be interpreted as `<option>`, in case it is preffixed with '-', while parsing.
 *
 * The option may be suffixed with '=<argument-1>[,<argument-2>]', in which case `<argument-1>`, `<argument-2>`, etc. are taken as the option's
 * value(s). Otherwise, the string pointed by `string` is stored, with `string` being incremented until its value points to another option or
 * alias.
 */
zelkova_status parse_option(option *output, char **argv, uint8_t min_args, uint8_t max_args, const char **aliases);
