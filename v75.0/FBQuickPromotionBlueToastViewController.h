/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBNuxBannerViewController.h>

@protocol FBNuxBannerControllerDelegate;
@class FBQuickPromotionBlueToastView, FBUserSession, FBQPPromotion, NSString;

@interface FBQuickPromotionBlueToastViewController : UIViewController <FBNuxBannerViewController> {

	FBQuickPromotionBlueToastView* _blueToastView;
	FBUserSession* _session;
	id<FBNuxBannerControllerDelegate> _delegate;
	FBQPPromotion* _promotion;

}

@property (nonatomic,retain) FBQPPromotion * promotion;                                      //@synthesize promotion=_promotion - In the implementation block
@property (assign,nonatomic,__weak) id<FBNuxBannerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBQPPromotion *)promotion;
-(void)setPromotion:(FBQPPromotion *)arg1 ;
-(void)_handleDismissButtonClick:(id)arg1 ;
-(void)_handleButtonTapEvent:(id)arg1 ;
-(id)initWithSession:(id)arg1 promotion:(id)arg2 ;
-(void)setDelegate:(id<FBNuxBannerControllerDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id<FBNuxBannerControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_handlePrimaryAction:(id)arg1 ;
@end

