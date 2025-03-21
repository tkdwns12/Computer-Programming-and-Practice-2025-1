/* 문자를 입력받아서 문자를 출력하기 */
/* 
 * 주어진 print_3chars, input_char 함수를 활용해서 
 * 문자 세개를 입력받고, 화면에 입력받은 문자들을 출력해보세요.
 */

/* 
 * print_3chars 함수
 *
 * 화면에 char 타입의 문자 세개를 표시합니다.
 * 
 * 매개변수: 
 * a: char 타입. 화면에 표시할 첫번째 문자
 * b: char 타입. 화면에 표시할 두번째 문자
 * c: char 타입. 화면에 표시할 세번째 문자
 *
 * 반환값:
 * 없음
 */
void print_3chars(char a, char b, char c);

/* 
 * input_char 함수
 *
 * char 타입의 문자 하나를 키보드로 입력받습니다.
 * 
 * 이전에 처리하지 않은 키보드 입력이 임시 저장소에 없으면 키보드 입력을 받기 위해 기다립니다.
 * 키보드 입력을 받을 때는 엔터키를 누르면 키보드 입력 내용이 임시 저장소에 저장됩니다.
 * 임시 저장소에서 첫번째 문자를 빼서 반환합니다.
 * 
 * 매개변수: 
 * 없음
 *
 * 반환값:
 * char 타입의 문자
 */
char input_char();


int main() {
	/* To Do: 주어진 함수들을 활용해서 문자 세개를 입력받고, 화면에 출력해보세요 */
	char a = input_char();
	char b = input_char();
	char c = input_char();
	print_3chars(a, b, c);
	
	return 0;
}
