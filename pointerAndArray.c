/**
 * 포인터와 배열의 관계
 * 
 * 포인터와 배열은 매우 긴밀한 관계를 맺고 있으며,
 * 어떤 부분에서는 서로를 대체할 수도 있음
 * 
 * 배열의 이름은 그 값을 변경할 수 없는 상수라는 점을 제외하면 포인터와 같음
 * 배열의 이름 = 포인터 상수(constant pointer)
 * 
 * constant pointer
 * - 포인터 상수
 * - 포인터 변수가 가리키고 있는 주소 값을 변경할 수 없는 포인터
 * pointer to constant
 * - 상수 포인터
 * - 상수를 가르키는 포인터
 * 
*/

# include <stdio.h>

int main(void){
    int arr[3] = {10, 20, 30}; // 배열 선언
    int* ptr_arr = arr; // 포인터에 배열의 이름을 대입

    printf("배열의 이름을 이용하여 배열 요소에 접근 : %d %d %d \n", arr[0], arr[1], arr[2]);
    printf("    포인터를 이용하여 배열 요소에 접근 : %d %d %d \n", ptr_arr[0], ptr_arr[1], ptr_arr[2]);

    printf("배열의 이름을 이용한 배열의 크기 계산 : %d \n", sizeof(arr));
    printf("    포인터를 이용한 배열의 크기 계산 : %d \n", sizeof(ptr_arr));

    char carr[3] = {'a', 'b', 'c'};
    int* ptr_i_carr = carr;
    char* ptr_c_carr = carr;

    printf("배열 접근 %c \n", carr[0]);
    printf("int* pointer 접근 %c \n", ptr_i_carr[0]);
    printf("char* pointer 접근 %c \n", ptr_c_carr[0]);


}

/**
 *
 * 포인터에 배열의 이름을 대입, 해당 포인터를 배열의 이름처럼 사용
 * 배열의 이름을 포인터처럼 사용할 수 있을 뿐만 아니라,
 * 포인터를 배열의 이름처럼 사용할 수도 있음
 * 
 * 하지만 배열의 크기를 계산할 때에는 배열의 이름과 포인터 사이에 차이가 발생
 * 배열의 이름을 이용한 크기 계산에서는 배열의 크기가 int형 배열 요소 3개의 크기인 12바이트로 제대로 출력
 * 하지만 포인터를 이용한 크기 계산에서는 배열의 크기가 아닌 포인터 변수 자체의 크기가 출력되는 차이가 있음 
 * 
*/