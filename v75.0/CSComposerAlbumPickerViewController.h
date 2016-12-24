/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBComposerPublicationProgressDisplayListener.h>

@protocol FBComposerPublicationProgressDisplayer, CSComposerAlbumPickerViewControllerDelegate;
@class FBUserSession, CSComposerAlbumPickerState, CSComposerAlbumPickerStateUpdateListenerAnnouncer, FBComponentViewController, UIView, NSString;

@interface CSComposerAlbumPickerViewController : UIViewController <FBComposerPublicationProgressDisplayListener> {

	FBUserSession* _session;
	CSComposerAlbumPickerState* _initialState;
	CSComposerAlbumPickerStateUpdateListenerAnnouncer* _stateUpdateAnnouncer;
	FBComponentViewController* _componentViewController;
	UIView* _overlayView;
	id<FBComposerPublicationProgressDisplayer> _publicationProgressDisplayer;
	id<CSComposerAlbumPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSComposerAlbumPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(void)_setupOverlayView;
-(void)_dismissPublicationProgressDisplay;
-(void)cancelButtonTappedForPublisherData:(id)arg1 withReason:(id)arg2 ;
-(void)dismissButtonTappedForPublisherData:(id)arg1 ;
-(void)retryButtonTappedForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForCancellationOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForTerminalFailureOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForTransientFailureOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForSuccessOfPublicationForPublisherData:(id)arg1 response:(id)arg2 ;
-(BOOL)shouldDismissViewController;
-(void)_setupNavigationBar;
-(void)_setupComponentViewController;
-(void)didTapCancel:(id)arg1 ;
-(id)initWithSession:(id)arg1 initialState:(id)arg2 stateUpdateAnnouncer:(id)arg3 ;
-(id)showPublicationProgressDisplayWithPostSuccessText:(id)arg1 ;
-(void)setDelegate:(id<CSComposerAlbumPickerViewControllerDelegate>)arg1 ;
-(id<CSComposerAlbumPickerViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_cancel;
@end

