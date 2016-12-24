/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNuxPresenter.h>
#import <Facebook/FBSelfPresentingNux.h>

@protocol FBNuxDelegate;
@class FBFNInlineUpsellDataSource, FBFNNUXController, FBUserSession, NSString, NSArray, NSDictionary;

@interface FBFNNUXPresenter : NSObject <FBNuxPresenter, FBSelfPresentingNux> {

	FBFNInlineUpsellDataSource* _upsellDataSource;
	FBFNNUXController* _nuxController;
	unsigned long long _fnNuxType;
	FBUserSession* _session;
	int _nuxState;
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
-(void)showNux;
-(id<FBNuxDelegate>)nuxCoordinator;
-(void)closeNuxAnimated:(BOOL)arg1 ;
-(id)viewControllerForPresentation;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2 ;
-(Class)serverContextClass;
-(void)prepareWithServerContext:(id)arg1 ;
-(NSString *)nuxID;
-(NSArray *)triggerIDs;
-(int)nuxType;
-(void)setNuxCoordinator:(id<FBNuxDelegate>)arg1 ;
-(BOOL)_isWithinCooldownPeriod;
-(void)_loadNUXController:(id)arg1 ;
-(BOOL)_isEnabled;
-(void)_loadDataIfNeeded;
-(id)initWithSession:(id)arg1 ;
@end
