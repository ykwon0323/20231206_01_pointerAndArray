/**
 * 배열의 포인터 연산
 * 
 * 배열의 이름을 포인터 처럼 사용
 * 배열의 이름으로 포인터 연산을 수행하여 각각의 배열 요소에 접근
 * 
*/

# include <stdio.h>

int main(void){
    int arr[3] = {10, 20, 30}; // 배열선언
    printf(" 배열의 이름을 이용하여 배열 요소에 접근 :  %d %d %d \n", arr[0], arr[1], arr[2]);
    printf("배열의 이름으로 포인터 연산을 해 배열 요소에 접근 : %d %d %d \n", *(arr+0), *(arr+1), *(arr+2));
}
/**
 *  공식
 * arr이 배열의 이름이거나 포인터이고 n이 정수일 때
 * 
 * arr[n] == *(arr+n)
 * 
 * (1차 배열뿐만 아니라 다차원 배열에서도 언제나 성립)
 * 
*/

/**
 * 주의
 * 
 * 배열에 관걔된 연산을 할 때는 언제나 배열의 크기를 넘어서는 접근을 하지 않도록 주의해야 함
 * 포인터 연산을 이용하여 계산하다가 배열의 크기를 넘어서는 접근을 하는 경우, C 컴파일러는 어떠한 오류도 발생 시키지 않음
 * 다만 잘못된 결과만을 반환하므로 C언어로 프로그래밍할 때에는 언제나 배열의 크기에도 주의해야 함
 * 
 * 
*/
