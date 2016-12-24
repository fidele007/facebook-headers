/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>

@class UIButton, UICollectionView, UISearchBar, UIView, UILabel, UIColor, NSString;

@interface FBFeedAwesomizerSearchView : UIView <FBAccessibilityInvalidationEventsListener> {

	UIButton* _doneSearchButton;
	UICollectionView* _contentView;
	UISearchBar* _searchBar;
	UIView* _headerView;
	UIView* _searchBottomBorder;
	UILabel* _noResultLabel;
	UIView* _noResultView;
	UIColor* _themeColor;
	double _keyboardHeight;
	long long _style;

}

@property (nonatomic,readonly) UIButton * doneSearchButton;              //@synthesize doneSearchButton=_doneSearchButton - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar;                  //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) UIView * noResultView;                    //@synthesize noResultView=_noResultView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveAccessibilityInvalidation;
-(id)initWithThemeColor:(id)arg1 contentView:(id)arg2 searchDelegate:(id)arg3 displayStyle:(long long)arg4 ;
-(UIButton *)doneSearchButton;
-(void)showDoneButton;
-(UIView *)noResultView;
-(void)setFramesIn;
-(void)setFramesOut;
-(void)dealloc;
-(void)layoutSubviews;
-(UISearchBar *)searchBar;
-(void)keyboardDidShow:(id)arg1 ;
-(void)animateOut;
-(void)animateIn;
-(void)updateFont;
@end
