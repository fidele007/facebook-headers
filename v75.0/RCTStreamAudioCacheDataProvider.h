/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSMutableArray, NSString, NSFileHandle;

@interface RCTStreamAudioCacheDataProvider : NSObject {

	NSMutableData* _data;
	NSMutableArray* _ranges;
	NSString* _cacheFilePath;
	NSFileHandle* _handle;
	unsigned long long _contentLength;

}

@property (assign,nonatomic) unsigned long long contentLength;              //@synthesize contentLength=_contentLength - In the implementation block
-(id)_convertToCachePath:(id)arg1 ;
-(id)initWithCacheName:(id)arg1 ;
-(id)readDataWithBufferLength:(unsigned long long)arg1 fromOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)cacheToFile:(id)arg1 ;
-(BOOL)isReady;
-(void)dealloc;
-(void)close;
-(void)setContentLength:(unsigned long long)arg1 ;
-(unsigned long long)contentLength;
@end

