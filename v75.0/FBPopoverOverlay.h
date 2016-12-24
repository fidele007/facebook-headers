/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@protocol FBPopoverOverlayDelegate;
@class FBPopoverController, FBKVOController, UIViewController, UIView, NSString;

@interface FBPopoverOverlay : NSObject <FBPopoverControllerDelegate> {

	FBPopoverController* _popoverController;
	FBKVOController* _kvoController;
	BOOL _shouldRenderBackground;
	BOOL _shouldAutomaticallyResizeWithKeyboard;
	BOOL _centeredVertically;
	id<FBPopoverOverlayDelegate> _delegate;
	UIViewController* _containerViewController;
	/*^block*/id _didDismissBlock;
	UIView* _customOriginSourceView;
	CGSize _customContentSize;

}

@property (assign,nonatomic,__weak) id<FBPopoverOverlayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldRenderBackground;                               //@synthesize shouldRenderBackground=_shouldRenderBackground - In the implementation block
@property (nonatomic,readonly) UIViewController * containerViewController;              //@synthesize containerViewController=_containerViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController; 
@property (nonatomic,copy) id didDismissBlock;                                          //@synthesize didDismissBlock=_didDismissBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallyResizeWithKeyboard;                //@synthesize shouldAutomaticallyResizeWithKeyboard=_shouldAutomaticallyResizeWithKeyboard - In the implementation block
@property (assign,nonatomic) CGSize customContentSize;                                  //@synthesize customContentSize=_customContentSize - In the implementation block
@property (nonatomic,retain) UIView * customOriginSourceView;                           //@synthesize customOriginSourceView=_customOriginSourceView - In the implementation block
@property (assign,nonatomic) BOOL centeredVertically;                                   //@synthesize centeredVertically=_centeredVertically - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setBackgroundColor:(id)arg1 withBorderClass:(Class)arg2 ;
-(BOOL)fb_popoverControllerShouldDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)dismissPopoverOverlayAnimated:(BOOL)arg1 ;
-(void)setShouldAutomaticallyResizeWithKeyboard:(BOOL)arg1 ;
-(void)setDidDismissBlock:(id)arg1 ;
-(void)presentPopoverOverlayAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissPopoverOverlayAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCenteredVertically:(BOOL)arg1 ;
-(void)setShouldRenderBackground:(BOOL)arg1 ;
-(void)setCustomOriginSourceView:(UIView *)arg1 ;
-(void)setCustomContentSize:(CGSize)arg1 ;
-(double)_popoverBottomPadding;
-(double)_popoverTopPadding;
-(BOOL)shouldAutomaticallyResizeWithKeyboard;
-(CGSize)customContentSize;
-(BOOL)centeredVertically;
-(UIView *)customOriginSourceView;
-(BOOL)_delegateShouldDismiss;
-(id)didDismissBlock;
-(void)presentPopoverOverlayAnimated:(BOOL)arg1 ;
-(BOOL)shouldRenderBackground;
-(void)setDelegate:(id<FBPopoverOverlayDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBPopoverOverlayDelegate>)delegate;
-(UIViewController *)contentViewController;
-(void)updateLayout;
-(id)initWithContentViewController:(id)arg1 ;
-(UIViewController *)containerViewController;
@end

