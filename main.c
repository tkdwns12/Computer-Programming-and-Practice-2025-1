/* 큰 정수를 입력받아서 작은 정수를 출력하기 */
/* 
 * 주어진 input_uint, print_uchar, uint_to_uchar 함수를 활용해서 
 * 8자리 이하의 16진수를 입력받고, 화면에는 가장 작은 2자리만 출력해보세요
 */


/* 
 * print_uchar 함수
 *
 * 화면에 unsigned char 타입의 숫자를 16진수로 표기합니다.
 * 
 * 매개변수: 
 * uc: unsigned char 타입. 화면에 표시할 숫자
 *
 * 반환값:
 * 없음
 */
void print_uchar(unsigned char uc);


/* 
 * input_uint 함수
 *
 * unsigned int 타입의 16진수 숫자를 키보드로 입력받습니다.
 * 
 * 화면에 Enter a hexadecimal number (maximum 8 digits/characters): 라고 출력합니다.
 * 키보드 입력을 받기 위해 기다립니다.
 * 엔터키를 누르면 입력받은 내용에서 앞의 8글자만 가지고 16진수 숫자로 변환합니다.
 * 
 * 키보드 입력을 받는 도중 문제가 발생하면 Error: input failure 라고 출력합니다.
 * 숫자 변환에 문제가 발생하면 Error: illegal input 라고 출력합니다.
 * 문제가 발생한 경우 반환되는 값은 0입니다.
 * 
 * 매개변수: 
 * 없음
 *
 * 반환값:
 * unsigned int 타입의 숫자
 */
unsigned int input_uint();


/* uint_to_uchar 함수
 * 
 * unsigned int 타입의 값을 받아서 unsigned char 타입의 값을 반환합니다.
 * 16진수로 나타냈을 때 가장 작은 1바이트만 취하고 나머지는 버리는 형식으로 반환합니다.
 * 예시: 0xabcdef -> 0xef
 *
 * 매개변수:
 * x: unsigned int 타입, 타입을 변환할 숫자
 *
 * 반환값:
 * unsigned char 타입, 타입 변환한 후의 숫자
 */

unsigned char uint_to_uchar (unsigned int x);


int main() {
	/* To Do: 주어진 함수들을 활용해서 16진수 숫자를 입력받고, 화면에 출력해보세요 */
	unsigned int ui = input_uint();
	unsigned char uc = uint_to_uchar(ui);
	print_uchar(uc);
	return 0;
}
