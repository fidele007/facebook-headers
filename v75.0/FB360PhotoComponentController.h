/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKStatefulViewComponentController.h>
#import <Facebook/FB360PhotoOnScreenContainer.h>
#import <Facebook/FB360DetachablePhotoViewProvider.h>

@class UITapGestureRecognizer, FB360PhotoOnScreenController, NSString;

@interface FB360PhotoComponentController : CKStatefulViewComponentController <FB360PhotoOnScreenContainer, FB360DetachablePhotoViewProvider> {

	UITapGestureRecognizer* _tapGestureRecognizer;
	FB360PhotoOnScreenController* _onScreenController;
	double _visibleVerticalPercentage;

}

@property (nonatomic,retain) FB360PhotoOnScreenController * onScreenController;              //@synthesize onScreenController=_onScreenController - In the implementation block
@property (assign,nonatomic) double visibleVerticalPercentage;                               //@synthesize visibleVerticalPercentage=_visibleVerticalPercentage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
+(long long)maximumPoolSize:(id)arg1 ;
-(void)willMount;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(id)detachRendererView;
-(id)rendererViewContainerView;
-(void)attachRendererView:(id)arg1 ;
-(FB360PhotoOnScreenController *)onScreenController;
-(void)setOnScreenController:(FB360PhotoOnScreenController *)arg1 ;
-(void)updateFromVisiblePercentage;
-(CGRect)viewFrameOnScreen;
-(CGRect)containingWindowBounds;
-(void)setVisibleVerticalPercentage:(double)arg1 ;
-(double)visibleVerticalPercentage;
-(void)_handleTap:(id)arg1 ;
@end

