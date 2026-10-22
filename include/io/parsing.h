#pragma once

#include <stdint.h>
#include <zelkova.h>

/**
 * @param output <placeholder>
 * @param string <placeholder>
 * @return
 * The status code of the parsing operation. Any value other than `ZELKOVA_OK` imples an error.
 *
 * @brief
 * <placeholder>
 *
 * @detail
 * <placeholder>
 */
zelkova_status parse_uint8(uint8_t *output, const char *string);

/**
 * @param output <placeholder>
 * @param string <placeholder>
 * @return
 * The status code of the parsing operation. Any value other than `ZELKOVA_OK` imples an error.
 *
 * @brief
 * <placeholder>
 *
 * @detail
 * <placeholder>
 */
zelkova_status parse_int8(int8_t *output, const char *string);

/**
 * @param output <placeholder>
 * @param string <placeholder>
 * @return
 * The status code of the parsing operation. Any value other than `ZELKOVA_OK` imples an error.
 *
 * @brief
 * <placeholder>
 *
 * @detail
 * <placeholder>
 */
zelkova_status parse_uint16(uint16_t *output, const char *string);

/**
 * @param output <placeholder>
 * @param string <placeholder>
 * @return
 * The status code of the parsing operation. Any value other than `ZELKOVA_OK` imples an error.
 *
 * @brief
 * <placeholder>
 *
 * @detail
 * <placeholder>
 */
zelkova_status parse_int16(int16_t *output, const char *string);

/**
 * @param output <placeholder>
 * @param string <placeholder>
 * @return
 * The status code of the parsing operation. Any value other than `ZELKOVA_OK` imples an error.
 *
 * @brief
 * <placeholder>
 *
 * @detail
 * <placeholder>
 */
zelkova_status parse_uint32(uint32_t *output, const char *string);

/**
 * @param output <placeholder>
 * @param string <placeholder>
 * @return
 * The status code of the parsing operation. Any value other than `ZELKOVA_OK` imples an error.
 *
 * @brief
 * <placeholder>
 *
 * @detail
 * <placeholder>
 */
zelkova_status parse_int32(int32_t *output, const char *string);

/**
 * @param output <placeholder>
 * @param string <placeholder>
 * @return
 * The status code of the parsing operation. Any value other than `ZELKOVA_OK` imples an error.
 *
 * @brief
 * <placeholder>
 *
 * @detail
 * <placeholder>
 */
zelkova_status parse_uint64(uint64_t *output, const char *string);

/**
 * @param output <placeholder>
 * @param string <placeholder>
 * @return
 * The status code of the parsing operation. Any value other than `ZELKOVA_OK` imples an error.
 *
 * @brief
 * <placeholder>
 *
 * @detail
 * <placeholder>
 */
zelkova_status parse_int64(int64_t *output, const char *string);

/**
 * @param output <placeholder>
 * @param string <placeholder>
 * @return
 * The status code of the parsing operation. Any value other than `ZELKOVA_OK` imples an error.
 *
 * @brief
 * <placeholder>
 *
 * @detail
 * <placeholder>
 */
zelkova_status parse_float(float *output, const char *string);