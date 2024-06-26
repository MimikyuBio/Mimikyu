/**
 * @file            mimikyu.h
 * @brief           따라큐의 라이브러리에서 기본적으로 사용할 매크로와 함수 등을 선언한 헤더 파일
 * @details         버전 매크로 정의 (mimikyu_version_major, mimikyu_version_minor, mimikyu_version_revision)
 *                  성공과 실패에 대한 매크로 정의 (mimikyu_success, mimikyu_fail)
 * 
 * @author          mimikyu <mimikyu@snorlax.bio>
 * @since           May 15, 2024
 */

#ifndef   __MIMIKYU_H__
#define   __MIMIKYU_H__

#define mimikyu_version_major           0
#define mimikyu_version_minor           0
#define mimikyu_version_revision        1


#define true                            1
#define false                           0
#define success                         0
#define fail                            -1
#define nil                             ((void *) 0)

extern const char * mimikyu_version_str(void);

#define mimikyu_string_init(string)         (string[0] = 0)

#endif // __MIMIKYU_H__