/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBServiceTransactionMutating.h>

@protocol FBStickerResourceManager;
@class FBUserSession, FBServiceTransactionTokenManager, NSString;

@interface FBStickerPackThumbnailDownloader : NSObject <FBServiceTransactionMutating> {

	unsigned long long _stickerPackId;
	id<FBStickerResourceManager> _resourceManager;
	FBUserSession* _session;
	BOOL _done;
	long long _priority;
	FBServiceTransactionTokenManager* _tokenManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)downloadWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStickerPackId:(unsigned long long)arg1 resourceManager:(id)arg2 session:(id)arg3 ;
-(void)changePriorityToNewPriority:(long long)arg1 ;
-(void)_handleError:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_didFetchThumbnailURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleDoneWithThumbnail:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelOnMainThread;
-(void)cancel;
-(void)dealloc;
@end

