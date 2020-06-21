#include "iostream"

void main()
{ 
  printf("------------------------------------- \n");
  printf("Title: Simple c++ test program, helloworld.cpp \n");
  printf("Application: Visual code, Windows 10 \n");
  printf("Author: Alan Ng, 25/9/2018, OUHK DL student \n");
  printf("Method to run this program :  \n");
  printf("Go to Windows 10 terminal, and go to file directory > c:/.vscode \n");
  printf("Type > build , and then Type > hello \n");
  printf("--------------------------------------- \n");
  printf("\n");
  printf("====        ANSI-Compliant Predefined Macros          ==== \n");
  printf("==== Microsoft C++ implementation preprocessor macros ==== \n");
  printf("Function name: %s\n", __FUNCTION__);
  printf("Decorated function name: %s\n", __FUNCDNAME__);
  printf("Function signature: %s\n", __FUNCSIG__);
  printf("The maximum size (in bits) for a non-vector integral type: %d\n",
         _INTEGRAL_MAX_BITS);
  printf("Compilation target is WIN64-bit ARM or x64 (Defined as 1): %d\n",
         _WIN64);
  printf("Compilation target is WIN32-bit ARM or x32 (Defined as 1): %d\n",
         _WIN32);
  printf("Compilation target is AMDx64 processors (defined as 100): %d\n",
         _M_AMD64);
  printf("Compilation target is x64 processor (Defined as 100): %d\n", _M_X64);
  printf("Version number of the Visual C++ compiler is (macro evaluates to 1): "
         "%d\n",
         _MSC_BUILD);
  printf("Version number of the Visual Studio Code is: %d\n", _MSC_VER);
  printf("Full version number of the Visual Studio Code is: %d\n",
         _MSC_FULL_VER);
  printf("C++ standard targeted by the compiler (201402=c++14, 201703=c++17) : "
         "%d\n",
         _MSVC_LANG);
  printf("The translation unit is compiled as C++ : %d\n", __cplusplus);
  printf("It is a hosted implementation that support standard library (defined "
         "as 1) : %d\n",
         __STDC_HOSTED__);
  printf("MSC extensions (defined as 1) %d\n", _MSC_EXTENSIONS);
  printf("The date/time of the last modification of source file: %s\n",
         __TIMESTAMP__);
    #ifdef _WIN64  
      printf("WIN64-bit OS is detected : %d\n", _WIN64);  
    #endif 
    #ifdef _WIN32  
      printf("WIN32-bit OS is detected: %d\n", _WIN32);  
    #endif 
    #ifdef _M_X64  
      printf("64-bit system is detected : %d\n", _M_X64);  
    #endif 
    #ifdef _M_AMD64
      printf("AMD 64-bit system is detected: %d\n", _M_AMD64);  
    #endif 
    #ifdef _CPPRTTI  
      printf("Run time type information (RTTI): %d\n", _CPPRTTI);  
    #else  
      printf("Run time type information (RTTI) not defined\n");  
    #endif 
    #ifdef __cplusplus  
      printf("Compiled as C++ %d\n", __cplusplus);  
    #else  
      printf("Compiled as C++ not defined\n");  
    #endif
    #ifdef  __clang_version__ 
      printf("Clang version is detected: %d\n", __clang_version__);  
    #else  
      printf("Clang version not defined\n");  
    #endif
    printf("Line number in the current source file: %d\n", __LINE__); 
    system("pause"); 
}  


