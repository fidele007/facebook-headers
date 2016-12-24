/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Facebook/FBModalWebFlowDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol FBPhotoActionSheetOptionsProvider, FBNavigationCoordinator, FBPhotoDeletionProtocol, FBIntentHandler, FBPhotoActionSheetControllerDelegate;
@class UIAlertView, UIView, FBProfilePicturePickerStatusView, FBUserSession, FBViewerContext, NSArray, UIActionSheet, NSString, FBMemPhoto;

@interface FBPhotoActionSheetController : NSObject <UIActionSheetDelegate, FBModalWebFlowDelegate, UIPopoverPresentationControllerDelegate, UIAlertViewDelegate> {

	CGRect _actionSheetDisplayRect;
	UIAlertView* _profilePrivacyAlertView;
	id<FBPhotoActionSheetOptionsProvider> _actionSheetOptionsProvider;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBPhotoDeletionProtocol> _photoDeletionController;
	UIView* _presentingView;
	FBProfilePicturePickerStatusView* _profilePictureStatusView;
	FBUserSession* _session;
	FBViewerContext* _targetForMakingProfilePicture;
	BOOL _showingAlertController;
	id<FBIntentHandler> _intentHandler;
	NSArray* _actionMenuItems;
	UIActionSheet* _actionSheet;
	NSString* _analyticsModule;
	id<FBPhotoActionSheetControllerDelegate> _delegate;
	FBMemPhoto* _photo;

}

@property (nonatomic,copy) NSArray * actionMenuItems;                                               //@synthesize actionMenuItems=_actionMenuItems - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                                           //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;                                              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (assign,nonatomic,__weak) id<FBPhotoActionSheetControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBMemPhoto * photo;                                                    //@synthesize photo=_photo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)actionSheetRectFromTouchPoint:(CGPoint)arg1 ;
+(unsigned long long)defaultPhotoActionSheetOptionsForPhoto:(id)arg1 session:(id)arg2 ;
+(void)setAllowsSendAsMessage:(BOOL)arg1 ;
-(NSString *)analyticsModule;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)_showPhotoPermissionView;
-(BOOL)actionSheetIsVisible;
-(id)initWithPhoto:(id)arg1 actionSheetOptionsProvider:(id)arg2 delegate:(id)arg3 analyticsModule:(id)arg4 navigationCoordinator:(id)arg5 intentHandler:(id)arg6 session:(id)arg7 ;
-(void)displayActionSheetFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_editPrivacy;
-(void)_cleanUpActionSheet;
-(id)_photoAlertControllerWithModalViewCoordinator:(id)arg1 actionMenuItems:(id)arg2 ;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(void)_recreateActionSheetAtRect:(CGRect)arg1 ;
-(void)dismissActionSheetAnimated:(BOOL)arg1 ;
-(BOOL)_haveDelegateHandleActionSheetOptionIfNeeded:(unsigned long long)arg1 ;
-(void)_deletePhoto;
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)_showOverlayForSavePhotoFeedbackWithString:(id)arg1 backgroundColor:(id)arg2 ;
-(void)displayShareActionSheetFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)handleTransitionToSize:(CGSize)arg1 rectBlock:(/*^block*/id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)_sendAsMessage;
-(void)_confirmDeletePhoto;
-(void)_confirmUntagPhoto;
-(void)_showDeleteFailedAlertView;
-(void)_editCaption;
-(void)_changeSubscription;
-(void)_installApp;
-(void)_openInApp;
-(void)_reportPhoto;
-(void)_savePhotoToAssetLibrary;
-(void)_shareButtonHit;
-(void)_usePhotoAsCoverPhoto;
-(UIActionSheet *)actionSheet;
-(void)_usePhotoAsProfilePicture;
-(void)_usePhotoAsProfilePictureForPage;
-(void)setDelegate:(id<FBPhotoActionSheetControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPhotoActionSheetControllerDelegate>)delegate;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)actionSheetCancel:(id)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(FBMemPhoto *)photo;
-(NSArray *)actionMenuItems;
-(void)setActionMenuItems:(NSArray *)arg1 ;
@end
