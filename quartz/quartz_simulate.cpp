#include "pch.h"
#include "quartz.h"
#include "MemoryModule.h"

void* mem_quartz;
void* memproc_AMGetErrorTextA;
void* memproc_AMGetErrorTextW;
void* memproc_AmpFactorToDB;
void* memproc_DBToAmpFactor;
void* memproc_DllCanUnloadNow;
void* memproc_DllGetClassObject;
void* memproc_DllRegisterServer;
void* memproc_DllUnregisterServer;

bool init_mem_quartz(){
    quartz class_quartz;
    mem_quartz=MemoryLoadLibrary(class_quartz.datahand(), class_quartz.lenth());
    if(mem_quartz== NULL){return false;};
    memproc_AMGetErrorTextA= GetProcAddress((HMODULE)mem_quartz,"AMGetErrorTextA");
    memproc_AMGetErrorTextW= GetProcAddress((HMODULE)mem_quartz,"AMGetErrorTextW");
    memproc_AmpFactorToDB= GetProcAddress((HMODULE)mem_quartz,"AmpFactorToDB");
    memproc_DBToAmpFactor= GetProcAddress((HMODULE)mem_quartz,"DBToAmpFactor");
    memproc_DllCanUnloadNow= GetProcAddress((HMODULE)mem_quartz,"DllCanUnloadNow");
    memproc_DllGetClassObject= GetProcAddress((HMODULE)mem_quartz,"DllGetClassObject");
    memproc_DllRegisterServer= GetProcAddress((HMODULE)mem_quartz,"DllRegisterServer");
    memproc_DllUnregisterServer= GetProcAddress((HMODULE)mem_quartz,"DllUnregisterServer");
    return true;
};
__attribute__((naked))void AMGetErrorTextA(){
	__asm {
		lea rax, memproc_AMGetErrorTextA
		jmp rax
	}
};
__attribute__((naked))void AMGetErrorTextW(){
	__asm {
		lea rax, memproc_AMGetErrorTextW
		jmp rax
	}
};
__attribute__((naked))void AmpFactorToDB(){
	__asm {
		lea rax,memproc_AmpFactorToDB
		jmp rax
	}
};
__attribute__((naked))void DBToAmpFactor(){
	__asm {
		lea rax, memproc_DBToAmpFactor
		jmp rax
	}
};
__attribute__((naked))void DllCanUnloadNow(int a){
	__asm {
		lea rax, memproc_DllCanUnloadNow
		jmp rax 
	}
};
__attribute__((naked))void DllGetClassObject(){
	__asm {
		lea rax, memproc_DllGetClassObject
		jmp rax		
	}
};
__attribute__((naked))void DllRegisterServer(){
	__asm {
		lea rax, memproc_DllRegisterServer
		jmp rax
	}
};
__attribute__((naked))void DllUnregisterServer(){
	__asm {
		lea rax, memproc_DllUnregisterServer
		jmp rax	
	}
};
