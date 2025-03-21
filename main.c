/* 화면에 문자 출력하기 */
/* 
 * 주어진 print_char 함수를 활용해서 화면에 linux라고 표시해보세요
 */

/* 
 * print_char 함수
 *
 * 문자를 매개변수로 입력받아서 화면에 표시할 내용에 그 문자를 추가합니다.
 * 
 * 매개변수: 
 * c: char 타입. 화면에 표시할 문자
 *
 * 반환값:
 * 없음
 */
void print_char(char c);

int main() {
	/* To Do: print_char 함수를 여러번 호출해서 화면에 linux라고 표시해보세요 */
	print_char('l');
	print_char('i');
	print_char('n');
	print_char('u');
	print_char('x');
	return 0;
}
