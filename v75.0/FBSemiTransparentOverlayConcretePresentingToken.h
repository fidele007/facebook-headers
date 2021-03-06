/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSemiTransparentOverlayPresentingToken.h>

@class FBSemiTransparentOverlayPresentingView, FBSemiTransparentOverlayView;

@interface FBSemiTransparentOverlayConcretePresentingToken : NSObject <FBSemiTransparentOverlayPresentingToken> {

	FBSemiTransparentOverlayPresentingView* _presentingView;
	FBSemiTransparentOverlayView* _overlayView;

}

@property (assign,nonatomic,__weak) FBSemiTransparentOverlayPresentingView * presentingView;              //@synthesize presentingView=_presentingView - In the implementation block
@property (assign,nonatomic,__weak) FBSemiTransparentOverlayView * overlayView;                           //@synthesize overlayView=_overlayView - In the implementation block
-(void)hideOverlayAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPresentingView:(id)arg1 overlayView:(id)arg2 ;
-(FBSemiTransparentOverlayPresentingView *)presentingView;
-(void)setPresentingView:(FBSemiTransparentOverlayPresentingView *)arg1 ;
-(void)setOverlayView:(FBSemiTransparentOverlayView *)arg1 ;
-(FBSemiTransparentOverlayView *)overlayView;
@end

