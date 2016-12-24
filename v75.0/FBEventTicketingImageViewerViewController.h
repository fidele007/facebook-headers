/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBRichPhotoViewDelegate.h>

@class FBUserSession, NSURL, UIButton, FBRichPhotoView, UITapGestureRecognizer, NSString;

@interface FBEventTicketingImageViewerViewController : UIViewController <FBRichPhotoViewDelegate> {

	FBUserSession* _session;
	NSURL* _imageURL;
	UIButton* _closeButton;
	FBRichPhotoView* _richPhotoView;
	UITapGestureRecognizer* _tapRecognizer;
	UITapGestureRecognizer* _doubleTapRecognizer;
	BOOL _controlsHidden;

}

@property (assign,nonatomic) BOOL controlsHidden;                   //@synthesize controlsHidden=_controlsHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)photoView:(id)arg1 didTapTagsEdge:(id)arg2 ;
-(id)photoTaggingSearchControllerForTarget:(id)arg1 ownerFBID:(id)arg2 actorFBID:(id)arg3 ;
-(void)photoViewWillBeginZoomingIn:(id)arg1 ;
-(void)photoViewDidZoomOut:(id)arg1 ;
-(id)initWithSession:(id)arg1 imageURL:(id)arg2 ;
-(void)didPressCloseButton;
-(BOOL)controlsHidden;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_handleDoubleTap:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)setControlsHidden:(BOOL)arg1 ;
@end
