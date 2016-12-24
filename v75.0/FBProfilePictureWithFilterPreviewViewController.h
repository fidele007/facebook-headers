/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBMediaGalleryBannerTapHandlerProtocol.h>

@protocol FBMediaGalleryBannerProviderProtocol, FBProfilePictureWithFilterPreviewViewControllerDelegate;
@class FBUserSession, UIViewController, UIView, UIImageView, FBLoadingIndicatorView, UIImage, NSDate, NSString;

@interface FBProfilePictureWithFilterPreviewViewController : UIViewController <FBMediaGalleryBannerTapHandlerProtocol> {

	FBUserSession* _session;
	id<FBMediaGalleryBannerProviderProtocol> _bannerProvider;
	UIViewController* _bannerViewController;
	UIView* _privacyMessageView;
	UIImageView* _imageView;
	id<FBProfilePictureWithFilterPreviewViewControllerDelegate> _delegate;
	FBLoadingIndicatorView* _loadingIndicatorView;
	UIImage* _capturedProfilePicture;
	UIImage* _stickerImage;
	NSDate* _defaultExpirationTime;
	NSString* _customColloquialTermString;
	NSString* _currentProfilePictureUri;
	UIImage* _finalImage;

}

@property (nonatomic,copy) NSString * currentProfilePictureUri;              //@synthesize currentProfilePictureUri=_currentProfilePictureUri - In the implementation block
@property (nonatomic,readonly) UIImage * finalImage;                         //@synthesize finalImage=_finalImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapBack;
-(long long)getExpirationTime;
-(void)didTapBanner;
-(void)didChooseTime;
-(void)setCurrentProfilePictureUri:(NSString *)arg1 ;
-(id)initWithSession:(id)arg1 bannerProvider:(id)arg2 delegate:(id)arg3 capturedProfilePicture:(id)arg4 stickerImage:(id)arg5 defaultExpirationTime:(id)arg6 ;
-(UIImage *)finalImage;
-(void)_didTapUse;
-(void)_createExpiringProfilePictureBannerViewController;
-(void)_useCurrentProfilePicture:(id)arg1 ;
-(BOOL)_defaultExpirationTimeValid;
-(NSString *)currentProfilePictureUri;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)accessibilityPerformEscape;
@end
