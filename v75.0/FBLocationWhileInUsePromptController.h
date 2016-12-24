/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBLocationAccessManagerDelegate.h>
#import <Facebook/FBNuxPresenter.h>
#import <Facebook/FBSelfPresentingNux.h>

@protocol FBNuxDelegate;
@class FBUserSession, FBLocationAccessManager, NSString, NSArray, NSDictionary;

@interface FBLocationWhileInUsePromptController : NSObject <FBLocationAccessManagerDelegate, FBNuxPresenter, FBSelfPresentingNux> {

	FBUserSession* _session;
	FBLocationAccessManager* _locationAccessManager;
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
-(void)locationAccessManager:(id)arg1 accessGranted:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2 ;
-(void)closeNuxAnimated:(BOOL)arg1 ;
-(id)viewControllerForPresentation;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2 ;
-(NSString *)nuxID;
-(NSArray *)triggerIDs;
-(int)nuxType;
-(void)setNuxCoordinator:(id<FBNuxDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
