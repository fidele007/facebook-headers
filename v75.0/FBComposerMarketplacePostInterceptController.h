/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerMarketplacePostInterceptViewControllerDelegate.h>
#import <Facebook/FBComposerPickerController.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerMarketplacePostInterceptControllerDelegate;
@class FBUserSession, FBComposerMarketplacePostInterceptViewController, NSString, FBComposerMarketplaceCrossPostSetting;

@interface FBComposerMarketplacePostInterceptController : NSObject <FBComposerMarketplacePostInterceptViewControllerDelegate, FBComposerPickerController, FBComposerCompositionStateChangedListener> {

	FBUserSession* _session;
	FBComposerMarketplacePostInterceptViewController* _viewController;
	NSString* _groupID;
	FBComposerMarketplaceCrossPostSetting* _crossPostSetting;
	id<FBComposerMarketplacePostInterceptControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerMarketplacePostInterceptControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
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
-(void)marketplacePostInterceptControllerDidSelectCrossPost:(id)arg1 ;
-(void)marketplacePostInterceptControllerDidSelectOnlyGroup:(id)arg1 ;
-(void)setDelegate:(id<FBComposerMarketplacePostInterceptControllerDelegate>)arg1 ;
-(id<FBComposerMarketplacePostInterceptControllerDelegate>)delegate;
@end

