/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFeedbackCommentsSectionComponentToolbox, FBCommentComponentActionListenerAnnouncer, FBCommentComponentEditListenerAnnouncer;

@interface FBCommentSectionComponentContext : NSObject {

	FBFeedbackCommentsSectionComponentToolbox* _toolbox;
	FBCommentComponentActionListenerAnnouncer* _componentActionAnnouncer;
	FBCommentComponentEditListenerAnnouncer* _componentEditAnnouncer;

}

@property (nonatomic,readonly) FBFeedbackCommentsSectionComponentToolbox * toolbox;                               //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBCommentComponentActionListenerAnnouncer * componentActionAnnouncer;              //@synthesize componentActionAnnouncer=_componentActionAnnouncer - In the implementation block
@property (nonatomic,readonly) FBCommentComponentEditListenerAnnouncer * componentEditAnnouncer;                  //@synthesize componentEditAnnouncer=_componentEditAnnouncer - In the implementation block
+(id)newWithToolbox:(id)arg1 componentActionAnnouncer:(id)arg2 componentEditAnnouncer:(id)arg3 ;
-(FBFeedbackCommentsSectionComponentToolbox *)toolbox;
-(FBCommentComponentActionListenerAnnouncer *)componentActionAnnouncer;
-(FBCommentComponentEditListenerAnnouncer *)componentEditAnnouncer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

