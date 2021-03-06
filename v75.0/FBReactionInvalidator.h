/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLocationManagerSubscription, FBReactionInvalidatorListener;
@class FBMemReactionUnitExpirationCondition, FBReactionInvalidatorTimerHelper, NSTimer, FBLocationAccessManager;

@interface FBReactionInvalidator : NSObject {

	FBMemReactionUnitExpirationCondition* _expirationCondition;
	FBReactionInvalidatorTimerHelper* _refreshTimerHelper;
	id<FBLocationManagerSubscription> _locationManagerToken;
	NSTimer* _refreshTimer;
	FBLocationAccessManager* _locationAccessManager;
	BOOL _hasInvalidated;
	id<FBReactionInvalidatorListener> _listener;

}

@property (assign,nonatomic,__weak) id<FBReactionInvalidatorListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) BOOL hasInvalidated;                                          //@synthesize hasInvalidated=_hasInvalidated - In the implementation block
-(void)_applicationDidFinishEnteringForegroundAndIsNowIdle:(id)arg1 ;
-(void)_clearOutTimer;
-(id)initWithExpirationCondition:(id)arg1 locationAccessManager:(id)arg2 ;
-(void)_locationDidChange:(id)arg1 ;
-(BOOL)hasInvalidated;
-(void)dealloc;
-(void)invalidate;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(id<FBReactionInvalidatorListener>)listener;
-(void)setListener:(id<FBReactionInvalidatorListener>)arg1 ;
@end

