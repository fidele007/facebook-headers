/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, FBMemTextWithEntities, FBNotificationsLoggingContext, UIColor;

@interface FBGenericCommentStreamViewControllerConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldActivateCommentComposer;
	BOOL _shouldShowNoCommentCellIfNeeded;
	id _feedbackTarget;
	NSArray* _parentTrackingCodes;
	NSString* _focusedCommentID;
	NSString* _composerActivationSource;
	FBMemTextWithEntities* _composerPrefillText;
	NSString* _analyticsModule;
	unsigned long long _layoutIdiom;
	FBNotificationsLoggingContext* _notificationsLoggingContext;
	unsigned long long _socialSentenceType;
	NSString* _accessibilityIdentifier;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy,readonly) id feedbackTarget;                                                        //@synthesize feedbackTarget=_feedbackTarget - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parentTrackingCodes;                                            //@synthesize parentTrackingCodes=_parentTrackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedCommentID;                                              //@synthesize focusedCommentID=_focusedCommentID - In the implementation block
@property (nonatomic,readonly) BOOL shouldActivateCommentComposer;                                            //@synthesize shouldActivateCommentComposer=_shouldActivateCommentComposer - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNoCommentCellIfNeeded;                                          //@synthesize shouldShowNoCommentCellIfNeeded=_shouldShowNoCommentCellIfNeeded - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerActivationSource;                                      //@synthesize composerActivationSource=_composerActivationSource - In the implementation block
@property (nonatomic,copy,readonly) FBMemTextWithEntities * composerPrefillText;                              //@synthesize composerPrefillText=_composerPrefillText - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                               //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutIdiom;                                                //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,copy,readonly) FBNotificationsLoggingContext * notificationsLoggingContext;              //@synthesize notificationsLoggingContext=_notificationsLoggingContext - In the implementation block
@property (nonatomic,readonly) unsigned long long socialSentenceType;                                         //@synthesize socialSentenceType=_socialSentenceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityIdentifier;                                       //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(unsigned long long)layoutIdiom;
-(NSString *)analyticsModule;
-(id)feedbackTarget;
-(NSString *)composerActivationSource;
-(NSString *)focusedCommentID;
-(FBMemTextWithEntities *)composerPrefillText;
-(FBNotificationsLoggingContext *)notificationsLoggingContext;
-(NSArray *)parentTrackingCodes;
-(id)initWithFeedbackTarget:(id)arg1 parentTrackingCodes:(id)arg2 focusedCommentID:(id)arg3 shouldActivateCommentComposer:(BOOL)arg4 shouldShowNoCommentCellIfNeeded:(BOOL)arg5 composerActivationSource:(id)arg6 composerPrefillText:(id)arg7 analyticsModule:(id)arg8 layoutIdiom:(unsigned long long)arg9 notificationsLoggingContext:(id)arg10 socialSentenceType:(unsigned long long)arg11 accessibilityIdentifier:(id)arg12 backgroundColor:(id)arg13 ;
-(BOOL)shouldActivateCommentComposer;
-(unsigned long long)socialSentenceType;
-(BOOL)shouldShowNoCommentCellIfNeeded;
-(UIColor *)backgroundColor;
-(NSString *)accessibilityIdentifier;
@end

