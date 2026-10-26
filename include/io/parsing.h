#pragma once

#include <stdint.h>
#include <zelkova.h>

/**
 * @param output The address to store the parsed integer
 * @param string The null-terminated string to parse
 * @return
 * Whether any errors ocorrured during the parsing.
 *
 * @brief
 * Parses an integer representation string to an unsigned 8-bit integer. `string` may be `NULL`, in which
 * case it produces `0`.
 * May return, other than `OK`:
 * - `IO_PARSE_OVERFLOW`
 * - `IO_PARSE_UNDERFLOW`
 * - `NULL_OUTPUT`
 */
zelkova_status parse_uint8(uint8_t *output, const char *string);

/**
 * @param output The address to store the parsed integer
 * @param string The null-terminated string to parse
 * @return
 * Whether any errors ocorrured during the parsing.
 *
 * @brief
 * Parses an integer representation string to a signed 8-bit integer. `string` may be `NULL`, in which
 * case it produces `0`.
 * May return, other than `OK`:
 * - `IO_PARSE_OVERFLOW`
 * - `IO_PARSE_UNDERFLOW`
 * - `NULL_OUTPUT`
 */
zelkova_status parse_int8(int8_t *output, const char *string);

/**
 * @param output The address to store the parsed integer
 * @param string The null-terminated string to parse
 * @return
 * Whether any errors ocorrured during the parsing.
 *
 * @brief
 * Parses an integer representation string to an unsigned 16-bit integer. `string` may be `NULL`, in which
 * case it produces `0`.
 * May return, other than `OK`:
 * - `IO_PARSE_OVERFLOW`
 * - `IO_PARSE_UNDERFLOW`
 * - `NULL_OUTPUT`
 */
zelkova_status parse_uint16(uint16_t *output, const char *string);

/**
 * @param output The address to store the parsed integer
 * @param string The null-terminated string to parse
 * @return
 * Whether any errors ocorrured during the parsing.
 *
 * @brief
 * Parses an integer representation string to a signed 16-bit integer. `string` may be `NULL`, in which
 * case it produces `0`.
 * May return, other than `OK`:
 * - `IO_PARSE_OVERFLOW`
 * - `IO_PARSE_UNDERFLOW`
 * - `NULL_OUTPUT`
 */
zelkova_status parse_int16(int16_t *output, const char *string);

/**
 * @param output The address to store the parsed integer
 * @param string The null-terminated string to parse
 * @return
 * Whether any errors ocorrured during the parsing.
 *
 * @brief
 * Parses an integer representation string to an unsigned 32-bit integer. `string` may be `NULL`, in which
 * case it produces `0`.
 * May return, other than `OK`:
 * - `IO_PARSE_OVERFLOW`
 * - `IO_PARSE_UNDERFLOW`
 * - `NULL_OUTPUT`
 */
zelkova_status parse_uint32(uint32_t *output, const char *string);

/**
 * @param output The address to store the parsed integer
 * @param string The null-terminated string to parse
 * @return
 * Whether any errors ocorrured during the parsing.
 *
 * @brief
 * Parses an integer representation string to a signed 32-bit integer. `string` may be `NULL`, in which
 * case it produces `0`.
 * May return, other than `OK`:
 * - `IO_PARSE_OVERFLOW`
 * - `IO_PARSE_UNDERFLOW`
 * - `NULL_OUTPUT`
 */
zelkova_status parse_int32(int32_t *output, const char *string);

/**
 * @param output The address to store the parsed integer
 * @param string The null-terminated string to parse
 * @return
 * Whether any errors ocorrured during the parsing.
 *
 * @brief
 * Parses an integer representation string to an unsigned 64-bit integer. `string` may be `NULL`, in which
 * case it produces `0`.
 * May return, other than `OK`:
 * - `IO_PARSE_OVERFLOW`
 * - `IO_PARSE_UNDERFLOW`
 * - `NULL_OUTPUT`
 */
zelkova_status parse_uint64(uint64_t *output, const char *string);

/**
 * @param output The address to store the parsed integer
 * @param string The null-terminated string to parse
 * @return
 * Whether any errors ocorrured during the parsing.
 *
 * @brief
 * Parses an integer representation string to a signed 64-bit integer. `string` may be `NULL`, in which
 * case it produces `0`.
 * May return, other than `OK`:
 * - `IO_PARSE_OVERFLOW`
 * - `IO_PARSE_UNDERFLOW`
 * - `NULL_OUTPUT`
 */
zelkova_status parse_int64(int64_t *output, const char *string);

/**
 * @param output The address to store the parsed single-precision floating point number
 * @param string The null-terminated string to parse
 * @return
 * Whether any errors ocorrured during the parsing.
 *
 * @brief
 * Parses a decimal representation string to a single-precision floating point number. `string` may be `NULL`, in which
 * case it produces `0`.
 * May return, other than `OK`:
 * - `IO_PARSE_OVERFLOW`
 * - `IO_PARSE_UNDERFLOW`
 * - `IO_PARSE_INVALID_FORMAT`
 * - `NULL_OUTPUT`
 */
zelkova_status parse_float(float *output, const char *string);
