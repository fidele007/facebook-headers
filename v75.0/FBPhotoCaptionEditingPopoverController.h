/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPhotoCaptionEditingViewControllerDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@protocol FBPhotoViewPopoverListener;
@class UIViewController, FBPopoverController, FBMemPhoto, FBUserSession, NSString;

@interface FBPhotoCaptionEditingPopoverController : NSObject <FBPhotoCaptionEditingViewControllerDelegate, FBPopoverControllerDelegate> {

	UIViewController* _parentViewController;
	id<FBPhotoViewPopoverListener> _popoverListener;
	FBPopoverController* _popoverController;
	FBMemPhoto* _photo;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)initWithParentViewController:(id)arg1 popoverListener:(id)arg2 photo:(id)arg3 session:(id)arg4 ;
-(void)_layoutPopover;
-(void)captionEditingViewControllerDidFinish;
-(void)relayoutPopover;
-(void)presentPopoverAnimated:(BOOL)arg1 ;
@end
