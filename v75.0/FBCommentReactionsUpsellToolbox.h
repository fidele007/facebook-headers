/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommentComposerBannerDismissing, FBCommentComposerBannerScrollDelegate;
@class FBUserSession;

@interface FBCommentReactionsUpsellToolbox : NSObject {

	id<FBCommentComposerBannerDismissing> _dismisser;
	id<FBCommentComposerBannerScrollDelegate> _scrollDelegate;
	FBUserSession* _session;
	long long _upsellStyle;

}

@property (nonatomic,__weak,readonly) id<FBCommentComposerBannerDismissing> dismisser;                       //@synthesize dismisser=_dismisser - In the implementation block
@property (nonatomic,__weak,readonly) id<FBCommentComposerBannerScrollDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) long long upsellStyle;                                                        //@synthesize upsellStyle=_upsellStyle - In the implementation block
-(long long)upsellStyle;
-(id<FBCommentComposerBannerDismissing>)dismisser;
-(id)initWithDismisser:(id)arg1 scrollDelegate:(id)arg2 session:(id)arg3 upsellStyle:(long long)arg4 ;
-(id<FBCommentComposerBannerScrollDelegate>)scrollDelegate;
-(FBUserSession *)session;
@end

