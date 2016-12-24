/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAccountRecoverySearchFlowControlling.h>
#import <Facebook/FBAuthRecoveryControllingDelegate.h>
#import <Facebook/FBAuthRecoveryControlling.h>

@protocol FBAccountRecoveryUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthRecoveryControllingDelegate;
@class FBAccountRecoveryFlowData, FBAccountRecoveryContactPointsFlowController, FBAccountRecoveryFDRFlowController, FBAccountRecoveryFriendFlowController, NSString;

@interface FBAccountRecoverySearchFlowController : NSObject <FBAccountRecoverySearchFlowControlling, FBAuthRecoveryControllingDelegate, FBAuthRecoveryControlling> {

	FBAccountRecoveryFlowData* _flowData;
	id<FBAccountRecoveryUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	FBAccountRecoveryContactPointsFlowController* _contactPointsFlowController;
	FBAccountRecoveryFDRFlowController* _fdrSessionsFlowController;
	FBAccountRecoveryFriendFlowController* _friendFlowController;
	id<FBAuthRecoveryControllingDelegate> _recoveryDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthRecoveryControllingDelegate> recoveryDelegate;              //@synthesize recoveryDelegate=_recoveryDelegate - In the implementation block
-(void)didSelectUser:(id)arg1 ;
-(void)didRequestFriendFilteringWithQueryString:(id)arg1 ;
-(void)recoveryCompleted:(id)arg1 withUserID:(id)arg2 password:(id)arg3 ;
-(id)initWithFlowData:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4 ;
-(void)didFailRateLimiting;
-(void)recover;
-(void)setRecoveryDelegate:(id<FBAuthRecoveryControllingDelegate>)arg1 ;
-(id<FBAuthRecoveryControllingDelegate>)recoveryDelegate;
@end

