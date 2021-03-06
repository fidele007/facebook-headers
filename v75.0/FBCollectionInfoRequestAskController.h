/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollectionInfoRequestAskTableViewControllerDelegate.h>

@protocol FBNavigationCoordinator;
@class FBMemPerson, FBMemInfoRequestField, FBCollectionInfoRequestAskTableViewController, NSString;

@interface FBCollectionInfoRequestAskController : NSObject <FBCollectionInfoRequestAskTableViewControllerDelegate> {

	FBMemPerson* _person;
	FBMemInfoRequestField* _infoRequestField;
	id<FBNavigationCoordinator> _navigationCoordinator;
	/*^block*/id _completion;
	FBCollectionInfoRequestAskTableViewController* _askTableViewController;
	BOOL _isPresenting;

}

@property (nonatomic,readonly) FBCollectionInfoRequestAskTableViewController * askTableViewController; 
@property (nonatomic,readonly) BOOL isPresenting;                                                                   //@synthesize isPresenting=_isPresenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)performAskRequestWithSession:(id)arg1 person:(id)arg2 collection:(id)arg3 infoRequestField:(id)arg4 message:(id)arg5 updateCallback:(/*^block*/id)arg6 ;
+(void)cancelAskRequestWithSession:(id)arg1 person:(id)arg2 collection:(id)arg3 infoRequestField:(id)arg4 updateCallback:(/*^block*/id)arg5 ;
+(void)_performAskRequestWithSession:(id)arg1 person:(id)arg2 collection:(id)arg3 infoRequestField:(id)arg4 message:(id)arg5 updateCallback:(/*^block*/id)arg6 ;
+(void)_setStatus:(id)arg1 withSession:(id)arg2 forPerson:(id)arg3 infoRequestField:(id)arg4 collection:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)_queuePerformer;
+(void)_cancelAskRequestWithSession:(id)arg1 person:(id)arg2 infoRequestField:(id)arg3 collection:(id)arg4 updateCallback:(/*^block*/id)arg5 ;
+(void)performAskRequestWithSession:(id)arg1 person:(id)arg2 infoRequestField:(id)arg3 message:(id)arg4 updateCallback:(/*^block*/id)arg5 ;
+(void)cancelAskRequestWithSession:(id)arg1 person:(id)arg2 infoRequestField:(id)arg3 updateCallback:(/*^block*/id)arg4 ;
-(void)presentAskViewForPerson:(id)arg1 withInfoRequestField:(id)arg2 usingNavigationCoordinator:(id)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentAskViewForPerson:(id)arg1 withInfoRequestField:(id)arg2 usingNavigationCoordinator:(id)arg3 title:(id)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(FBCollectionInfoRequestAskTableViewController *)askTableViewController;
-(void)_dismissAndResetAskViewAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAskViewAnimated:(BOOL)arg1 ;
-(void)_dismissAskView:(id)arg1 success:(BOOL)arg2 withMessage:(id)arg3 ;
-(void)collectionInfoRequestAskTableViewControllerDidPresent:(id)arg1 ;
-(void)collectionInfoRequestAskTableViewControllerDidDismiss:(id)arg1 ;
-(void)collectionInfoRequestAskTableViewControllerDidTapSendRequest:(id)arg1 withMessage:(id)arg2 andParameters:(id)arg3 ;
-(void)collectionInfoRequestAskTableViewControllerCancelButtonTapped:(id)arg1 ;
-(void)_reset;
-(BOOL)isPresenting;
@end

