/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReceivedDataBufferProtocol.h>

@protocol FBReceivedDataBufferDelegate;
@class NSMutableData, NSString;

@interface FBReceivedChunkedDataMemoryBuffer : NSObject <FBReceivedDataBufferProtocol> {

	NSMutableData* _data;
	BOOL _opened;
	unsigned long long _chunksProcessed;
	id<FBReceivedDataBufferDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBReceivedDataBufferDelegate> delegate; 
-(BOOL)_isBufferConsumed;
-(void)_processNewData:(long long)arg1 ;
-(void)setDelegate:(id<FBReceivedDataBufferDelegate>)arg1 ;
-(NSString *)description;
-(id<FBReceivedDataBufferDelegate>)delegate;
-(unsigned long long)length;
-(id)data;
-(void)close;
-(void)appendData:(id)arg1 ;
-(void)open;
@end

