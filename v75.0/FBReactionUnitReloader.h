/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionUnitReloaderProtocol.h>

@protocol FBReactionUnitReloaderDelegate;
@class NSString, FBUserSession, NSMutableDictionary;

@interface FBReactionUnitReloader : NSObject <FBReactionUnitReloaderProtocol> {

	NSString* _reactionSessionId;
	NSString* _referrer;
	NSString* _surface;
	NSString* _targetID;
	FBUserSession* _session;
	NSMutableDictionary* _pendingUnitIDsToRetryCount;
	NSMutableDictionary* _unitLastReloadTimes;
	NSMutableDictionary* _unitsToReload;
	/*^block*/id _creationBlock;
	BOOL _paused;
	id<FBReactionUnitReloaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBReactionUnitReloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                     //@synthesize paused=_paused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)replaceUnit:(id)arg1 withUnit:(id)arg2 ;
-(void)reloadUnit:(id)arg1 withLocation:(id)arg2 ;
-(void)reloadUnit:(id)arg1 withLocation:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithSession:(id)arg1 targetID:(id)arg2 referrer:(id)arg3 surface:(id)arg4 reactionSessionId:(id)arg5 downloadRequestBlock:(/*^block*/id)arg6 ;
-(void)_reloadUnit:(id)arg1 withLocation:(id)arg2 userInfo:(id)arg3 ;
-(double)_retryDelayForRetryNumber:(unsigned long long)arg1 ;
-(void)_executeSuccessForUnitReload:(id)arg1 withInnerRequest:(id)arg2 result:(id)arg3 retryNumber:(unsigned long long)arg4 ;
-(void)_handleFailureForRequestWithUnit:(id)arg1 location:(id)arg2 userInfo:(id)arg3 ;
-(void)setDelegate:(id<FBReactionUnitReloaderDelegate>)arg1 ;
-(id<FBReactionUnitReloaderDelegate>)delegate;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
@end

