/* 라이브러리 함수 */
/* 
 * 라이브러리 함수를 쓸 때는 include 지시어의 파일 이름을 < ... > 형태로 씁니다.
 * stdio.h 헤더 파일에는 printf 함수가 선언되어 있습니다. 
 * printf 함수는 문자열을 입력값으로 받아서 화면에 출력합니다. 
 * 문자열을 나타낼 때는 큰 따옴표 안에 문자들을 "문자열"처럼 씁니다.   
 */

/* To Do: include 지시어로 stdio.h 라이브러리 헤더 파일을 포함시켜보세요 */
#include <stdio.h>

int main() {
	/* To Do: 리턴값을 printf 함수의 호출식으로 바꿔보세요, printf를 호출할 때 인자는 "Hello, world!"로 넣어보세요 */
	return printf("Hello, world!");
}
