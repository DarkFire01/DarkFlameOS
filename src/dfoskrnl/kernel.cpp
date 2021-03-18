#include "include/kernelutil.h"

extern "C" void _start(BootInfo* bootinfo){
    int HackerGreen = 0x222AAA11;
    int ErrorRed = 0x00ff0000;
    int SuperPurple = 0xFFFF00FF;
 
    
    KernelInfo kernelInfo = InitializeKernel(bootinfo);
    PageTableManager* pageTableManager = kernelInfo.pageTableManager;
    BasicRenderer newRenderer = BasicRenderer(bootinfo->framebuffer, bootinfo->psf1_Font); 
    newRenderer.Colour = SuperPurple;
    newRenderer.Print("DarkFlame OS Kernel Initalization:");
    newRenderer.Colour = HackerGreen;
    newRenderer.Print(" [Sucsessful!]");
    newRenderer.EndLine();


    while(true);
    //WE SHOULD NEVER GET HERE.
    newRenderer.Colour = ErrorRed;
    newRenderer.PrintError(EOFErr);
}

