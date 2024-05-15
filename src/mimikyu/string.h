/**
 * @file            mimikyu/string.h
 * @brief           Header file that declares the basic string macros and functions of the mimikue lib.
 * @details
 * 
 * @author          mimikyu <mimikyu@snorlax.bio>
 * @since           May 15, 2024
 */

/**
 * @def             mimikyu_string_init(string)
 * @brief           Initialize strings simply and inexpensively.
 * 
 * @param[in]       string  | c-style string. If null, an excpetion may be raised. |
 */
#define mimikyu_string_init(string)         (string[0] = 0)