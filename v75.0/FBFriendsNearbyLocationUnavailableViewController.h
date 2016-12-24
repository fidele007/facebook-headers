/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFNFacepileViewDelegate.h>

@protocol FBFriendsNearbyDataSource;
@class FBUserSession, FBLocationAccessManager, FBFNInlineUpsellDataSource, FBFNNUXController, NSString;

@interface FBFriendsNearbyLocationUnavailableViewController : UIViewController <FBFNFacepileViewDelegate> {

	FBUserSession* _session;
	FBLocationAccessManager* _locationAccessManager;
	FBFNInlineUpsellDataSource* _upsellDataSource;
	FBFNNUXController* _customizedNuxController;
	id<FBFriendsNearbyDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<FBFriendsNearbyDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapTitleText:(id)arg1 ;
-(void)_requestLocationAuthorization;
-(void)_showInformationalNux;
-(id)initWithSession:(id)arg1 locationAccessManager:(id)arg2 dataSource:(id)arg3 upsellDataSource:(id)arg4 ;
-(void)setDataSource:(id<FBFriendsNearbyDataSource>)arg1 ;
-(id<FBFriendsNearbyDataSource>)dataSource;
-(void)loadView;
@end
