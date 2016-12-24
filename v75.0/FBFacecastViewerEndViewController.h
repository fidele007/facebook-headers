/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFacecastViewerEndViewDelegate.h>
#import <Facebook/FBMediaUFIBarControllerPresentingViewController.h>

@protocol FBServiceTransactionMutating, FBFacecastViewerEndViewControllerDelegate;
@class FBUserSession, NSArray, NSString, FBMemFeedStory, FBMemVideo, FBMediaUFIBarController, FBFacecastViewerEndView;

@interface FBFacecastViewerEndViewController : UIViewController <FBFacecastViewerEndViewDelegate, FBMediaUFIBarControllerPresentingViewController> {

	FBUserSession* _session;
	NSArray* _upsellChannels;
	NSString* _customTitle;
	NSString* _customMessage;
	NSString* _analyticsModule;
	NSArray* _trackingCodes;
	FBMemFeedStory* _story;
	FBMemVideo* _video;
	id<FBServiceTransactionMutating> _token;
	id<FBFacecastViewerEndViewControllerDelegate> _delegate;
	FBMediaUFIBarController* _ufiController;

}

@property (nonatomic,retain) FBFacecastViewerEndView * view; 
@property (assign,nonatomic,__weak) id<FBFacecastViewerEndViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaUFIBarControllerDelegate> ufiDelegate; 
@property (nonatomic,readonly) FBMediaUFIBarController * ufiController;                                  //@synthesize ufiController=_ufiController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)facecastViewerEndViewDoneButtonTapped:(id)arg1 ;
-(void)facecastViewerEndView:(id)arg1 tappedChannel:(id)arg2 ;
-(void)facecastViewerEndView:(id)arg1 tappedIntentTarget:(id)arg2 ;
-(void)facecastViewerEndView:(id)arg1 tappedSubscribeButton:(BOOL)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_fetchVideoInformation;
-(void)_updateDescriptionForVideo:(id)arg1 ;
-(BOOL)canShowMoreOption;
-(void)dismissAfterDeletion;
-(void)disableDismissal;
-(void)enableDismissal;
-(id)initWithSession:(id)arg1 story:(id)arg2 video:(id)arg3 customTitle:(id)arg4 customMessage:(id)arg5 analyticsModule:(id)arg6 trackingCodes:(id)arg7 ;
-(void)setUfiDelegate:(id<FBMediaUFIBarControllerDelegate>)arg1 ;
-(id<FBMediaUFIBarControllerDelegate>)ufiDelegate;
-(FBMediaUFIBarController *)ufiController;
-(void)setDelegate:(id<FBFacecastViewerEndViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFacecastViewerEndViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end

