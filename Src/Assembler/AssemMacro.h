#pragma once

// 라이브러리 입출력 기호 정의
#ifdef ASSEM_EXPORTS
#define ASSEM_API __declspec(dllexport)
#else
#define ASSEM_API __declspec(dllimport)
#endif