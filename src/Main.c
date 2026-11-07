//#include "/home/codeleaded/System/Static/Library/IRVM.h"
#include "/home/codeleaded/System/Static/Library/IRVM_Comp.h"

int main(int argc,char** argv){
    IRVM vm = IRVM_New();
    IRVM_AddScript(&vm,"./code/Main." IRVM_TYPE);
    IRVM_Build(&vm);
    //IRVM_PrintFn(&vm);
    //IRVM_Optimiser_Exe_All(&vm,0U);
    IRVM_Print(&vm);
    //IRVM_Free(&vm);
    
    // "./arch/x64.yaml"
    IRVM_Comp exe = IRVM_Comp_New(vm,"./asm/Main.asm");
    IRVM_Comp_Build(&exe);
    IRVM_Comp_CreateOutput(&exe);
    IRVM_Comp_Free(&exe);
    return 0;
}