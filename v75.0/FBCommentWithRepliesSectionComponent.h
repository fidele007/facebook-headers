/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositeSectionComponent.h>

@class FBCommentWithRepliesSectionComponentListenerAnnouncer, FBCommentSectionComponentListenerAnnouncer, FBRepliesConnectionSectionComponentListenerAnnouncer;

@interface FBCommentWithRepliesSectionComponent : FBCompositeSectionComponent {

	FBCommentWithRepliesSectionComponentListenerAnnouncer* _announcer;
	FBCommentSectionComponentListenerAnnouncer* _commentAnnouncer;
	FBRepliesConnectionSectionComponentListenerAnnouncer* _repliesAnnouncer;

}

@property (nonatomic,readonly) FBCommentWithRepliesSectionComponentListenerAnnouncer * announcer;                    //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,readonly) FBCommentSectionComponentListenerAnnouncer * commentAnnouncer;                        //@synthesize commentAnnouncer=_commentAnnouncer - In the implementation block
@property (nonatomic,readonly) FBRepliesConnectionSectionComponentListenerAnnouncer * repliesAnnouncer;              //@synthesize repliesAnnouncer=_repliesAnnouncer - In the implementation block
+(id)newWithConfiguration:(id)arg1 announcer:(id)arg2 toolbox:(id)arg3 ;
+(id)initialState;
-(FBCommentWithRepliesSectionComponentListenerAnnouncer *)announcer;
-(FBCommentSectionComponentListenerAnnouncer *)commentAnnouncer;
-(FBRepliesConnectionSectionComponentListenerAnnouncer *)repliesAnnouncer;
@end

