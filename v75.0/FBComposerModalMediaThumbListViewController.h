/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/FBComposerModalMediaThumbListViewDelegate.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBDismissalConfirmationViewControllerProtocol.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>
#import <Facebook/FBComposerViewComponentListener.h>

@protocol FBComposerUpdateHandler, FBMediaDataSourceManagerFactory, FBPhotoTaggingAssetObserver;
@class FBComposerModalMediaThumbListView, FBComposerCompositionState, FBComposerMediaThumbListToolbox, FBImageFilterLogger, FBUserSession, FBKeyboardObserver, NSString;

@interface FBComposerModalMediaThumbListViewController : UIViewController <UIScrollViewDelegate, FBComposerModalMediaThumbListViewDelegate, FBKeyboardObserverDelegate, FBDismissalConfirmationViewControllerProtocol, FBComposerCompositionStateChangedListener, FBComposerViewComponentListener> {

	FBComposerModalMediaThumbListView* _mediaThumbListView;
	FBComposerCompositionState* _currentCompositionState;
	id<FBComposerUpdateHandler> _composerUpdateHandler;
	id<FBMediaDataSourceManagerFactory> _mediaDataSourceManagerFactory;
	FBComposerMediaThumbListToolbox* _mediaThumbListToolbox;
	id<FBPhotoTaggingAssetObserver> _photoTaggingAssetObserver;
	FBImageFilterLogger* _imageFilterLogger;
	FBUserSession* _session;
	FBKeyboardObserver* _keyboardObserver;
	BOOL _hideKeyboardOnMediaTap;
	BOOL _shouldScrollToTappedMediaItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserverKeyboardDidShow:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(void)handleComposerUpdate:(id)arg1 ;
-(void)tappedAttachmentWithDesiredUpdate:(id)arg1 ;
-(void)tappedActivityAttachment;
-(void)tappedAttachment;
-(void)tappedAttachmentWithUpdate:(id)arg1 ;
-(void)didTapRemoveMediaAttachment:(id)arg1 ;
-(void)modifiedEditsForMediaAttachment:(id)arg1 ;
-(void)removedTagsEdge:(id)arg1 fromAttachment:(id)arg2 ;
-(void)tappedSharedLinkChevron;
-(void)tappedSharedLink:(id)arg1 ;
-(void)tappedHeaderActionButton;
-(id)initWithComposerUpdateHandler:(id)arg1 mediaDataSourceManagerFactory:(id)arg2 imageFilterLogger:(id)arg3 photoTaggingAssetObserver:(id)arg4 mutableTaggableCollectionProvider:(id)arg5 session:(id)arg6 ;
-(BOOL)shouldDismissViewController;
-(void)didTapWriteSprout;
-(void)statusTextDidChangeWithContext:(id)arg1 ;
-(void)didToggle360PhotoForMediaAttachment:(id)arg1 ;
-(void)didCreateSphericalParametersForMediaAttachment:(id)arg1 sphericalParameters:(id)arg2 andNewThumbnailImage:(id)arg3 ;
-(void)_didDismiss;
-(void)setupViewBecauseOnIpadWeCantDoItInLoadView;
-(void)updateAddMediaButtonAllowedForThumbListView;
-(void)_handleReplaceUpdateForMultiPickerAttachment:(id)arg1 ;
-(void)_ensureRectVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)updateContentInsetWithKeyboardFrame:(CGRect)arg1 ;
-(void)composerModalMediaThumbList:(id)arg1 needsRectVisible:(CGRect)arg2 inView:(id)arg3 forceToBottomOfVisibleRegion:(BOOL)arg4 animated:(BOOL)arg5 ;
-(void)composerModalMediaThumbListDidUpdateAttachments:(id)arg1 ;
-(void)composerModalMediaThumbListDidTapAddPhotos:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

