/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPopoverControllerDelegate.h>

@protocol FBComposerDestinationNavigatorPopoverControllerHelperDelegate;
@class NSString;

@interface FBComposerDestinationNavigatorPopoverControllerHelper : NSObject <FBPopoverControllerDelegate> {

	id<FBComposerDestinationNavigatorPopoverControllerHelperDelegate> _delegate;
	BOOL _hasRegisterNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_popoverControllerShouldDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)_orientationChanged:(id)arg1 ;
-(void)presentPopoverControllerForNode:(id)arg1 navigationInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_positionPopoverNavigationNode:(id)arg1 orientation:(long long)arg2 ;
-(void)_updatePopoverPosition;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
@end

