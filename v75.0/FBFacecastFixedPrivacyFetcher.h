/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBUserSession;

@interface FBFacecastFixedPrivacyFetcher : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _downloadHandle;

}
-(id)initWithUserSession:(id)arg1 ;
-(void)_cancelDownloadRequest;
-(id)_fixedPrivacyForQueriedNode:(id)arg1 ;
-(id)_queryForPublishTarget:(unsigned long long)arg1 targetID:(id)arg2 ;
-(id)_fixedComposerSettingForModel:(id)arg1 explanation:(id*)arg2 ;
-(void)fetchFixedPrivacySettingsForTargetID:(id)arg1 targetType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
@end
