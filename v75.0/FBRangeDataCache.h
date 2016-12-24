/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBBlockDataCache.h>

@protocol OS_dispatch_queue;
@class FBLayeredCache, NSObject, NSString;

@interface FBRangeDataCache : NSObject <FBBlockDataCache> {

	FBLayeredCache* _cache;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataWithKey:(id)arg1 range:(NSRange)arg2 expectedContentLength:(unsigned long long)arg3 ;
-(unsigned long long)expectedContentLengthWithDataKey:(id)arg1 ;
-(void)setExpectedContentLength:(unsigned)arg1 dataKey:(id)arg2 ;
-(void)insertData:(id)arg1 key:(id)arg2 range:(NSRange)arg3 expectedContentLength:(unsigned long long)arg4 videoBasicData:(SCD_Struct_FB639)arg5 ;
-(void)insertBlock:(id)arg1 key:(id)arg2 blockIndex:(unsigned long long)arg3 videoBasicData:(SCD_Struct_FB639)arg4 ;
-(unsigned long long)truncateOffsetForAlignment:(unsigned long long)arg1 ;
-(void)clearCache;
-(unsigned long long)blockSize;
-(id)initWithCache:(id)arg1 ;
@end

