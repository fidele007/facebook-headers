/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBImageDownload.h>

@interface FBStreamingImageDownload : FBImageDownload {

	unsigned long long _nextFlagToNotify;
	unsigned long long _nextFlagToDecode;
	unsigned long long _desiredImageFlag;
	unsigned long long _imageFlagsToBeNotified;
	/*^block*/id _streamingBlock;

}

@property (nonatomic,readonly) unsigned long long desiredImageFlag;                    //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlagsToBeNotified;              //@synthesize imageFlagsToBeNotified=_imageFlagsToBeNotified - In the implementation block
@property (nonatomic,copy,readonly) id streamingBlock;                                 //@synthesize streamingBlock=_streamingBlock - In the implementation block
-(unsigned long long)desiredImageFlag;
-(unsigned long long)imageFlagsToBeNotified;
-(void)cleanUpAfterCompletionOrCancelation;
-(BOOL)_shouldNotifyAboutImage:(id)arg1 ;
-(void)_updateNextFlagToNotify:(unsigned long long)arg1 ;
-(BOOL)decodeCachedImageIfNeeded:(id)arg1 ;
-(unsigned long long)_nextImageFlagInImageFlagsToBeNotifiedLargerThan:(unsigned long long)arg1 ;
-(id)initWithURL:(id)arg1 scenePath:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 desiredImageFlag:(unsigned long long)arg5 imageFlagsToBeNotified:(unsigned long long)arg6 analyticsTags:(id)arg7 callbackQueue:(id)arg8 streamingBlock:(/*^block*/id)arg9 ;
-(void)completeAndCleanupWithImage:(id)arg1 type:(unsigned long long)arg2 error:(id)arg3 delegate:(id)arg4 ;
-(id)finalCachedImageToBeUsedFromCachedImage:(id)arg1 ;
-(id)streamingBlock;
@end

