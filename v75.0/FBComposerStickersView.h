/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerPhotoOverlaysView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBComposerPhotoOverlaysViewProtocol.h>

@protocol FBComposerStickersViewDelegate;
@class FBUserSession, NSString;

@interface FBComposerStickersView : FBComposerPhotoOverlaysView <UIGestureRecognizerDelegate, FBComposerPhotoOverlaysViewProtocol> {

	double _imageRotation;
	FBUserSession* _session;
	id<FBComposerStickersViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerStickersViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)addImageToUseForBarForPhotoOverlay:(id)arg1 ;
-(id)addAccessibilityLabelForPhotoOverlaysView:(id)arg1 ;
-(id)deleteAccessibilityLabelForPhotoOverlaysView:(id)arg1 ;
-(void)composerPhotoOverlaysView:(id)arg1 didAddPhotoOverlayView:(id)arg2 ;
-(id)createPhotoOverlayViewForPhotoOverlay:(id)arg1 ;
-(id)createPhotoOverlayForOverlayView:(id)arg1 ;
-(void)composerPhotoOverlaysViewDidTapCancel:(id)arg1 ;
-(void)composerPhotoOverlaysViewDidTapDone:(id)arg1 ;
-(void)didChangePhotoAttachmentOverlay;
-(void)composerPhotoOverlaysView:(id)arg1 didTapPhotoOverlayView:(id)arg2 ;
-(void)composerPhotoOverlaysViewDidTapAddAttachmentsButton:(id)arg1 ;
-(void)composerPhotoOverlaysView:(id)arg1 didRemovePhotoOverlayView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 photoOverlayLayer:(id)arg2 backgroundImage:(id)arg3 imageRotation:(double)arg4 topBarConfiguration:(id)arg5 session:(id)arg6 logger:(id)arg7 assetID:(id)arg8 bannerView:(id)arg9 privacyMessageView:(id)arg10 ;
-(void)setDelegate:(id<FBComposerStickersViewDelegate>)arg1 ;
-(id<FBComposerStickersViewDelegate>)delegate;
@end

