/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBImageDownloaderCancelationHandle.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FBImageCacheFetch : NSObject <FBImageDownloaderCancelationHandle> {

	BOOL _canceled;
	NSObject*<OS_dispatch_queue> _serializedCallbackQueue;
	unsigned long long _options;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOptions:(unsigned long long)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)callCompletionBlockWithURL:(id)arg1 image:(id)arg2 type:(unsigned long long)arg3 downloader:(id)arg4 ;
-(void)cancel;
@end

