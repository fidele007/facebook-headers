/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBRemotePhotoSelectionDelegate.h>
#import <Facebook/FBPresentableViewController.h>
#import <Facebook/FBProfileMediaNavigationProtocol.h>
#import <Facebook/FBMediaPickerViewControllerDelegate.h>

@protocol FBUpdateUIViewControllerStateHandler, FBProfilePicRemotePhotoSelectionDelegate;
@class FBUserSession, FBRemotePhotoSelectionController, FBProfileMediaDataPack, FBProfileMediaDependencyPack, NSString;

@interface FBProfilePicRemotePhotoSelectionController : UIViewController <FBRemotePhotoSelectionDelegate, FBPresentableViewController, FBProfileMediaNavigationProtocol, FBMediaPickerViewControllerDelegate> {

	FBUserSession* _session;
	FBRemotePhotoSelectionController* _selectionController;
	id<FBUpdateUIViewControllerStateHandler> _updateUIViewControllerStateHandler;
	FBProfileMediaDataPack* _dataPack;
	FBProfileMediaDependencyPack* _dependencyPack;
	id<FBProfilePicRemotePhotoSelectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBProfilePicRemotePhotoSelectionDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
@property (assign,nonatomic,__weak) id<FBUpdateUIViewControllerStateHandler> updateUIViewControllerStateHandler;              //@synthesize updateUIViewControllerStateHandler=_updateUIViewControllerStateHandler - In the implementation block
@property (nonatomic,copy,readonly) FBProfileMediaDataPack * dataPack;                                                        //@synthesize dataPack=_dataPack - In the implementation block
@property (nonatomic,readonly) FBProfileMediaDependencyPack * dependencyPack;                                                 //@synthesize dependencyPack=_dependencyPack - In the implementation block
+(id)createViewController:(id)arg1 dependencyPack:(id)arg2 ;
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(void)mediaPickerPermissionDenied:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didSelectMediaAssetAttachments:(id)arg2 fromSource:(long long)arg3 currentPhotoAssetShown:(id)arg4 ;
-(void)remotePhotoSelectionController:(id)arg1 didSelectPhoto:(id)arg2 view:(id)arg3 ;
-(void)remotePhotoSelectionControllerDidCancel:(id)arg1 ;
-(id)initWithMediaSets:(id)arg1 cameraRollVC:(id)arg2 rankedPhotosVC:(id)arg3 shouldShowSuggestedPhotos:(BOOL)arg4 mediaFilter:(unsigned long long)arg5 dataPack:(id)arg6 dependencyPack:(id)arg7 listener:(id)arg8 ;
-(id)checkValidation;
-(id<FBUpdateUIViewControllerStateHandler>)updateUIViewControllerStateHandler;
-(void)setUpdateUIViewControllerStateHandler:(id<FBUpdateUIViewControllerStateHandler>)arg1 ;
-(FBProfileMediaDataPack *)dataPack;
-(FBProfileMediaDependencyPack *)dependencyPack;
-(void)_didTapSearch:(id)arg1 ;
-(void)setDelegate:(id<FBProfilePicRemotePhotoSelectionDelegate>)arg1 ;
-(id<FBProfilePicRemotePhotoSelectionDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

