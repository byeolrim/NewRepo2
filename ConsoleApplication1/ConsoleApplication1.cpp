// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

    int a, b;

    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    int and_result = a & b;
    int or_result = a | b;
    int xor_result = a ^ b;

    // 결과값
    printf("AND 결과: %d\n", and_result);
    printf("OR 결과: %d\n", or_result);
    printf("XOR 결과: %d\n", xor_result);

    return 0;
