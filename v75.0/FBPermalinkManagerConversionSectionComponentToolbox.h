/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPermalinkDimmingListenerAnnouncer, FBPermalinkStoryUpdateListenerAnnouncer, FBCommentComposerActivationRequestListenerAnnouncer;

@interface FBPermalinkManagerConversionSectionComponentToolbox : NSObject {

	FBPermalinkDimmingListenerAnnouncer* _dimmingAnnouncer;
	FBPermalinkStoryUpdateListenerAnnouncer* _storyUpdateAnnouncer;
	FBCommentComposerActivationRequestListenerAnnouncer* _commentComposerActivationAnnouncer;

}

@property (nonatomic,readonly) FBPermalinkDimmingListenerAnnouncer * dimmingAnnouncer;                                                //@synthesize dimmingAnnouncer=_dimmingAnnouncer - In the implementation block
@property (nonatomic,readonly) FBPermalinkStoryUpdateListenerAnnouncer * storyUpdateAnnouncer;                                        //@synthesize storyUpdateAnnouncer=_storyUpdateAnnouncer - In the implementation block
@property (nonatomic,readonly) FBCommentComposerActivationRequestListenerAnnouncer * commentComposerActivationAnnouncer;              //@synthesize commentComposerActivationAnnouncer=_commentComposerActivationAnnouncer - In the implementation block
-(FBCommentComposerActivationRequestListenerAnnouncer *)commentComposerActivationAnnouncer;
-(id)initWithDimmingAnnouncer:(id)arg1 storyUpdateAnnouncer:(id)arg2 commentComposerActivationAnnouncer:(id)arg3 ;
-(FBPermalinkDimmingListenerAnnouncer *)dimmingAnnouncer;
-(FBPermalinkStoryUpdateListenerAnnouncer *)storyUpdateAnnouncer;
@end

