/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBFeedUnitNuxPresenterViewProvider.h>

@protocol FBHasFeedUnitNuxProtocolFBFeedUnitNuxPresenterListener;
@class FBFeedUnitNuxPresenter;

@interface FBSaveButtonOverlayComponentController : CKComponentController <FBFeedUnitNuxPresenterViewProvider> {

	FBFeedUnitNuxPresenter* _nuxPresenter;
	id<FBHasFeedUnitNuxProtocol><FBFeedUnitNuxPresenterListener> _nuxHandler;
	BOOL _nuxMounted;

}
+(id)componentCellContainingView:(id)arg1 ;
-(void)didMount;
-(void)didRemount;
-(void)componentTreeDidDisappear;
-(void)didUnmount;
-(void)didUpdateComponent;
-(void)componentTreeWillAppear;
-(id)currentHostingView;
-(CGPoint)currentAnchorPoint;
-(id)currentAnchorView;
-(BOOL)hasView;
-(void)componentDidAcquireView;
-(void)_updateNux;
-(void)_addNuxHandler;
@end

