/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@interface TraceRecord : NSObject
{
    unsigned int seqnum;	// 4 = 0x4
    unsigned int type;	// 8 = 0x8
    unsigned int address;	// 12 = 0xc
    unsigned int argument;	// 16 = 0x10
    unsigned int depth;	// 20 = 0x14
    unsigned int *frames;	// 24 = 0x18
}

- (unsigned int)address;	// IMP=0x318a8fcc
- (unsigned int)argument;	// IMP=0x318a8fd4
- (unsigned int)depth;	// IMP=0x318a8fdc
- (unsigned int *)frames;	// IMP=0x318a8fe4
- (id)initWithBacktrace:(id)fp8 forTask:(unsigned int)fp12;	// IMP=0x318a8e14
- (id)initWithLoggingRecord:(CDAnonymousStruct3 *)fp8 forTask:(unsigned int)fp12;	// IMP=0x318a8d38
- (id)initWithTraceRecord:(id)fp8;	// IMP=0x318a8f88
- (id)initWithTraceRecord:(id)fp8 withDepth:(unsigned int)fp12;	// IMP=0x318a8ee4
- (unsigned int)seqnum;	// IMP=0x318a8fa8
- (unsigned int)threadID;	// IMP=0x318a8fb0
- (unsigned int)type;	// IMP=0x318a8fc4

@end
