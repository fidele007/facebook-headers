/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGoodwillPinnedUnitStateListener.h>

@protocol FBGoodwillPinnedUnitDataControllerDelegate;
@class FBUserSession, FBPersistentCache, NSString, FBGoodwillPinnedUnitClashUnit, NSDate, FBMemCustomizedStory;

@interface FBGoodwillPinnedUnitDataController : NSObject <FBGoodwillPinnedUnitStateListener> {

	id<FBGoodwillPinnedUnitDataControllerDelegate> _delegate;
	FBUserSession* _session;
	FBPersistentCache* _dataCache;
	NSString* _analyticsModule;
	FBGoodwillPinnedUnitClashUnit* _pinnedUnitClashUnit;
	NSDate* _markedViewedTime;
	unsigned long long _viewedLongEnoughSeconds;
	FBMemCustomizedStory* _pendingModel;
	BOOL _hasMarkedViewed;
	FBMemCustomizedStory* _currentModel;

}

@property (nonatomic,readonly) FBMemCustomizedStory * currentModel;              //@synthesize currentModel=_currentModel - In the implementation block
@property (nonatomic,readonly) BOOL hasMarkedViewed;                             //@synthesize hasMarkedViewed=_hasMarkedViewed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setAndMaybeShowPendingModel:(id)arg1 ;
-(BOOL)hasMarkedViewed;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 analyticsModule:(id)arg3 ;
-(void)unitWasManuallyHidden;
-(void)unitWasViewedForMinimumVPVTime;
-(void)validateGreetingMode;
-(BOOL)hasViewedLongEnough;
-(void)attemptRefreshWithAllowCache:(BOOL)arg1 refreshMode:(id)arg2 ;
-(void)showPendingUnitIfPossible;
-(void)pinnedUnitStateDidChange:(long long)arg1 ;
-(void)dealloc;
-(FBMemCustomizedStory *)currentModel;
-(void)setCurrentModel:(FBMemCustomizedStory *)arg1 ;
@end

