/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBSportsInternalTestingViewDelegate.h>

@class FBUserSession, FBSportsMatchesTableViewDataSource, NSString;

@interface FBSportsInternalTestingViewController : UIViewController <FBSportsInternalTestingViewDelegate> {

	FBUserSession* _session;
	FBSportsMatchesTableViewDataSource* _dataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)userDidOpenMatchWithPageID:(id)arg1 forInternalTestingView:(id)arg2 ;
-(void)userDidOpenOlympicsForInternalTestingView:(id)arg1 ;
-(void)userDidSelectDate:(id)arg1 forInternalTestingView:(id)arg2 ;
-(void)userDidTapMarchMadnessForInternalTestingView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)initWithSession:(id)arg1 ;
@end

