/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Facebook/FBAvatarPickerControllerDelegate.h>
#import <Facebook/FBFundraiserAvatarPickerControllerDelegate.h>

@protocol FBEmbeddedTabBarListController, FBQueriedFundraiserFieldsProtocol;
@class UICollectionView, NSArray, NSMutableSet, FBMemModelObject, FBUserSession, NSString;

@interface FBReactionContactFundraiserSupportersViewController : UIViewController <UICollectionViewDelegate, FBAvatarPickerControllerDelegate, FBFundraiserAvatarPickerControllerDelegate> {

	id<FBEmbeddedTabBarListController> _tabBarController;
	UICollectionView* _collectionView;
	NSArray* _tabConfigs;
	NSMutableSet* _selectedAvatars;
	FBMemModelObject*<FBQueriedFundraiserFieldsProtocol> _fundraiser;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)incrementPersonalUpdatesCountForCampaign:(id)arg1 recipientCount:(id)arg2 session:(id)arg3 ;
-(BOOL)fb_showNavBarSearchField;
-(void)_didTapCancel;
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(id)initWithFundraiser:(id)arg1 session:(id)arg2 ;
-(void)fundraiserDidSelectAvatar:(id)arg1 ;
-(void)fundraiserDidUnselectAvatar:(id)arg1 ;
-(BOOL)fundraiserShouldSelectAvatar;
-(void)_setTabs;
-(void)_didTapNext;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

