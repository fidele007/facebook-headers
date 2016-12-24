/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBHotspotHelperMapNoWifiAvailableViewDelegate;
@class UILabel, UIButton, UIView;

@interface FBHotspotHelperMapNoWifiAvailableView : UIView {

	UILabel* _wifiNotFoundLabel;
	UIButton* _tryAgainButton;
	UIView* _horizontalLine;
	id<FBHotspotHelperMapNoWifiAvailableViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBHotspotHelperMapNoWifiAvailableViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapTryAgainButton;
-(void)setDelegate:(id<FBHotspotHelperMapNoWifiAvailableViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id<FBHotspotHelperMapNoWifiAvailableViewDelegate>)delegate;
@end
