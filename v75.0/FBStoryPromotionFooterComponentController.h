/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/FBLWIBoostedComponentTapHandlerDelegate.h>

@class FBLWIBoostedComponentTapHandler, FBFeedUnitNuxPresenter;

@interface FBStoryPromotionFooterComponentController : CKComponentController <FBLWIBoostedComponentTapHandlerDelegate> {

	FBLWIBoostedComponentTapHandler* _boostedComponentTapHandler;
	FBFeedUnitNuxPresenter* _nuxPresenter;

}
+(id)componentCellContainingView:(id)arg1 ;
-(void)didMount;
-(void)componentTreeDidDisappear;
-(void)didUnmount;
-(void)boostedComponentTapHandler:(id)arg1 openViewController:(id)arg2 ;
-(void)boostedComponentTapHandler:(id)arg1 openURL:(id)arg2 ;
-(void)componentTreeWillAppear;
-(void)didTapBoostButton;
-(void)didTapInsights;
-(id)currentHostingView;
@end
