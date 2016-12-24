/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerGroupCommercePostInterceptViewControllerDelegate.h>
#import <Facebook/FBComposerPickerController.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerGroupCommercePostInterceptControllerDelegate;
@class FBUserSession, FBComposerGroupCommercePostInterceptViewController, NSString;

@interface FBComposerGroupCommercePostInterceptController : NSObject <FBComposerGroupCommercePostInterceptViewControllerDelegate, FBComposerPickerController, FBComposerCompositionStateChangedListener> {

	FBUserSession* _session;
	FBComposerGroupCommercePostInterceptViewController* _viewController;
	NSString* _groupID;
	id<FBComposerGroupCommercePostInterceptControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerGroupCommercePostInterceptControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 ;
-(id)presentableViewControllerWithNavigationPayload:(id)arg1 ;
-(unsigned long long)popoverStyle;
-(CGSize)popoverContentSizeForOrientation:(long long)arg1 ;
-(void)dismissPopoverController;
-(void)groupCommercePostInterceptControllerDidSelectUpsell:(id)arg1 ;
-(void)groupCommercePostInterceptControllerDidSelectPost:(id)arg1 ;
-(void)setDelegate:(id<FBComposerGroupCommercePostInterceptControllerDelegate>)arg1 ;
-(id<FBComposerGroupCommercePostInterceptControllerDelegate>)delegate;
@end
