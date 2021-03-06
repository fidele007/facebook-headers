/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBDBLViewConfiguring;
@class FBImageDownloader, FBAuthenticationRoundedImageView, FBDBLStoredUser, FBDBLUserChooserSelectionView;

@interface FBDBLUserChooserSelectionViewController : UIViewController {

	id<FBDBLViewConfiguring> _configuration;
	FBImageDownloader* _imageDownloader;
	FBAuthenticationRoundedImageView* _userImageView;
	FBDBLStoredUser* _userInfo;
	FBDBLUserChooserSelectionView* _userChooserSelectionView;

}

@property (nonatomic,readonly) FBDBLStoredUser * userInfo;                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) FBDBLUserChooserSelectionView * userChooserSelectionView;              //@synthesize userChooserSelectionView=_userChooserSelectionView - In the implementation block
-(id)analyticsModule;
-(FBDBLUserChooserSelectionView *)userChooserSelectionView;
-(id)initWithUserInfo:(id)arg1 configuration:(id)arg2 imageDownloader:(id)arg3 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(FBDBLStoredUser *)userInfo;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

