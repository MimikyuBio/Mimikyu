/**
 * @file            mimikyu.c
 * @brief           mimikyu.h 파일에 선언된 함수 등을 구현한 소스 파일
 * @details
 * 
 * @author          mimikyu <mimikyu@snorlax.bio>
 * @since           May 15, 2024
 */

#include "mimikyu.h"

static const char * __mimikyu_version_str = "0.0.1";

/**
 * @fn              const char * mimikyu_version_str(void)
 * @brief           버전 정보 문자열을 리턴하는 함수
 * @details
 * 
 * @return          따라큐 라이브러리의 버전 정보
 * 
 * @todo            차후에 매크로로 변경하도록 한다.
 */
extern const char * mimikyu_version_str(void) {
    return __mimikyu_version_str;
}