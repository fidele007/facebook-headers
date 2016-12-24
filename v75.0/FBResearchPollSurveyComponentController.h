/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>

@interface FBResearchPollSurveyComponentController : CKComponentController
+(CKTypedComponentAction<>)optionSelectedAction;
+(id)initialStateForUnit:(id)arg1 ;
+(CKTypedComponentAction<>)initialCardTappedAction;
+(BOOL)isResponseOptionSelectedAtIndex:(unsigned long long)arg1 questionSelectionState:(unsigned long long)arg2 ;
+(CKTypedComponentAction<>)voteButtonTappedAction;
+(id)answeredQuestions:(id)arg1 forHistory:(unsigned long long)arg2 ;
-(void)switchToFirstQuestion;
-(void)didSelectAnOption:(id)arg1 optionIndex:(id)arg2 ;
-(void)switchToNextQuestion;
-(void)respondToTappingOptionAtIndex:(unsigned long long)arg1 ;
-(void)sendGraphAPIRequest:(id)arg1 session:(id)arg2 ;
-(unsigned long long)newSelectionStateFromCurrentState:(unsigned long long)arg1 responseOptionAtIndex:(unsigned long long)arg2 ;
-(id)sendAnswerRequestForState:(id)arg1 ;
-(unsigned long long)nextQuestionStateFromCurrentSelectionState:(unsigned long long)arg1 ;
-(id)indexesOfSelectedResponsesInResponses:(id)arg1 questionSelectionState:(unsigned long long)arg2 ;
@end
