/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface IMDDController : NSObject  {
    NSObject<OS_dispatch_queue> *_scannerQueue;

  /* Error parsing encoded ivar type info: ^{__DDScanner={__CFRuntimeBase=I[4C]}^{__DDLRTable}^{__DDLexer}^{__DDLookupTable}^{__DDCache}^{__DDTokenCache}^{__DDLexemCache}^{__DDScanQuery}^{__DDScanQuery}^{__CFArray}^{__CFArray}iii*@?b1b1} */
    struct __DDScanner { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDLRTable {} *x2; struct __DDLexer {} *x3; struct __DDLookupTable {} *x4; struct __DDCache {} *x5; struct __DDTokenCache {} *x6; struct __DDLexemCache {} *x7; struct __DDScanQuery {} *x8; struct __DDScanQuery {} *x9; struct __CFArray {} *x10; struct __CFArray {} *x11; int x12; int x13; int x14; char *x15; id x16; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x17; unsigned int x18 : 1; unsigned int x19 : 1; } *_scanner;

}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)scannerQueue;
- (struct __DDScanner { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDLRTable {} *x2; struct __DDLexer {} *x3; struct __DDLookupTable {} *x4; struct __DDCache {} *x5; struct __DDTokenCache {} *x6; struct __DDLexemCache {} *x7; struct __DDScanQuery {} *x8; struct __DDScanQuery {} *x9; struct __CFArray {} *x10; struct __CFArray {} *x11; int x12; int x13; int x14; char *x15; id x16; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x17; unsigned int x18 : 1; unsigned int x19 : 1; }*)sharedScanner;
     /* Encoded args for previous method: ^{__DDScanner={__CFRuntimeBase=I[4C]}^{__DDLRTable}^{__DDLexer}^{__DDLookupTable}^{__DDCache}^{__DDTokenCache}^{__DDLexemCache}^{__DDScanQuery}^{__DDScanQuery}^{__CFArray}^{__CFArray}iii*@?b1b1}8@0:4 */

- (void)scanMessage:(id)arg1 completionBlock:(id)arg2;
- (void)scanMessage:(id)arg1 waitUntilDone:(BOOL)arg2 completionBlock:(id)arg3;

@end