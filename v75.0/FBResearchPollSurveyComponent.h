/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemResearchPollSurvey, FBMemResearchPollMultipleChoiceQuestion, FBUserSession, NSString;

@interface FBResearchPollSurveyComponent : CKCompositeComponent {

	BOOL _autoSubmit;
	BOOL _questionState;
	BOOL _selectionState;
	FBMemResearchPollSurvey* _researchPoll;
	FBMemResearchPollMultipleChoiceQuestion* _currentQuestion;
	FBUserSession* _session;
	NSString* _clientToken;

}

@property (nonatomic,readonly) BOOL questionState;                                                     //@synthesize questionState=_questionState - In the implementation block
@property (nonatomic,readonly) BOOL selectionState;                                                    //@synthesize selectionState=_selectionState - In the implementation block
@property (nonatomic,readonly) BOOL autoSubmit;                                                        //@synthesize autoSubmit=_autoSubmit - In the implementation block
@property (nonatomic,readonly) FBMemResearchPollSurvey * researchPoll;                                 //@synthesize researchPoll=_researchPoll - In the implementation block
@property (nonatomic,readonly) FBMemResearchPollMultipleChoiceQuestion * currentQuestion;              //@synthesize currentQuestion=_currentQuestion - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientToken;                                            //@synthesize clientToken=_clientToken - In the implementation block
+(id)newWithUnit:(id)arg1 toolbox:(id)arg2 ;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(FBMemResearchPollSurvey *)researchPoll;
-(BOOL)autoSubmit;
-(FBMemResearchPollMultipleChoiceQuestion *)currentQuestion;
-(BOOL)questionState;
-(BOOL)selectionState;
-(NSString *)clientToken;
-(FBUserSession *)session;
@end

