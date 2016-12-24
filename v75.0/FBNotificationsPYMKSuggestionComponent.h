/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBForceTouchIntentProvider.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class FBNotificationsComponentToolbox, NSString, FBPYMKSuggestion;

@interface FBNotificationsPYMKSuggestionComponent : CKCompositeComponent <FBForceTouchIntentProvider, FBHScrollImpressionLogging> {

	FBNotificationsComponentToolbox* _toolbox;
	NSString* _requestHowFound;
	NSString* _cancelRef;
	NSString* _pymkLocation;
	CKTypedComponentAction<> _onBackgroundTapAction;
	CKTypedComponentAction<> _onAddFriendAction;
	FBPYMKSuggestion* _suggestion;

}

@property (nonatomic,readonly) FBPYMKSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithSuggestion:(id)arg1 requestHowFound:(id)arg2 cancelRef:(id)arg3 pymkLocation:(id)arg4 onBackgroundTapAction:(CKTypedComponentAction<>)arg5 onAddFriendAction:(CKTypedComponentAction<>)arg6 toolbox:(id)arg7 ;
-(id)forceTouchIntentAtPoint:(CGPoint)arg1 sourceView:(id)arg2 ;
-(FBPYMKSuggestion *)suggestion;
-(void)didTapBackground:(id)arg1 ;
-(void)undoAddSuggestedFriend:(id)arg1 ;
-(void)addSuggestedFriend:(id)arg1 ;
-(void)removeSuggestion:(id)arg1 ;
@end
