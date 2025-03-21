/* 문자를 입력받고 포맷팅해서 출력하기 */
/* 
 * 주어진 add_to_format, print_formatted, input_char 함수를 활용해서 
 * 포맷을 만들고, 포맷에 따라서 화면에 입력받은 문자 하나를 문자 포맷과 숫자 포맷으로 출력해보세요.
 */

/* 
 * add_to_format(char c) 함수
 *
 * 입력받은 문자를 포맷에 추가합니다.
 * 현재 포맷에 문자가 10개였으면, 에러 메시지 출력 후 포맷을 초기화합니다.
 * 
 * 매개변수: 
 * c: char 타입. 포맷에 추가할 문자
 *
 * 반환값:
 * 없음
 */
void add_to_format(char c);

/* 
 * print_formatted(char a, char b) 함수
 *
 * 정해진 포맷에 따라 인자 두개를 화면에 출력합니다.
 * %c 포맷은 출력할 때 문자로 바뀝니다.
 * %d 포맷은 출력할 때 숫자로 바뀝니다.
 * 
 * 매개변수: 
 * a: char 타입. 출력할 첫번째 문자
 * b: char 타입. 출력할 두번째 문자
 * 반환값:
 * 없음
 */
void print_formatted(char a, char b);

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
	/* To Do: 주어진 함수들을 활용해서 문자 하나를 입력받고, 문자 형식과 숫자 형식으로 출력해보세요 */
	char c = input_char();
	add_to_format('%');
	add_to_format('c');
	add_to_format('x');
	add_to_format('x');
	add_to_format('%');
	add_to_format('d');
	print_formatted(c, c);
	return 0;
}
