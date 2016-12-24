/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, UIImage, NSError;

@interface FBLivePhotoAssetCoordination : NSObject {

	NSObject*<OS_dispatch_queue> _serializationQueue;
	NSURL* _localImageURL;
	UIImage* _livePhotoPlaceholderImage;
	NSURL* _localVideoURL;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionBlock;
	BOOL _isCancelled;

}

@property (nonatomic,readonly) BOOL isCancelled;              //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)_callCompletionBlockIfAssetCoordinationComplete;
-(void)imageRetrievalDidCompleteWithLocalImageURL:(id)arg1 livePhotoPlaceholderImage:(id)arg2 ;
-(void)videoRetrievalDidCompleteWithLocalVideoURL:(id)arg1 ;
-(void)registerCompletionBlock:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)cancel;
-(id)init;
-(BOOL)isCancelled;
-(id)uniqueIdentifier;
@end
