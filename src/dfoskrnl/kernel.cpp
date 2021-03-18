
#include <stdint.h>
#include "../include/BasicRenderer.h"
#include "../include/cstr.h"


extern "C" void _start(Framebuffer* framebuffer, PSF1_FONT* psf1_font){
    int HackerGreen = 0x222AAA11;
    int ErrorRed = 0x00ff0000;

    BasicRenderer newRenderer = BasicRenderer(framebuffer, psf1_font); 
    newRenderer.Colour = HackerGreen;
    newRenderer.Print(to_string((uint64_t)1234976));
    newRenderer.EndLine();
    

    newRenderer.Colour = ErrorRed;
    newRenderer.PrintError(EOFErr);

    return ;
}

