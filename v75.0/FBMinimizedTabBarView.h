/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMinimizedTabBarViewDelegate;
@class UILabel, UIButton, CAShapeLayer;

@interface FBMinimizedTabBarView : UIView {

	UILabel* _titleLabel;
	UIButton* _dismissButton;
	CAShapeLayer* _progressLayer;
	int _totalNumberOfTabs;
	UIButton* _browseAllTabsButton;
	id<FBMinimizedTabBarViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMinimizedTabBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_dismissButtonTapped:(id)arg1 ;
-(void)_browseAllTabsButtonTapped:(id)arg1 ;
-(void)_minimizedTabBarViewTapped:(id)arg1 ;
-(void)setTotalNumberOfTabs:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMinimizedTabBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id<FBMinimizedTabBarViewDelegate>)delegate;
-(void)setProgress:(double)arg1 ;
@end
