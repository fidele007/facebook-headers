/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBPhotoComponentViewDelegate.h>
#import <Facebook/FBForceTouchIntentProvider.h>

@class NSString;

@interface FBPhotoComponentController : CKComponentController <FBPhotoComponentViewDelegate, FBForceTouchIntentProvider> {

	id _presentingView;
	BOOL _presentingViewHidden;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)forceTouchIntentAtPoint:(CGPoint)arg1 sourceView:(id)arg2 ;
-(id)newCloneViewWithInfo:(id)arg1 ;
-(id)updateSourceInfo:(id)arg1 ;
-(void)startedUsingCloneViewOrLayer;
-(void)finishedUsingCloneViewOrLayer;
-(void)componentDidAcquireView;
-(void)componentWillRelinquishView;
-(void)_updatedpresentingViewHidden:(BOOL)arg1 ;
-(void)_cleanpresentingView;
-(void)photoComponentViewDidDownloadImage:(id)arg1 ;
@end

