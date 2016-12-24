/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBMediaTopNavigationBarDelegation.h>
#import <Facebook/FBComposerStickersViewDelegate.h>
#import <Facebook/FBMStickerInputViewDelegate.h>
#import <Facebook/FBMStickerStoreViewControllerDelegate.h>
#import <Facebook/FBComposerStickersPickerTopBarDelegate.h>
#import <Facebook/FBComposerPhotoOverlayAttachmentsViewController.h>
#import <Facebook/FBMediaGalleryToolProtocol.h>

@protocol FBMediaGalleryBannerProviderProtocol, FBComposerPhotoOverlayViewControllerDelegate;
@class NSString, UIViewController, UIImage, FBStickersInPhotosLogger, UIView, FBUserSession, FBMStickerInputView, NSArray, FBComposerStickersPickerTopBar, FBComposerStickersView, FBMediaGalleryTopBarConfiguration;

@interface FBComposerStickersViewController : UIViewController <FBMediaTopNavigationBarDelegation, FBComposerStickersViewDelegate, FBMStickerInputViewDelegate, FBMStickerStoreViewControllerDelegate, FBComposerStickersPickerTopBarDelegate, FBComposerPhotoOverlayAttachmentsViewController, FBMediaGalleryToolProtocol> {

	BOOL _addedInitialStickers;
	id<FBMediaGalleryBannerProviderProtocol> _bannerProvider;
	UIViewController* _bannerViewController;
	BOOL _didChangePhotoOverlay;
	double _imageRotation;
	UIImage* _imageToAddStickersTo;
	BOOL _isStickersPickerPresented;
	FBStickersInPhotosLogger* _logger;
	unsigned long long _numberOfStickersAdded;
	UIView* _privacyMessageView;
	BOOL _removedOutOfBoundsStickers;
	FBUserSession* _session;
	BOOL _shouldStartWithStickerPack;
	FBMStickerInputView* _stickerInputView;
	NSArray* _stickersInformation;
	UIImage* _stickersLayer;
	FBComposerStickersPickerTopBar* _stickersPickerTopBar;
	FBComposerStickersView* _stickersView;
	FBMediaGalleryTopBarConfiguration* _topBarConfiguration;
	NSString* _assetID;
	id<FBComposerPhotoOverlayViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerPhotoOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * assetID;                                                              //@synthesize assetID=_assetID - In the implementation block
-(NSString *)assetID;
-(void)didTapLeftButton:(id)arg1 ;
-(void)didSelectDismissStickerStoreViewController:(id)arg1 ;
-(void)stickerStoreViewController:(id)arg1 didSelectViewStickerPack:(id)arg2 ;
-(void)setAssetID:(NSString *)arg1 ;
-(void)_showStickerPicker;
-(void)stickerInputView:(id)arg1 didSelectSticker:(id)arg2 ;
-(void)didSelectStickerStoreWith:(unsigned long long)arg1 sourceView:(id)arg2 ;
-(void)stickerInputView:(id)arg1 didBeginSearching:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stickerInputView:(id)arg1 didEndSearching:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stickerInputView:(id)arg1 didTapTabWithTitle:(id)arg2 ;
-(void)mediaGalleryDidPressCurrentTool;
-(void)mediaGalleryWillPresentTool:(unsigned long long)arg1 ;
-(id)initWithImage:(id)arg1 stickersLayer:(id)arg2 stickersInformation:(id)arg3 imageRotation:(double)arg4 photoAssetID:(id)arg5 logger:(id)arg6 topBarConfiguration:(id)arg7 shouldStartWithStickerPack:(BOOL)arg8 session:(id)arg9 bannerProvider:(id)arg10 ;
-(unsigned long long)getMediaGalleryToolType;
-(id)overlayAttachmentsImageLayer;
-(id)photoOverlayAttachmentsInformation;
-(void)didTapRightButton:(id)arg1 ;
-(void)_dismissStickerPickerWithCompletion:(/*^block*/id)arg1 ;
-(void)_informDelegateDoneWithNavBarHit:(BOOL)arg1 ;
-(void)_doneButtonWasHit;
-(void)composerStickersViewDidRemoveSticker:(id)arg1 ;
-(void)composerStickersViewDidTapCancel:(id)arg1 ;
-(void)composerStickersViewDidTapDone:(id)arg1 ;
-(void)composerStickersPickerTopBarDidHitCloseButton:(id)arg1 ;
-(void)composerPhotoOverlayViewDidTapAddButton:(id)arg1 ;
-(void)composerPhotoOverlayViewDidChangeOverlay:(id)arg1 ;
-(void)setDelegate:(id<FBComposerPhotoOverlayViewControllerDelegate>)arg1 ;
-(id<FBComposerPhotoOverlayViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

