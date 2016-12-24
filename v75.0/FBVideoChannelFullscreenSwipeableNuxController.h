/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNuxPresenter.h>

@protocol FBNuxDelegate;
@class FBUserSession, NSString, NSArray, NSDictionary;

@interface FBVideoChannelFullscreenSwipeableNuxController : NSObject <FBNuxPresenter> {

	FBUserSession* _session;
	id<FBNuxDelegate> _nuxCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * nuxID; 
@property (nonatomic,copy,readonly) NSArray * triggerIDs; 
@property (nonatomic,readonly) int nuxType; 
@property (assign,nonatomic) id<FBNuxDelegate> nuxCoordinator;                  //@synthesize nuxCoordinator=_nuxCoordinator - In the implementation block
@property (nonatomic,copy,readonly) NSString * nuxAnalyticsModule; 
@property (nonatomic,copy,readonly) NSDictionary * extraLogData; 
@property (nonatomic,copy) id onClosedBlock; 
-(id<FBNuxDelegate>)nuxCoordinator;
-(void)didShowNux;
-(id)viewControllerForPresentation;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2 ;
-(NSString *)nuxID;
-(NSArray *)triggerIDs;
-(int)nuxType;
-(void)setNuxCoordinator:(id<FBNuxDelegate>)arg1 ;
-(BOOL)shouldShowNux;
-(id)initWithSession:(id)arg1 ;
@end

