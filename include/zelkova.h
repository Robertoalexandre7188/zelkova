#pragma once

/**
 * @brief
 * <placeholder>
 */
typedef enum zelkova_status {
	/**
	 * @brief
	 * The value that represents, in general, a successful operation.
	 */
	OK = 0,

	/**
	 * @brief
	 * When an operation that requires dynamic memory fails to allocate it.
	 */
	OUT_OF_MEMORY = 1,

	/**
	 * @brief
	 * When an operation that requires an output pointer receives `NULL`.
	 */
	NULL_OUTPUT = 2,

	/**
	 * @brief
	 * When an operation that requires a non-optional pointer receives `NULL` instead of a valid pointer.
	 */
	NULL_POINTER = 3,

	/**
	 * @brief
	 * when an i/o parsing operation tries to parse an integer/float above the expected numeric limit.
	 */
	IO_PARSE_OVERFLOW = 100,

	/**
	 * @brief
	 * when an i/o parsing operation tries to parse an integer/float below the expected numeric limit.
	 */
	IO_PARSE_UNDERFLOW = 101,
} zelkova_status;
