#pragma once

#include <stdint.h>
#include "BasicRenderer.h"
#include "cstr.h"
#include "efiMemory.h"
#include "memory.h"
#include "BitMap.h"
#include "PageFrameAllocator.h"
#include "PageMapIndexer.h"
#include "PageTableManager.h"
#include "Paging.h"

struct BootInfo {
	Framebuffer* framebuffer;
	PSF1_FONT* psf1_Font;
	EFI_MEMORY_DESCRIPTOR* mMap;
	uint64_t mMapSize;
	uint64_t mMapDescSize;
} ;

extern uint64_t _KernelStart;
extern uint64_t _KernelEnd;

struct KernelInfo {
    PageTableManager* pageTableManager;
};

KernelInfo InitializeKernel(BootInfo* BootInfo);
