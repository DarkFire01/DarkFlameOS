#pragma

enum ErrorCodeList{
    //Could not find a real cause, or one doesn't apply to this case.
    KernelPanicUnknownErr = 0x00000000, 
    //No more code could be discovered.
    EOFErr = 0x00000001,
    //VGA driver could not be loaded
    VGADriverErr = 0x00000002,
    ACPIShutdownFailed = 0x00000003
};