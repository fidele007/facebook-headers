/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositeSectionComponent.h>

@class FBMemFeedback, NSString, FBFeedbackCommentsSectionComponentListenerAnnouncer, FBFeedbackCommentsSectionComponentToolbox, FBCommentConnectionSectionComponentListenerAnnouncer;

@interface FBFeedbackCommentsSectionComponent : FBCompositeSectionComponent {

	FBMemFeedback* _feedback;
	NSString* _focusedThreadFeedbackID;
	FBFeedbackCommentsSectionComponentListenerAnnouncer* _announcer;
	FBFeedbackCommentsSectionComponentToolbox* _toolbox;
	FBCommentConnectionSectionComponentListenerAnnouncer* _commentConnectionAnnouncer;

}

@property (nonatomic,readonly) FBMemFeedback * feedback;                                                                       //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedThreadFeedbackID;                                                        //@synthesize focusedThreadFeedbackID=_focusedThreadFeedbackID - In the implementation block
@property (nonatomic,readonly) FBFeedbackCommentsSectionComponentListenerAnnouncer * announcer;                                //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,readonly) FBFeedbackCommentsSectionComponentToolbox * toolbox;                                            //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBCommentConnectionSectionComponentListenerAnnouncer * commentConnectionAnnouncer;              //@synthesize commentConnectionAnnouncer=_commentConnectionAnnouncer - In the implementation block
+(id)newWithConfiguration:(id)arg1 announcer:(id)arg2 toolbox:(id)arg3 ;
+(id)initialState;
-(FBFeedbackCommentsSectionComponentToolbox *)toolbox;
-(FBFeedbackCommentsSectionComponentListenerAnnouncer *)announcer;
-(NSString *)focusedThreadFeedbackID;
-(FBCommentConnectionSectionComponentListenerAnnouncer *)commentConnectionAnnouncer;
-(FBMemFeedback *)feedback;
@end
