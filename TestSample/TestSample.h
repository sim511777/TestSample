// 다음 ifdef 블록은 DLL에서 내보내는 작업을 더 간소화하는 매크로를 만드는
// 표준 방법입니다. 이 DLL에 들어 있는 파일은 모두 명령줄에 정의된 TESTSAMPLE_EXPORTS 기호로
// 컴파일됩니다. 이 DLL을 사용하는 프로젝트에서는 이 기호를 정의할 수 없습니다.
// 이렇게 하면 소스 파일에 이 파일이 포함된 다른 모든 프로젝트에서는
// TESTSAMPLE_API 함수를 DLL에서 가져오는 것으로 표시되는 반면, 이 DLL에서는
// 이 매크로로 정의된 기호가 내보내지는 것으로 표시됩니다.
#ifdef TESTSAMPLE_EXPORTS
#define TESTSAMPLE_API __declspec(dllexport)
#else
#define TESTSAMPLE_API __declspec(dllimport)
#endif

TESTSAMPLE_API int Add(int a, int b);
TESTSAMPLE_API int Add_Bug(int a, int b);
TESTSAMPLE_API int Sub(int a, int b);
TESTSAMPLE_API int Mul(int a, int b);
TESTSAMPLE_API int Div(int a, int b);
TESTSAMPLE_API bool Even(int a);
TESTSAMPLE_API bool Odd(int a);
TESTSAMPLE_API int CalcBusy(int calcCount);
