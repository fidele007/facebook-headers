/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStarRatingsTriggering.h>

@protocol FBStarRatingsQuiesenceTriggerDelegateProtocol;
@class FBStarRatingsUserData, NSArray, NSString;

@interface FBStarRatingsSmartTrigger : NSObject <FBStarRatingsTriggering> {

	FBStarRatingsUserData* _userData;
	double _secondsUntilPrompt;
	unsigned long long _usesUntilPrompt;
	unsigned long long _significantEventsUntilPrompt;
	NSArray* _significantEventNotifications;
	id<FBStarRatingsQuiesenceTriggerDelegateProtocol> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBStarRatingsQuiesenceTriggerDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)incrementUsesWithUserData:(id)arg1 ;
+(id)triggerWithUserData:(id)arg1 daysUntilPrompt:(unsigned long long)arg2 usesUntilPrompt:(unsigned long long)arg3 significantEventsUntilPrompt:(unsigned long long)arg4 significantEventNotifications:(id)arg5 ;
-(void)navigationModeEventDidOccur;
-(void)stopTrigger;
-(void)startTrigger;
-(id)initWithUserData:(id)arg1 daysUntilPrompt:(unsigned long long)arg2 usesUntilPrompt:(unsigned long long)arg3 significantEventsUntilPrompt:(unsigned long long)arg4 significantEventNotifications:(id)arg5 ;
-(void)_significantEventDidFire:(id)arg1 ;
-(void)_checkConditions;
-(void)setDelegate:(id<FBStarRatingsQuiesenceTriggerDelegateProtocol>)arg1 ;
-(void)dealloc;
-(id<FBStarRatingsQuiesenceTriggerDelegateProtocol>)delegate;
@end

