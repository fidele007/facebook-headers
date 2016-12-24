/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBReactionTabSwitcherWithLabelsComponentViewDelegate;
@class UILabel, UIView, FBReactionSimpleButtonBar;

@interface FBReactionTabSwitcherWithLabelsComponentView : UIView {

	vector<std::__1::pair<NSAttributedString *, UIView *>, std::__1::allocator<std::__1::pair<NSAttributedString *, UIView *> > >* _labelViewPairs;
	UILabel* _cityName;
	UIView* _componentView;
	unsigned long long _selectedIndex;
	unsigned long long _renderIdiom;
	FBReactionSimpleButtonBar* _buttonBar;
	int _labelLocation;
	id<FBReactionTabSwitcherWithLabelsComponentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBReactionTabSwitcherWithLabelsComponentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_updateSelectedIndex:(unsigned long long)arg1 ;
-(void)_updateHiddenStateForViews;
-(id)initWithFrame:(CGRect)arg1 labelViewPairs:(vector<std::__1::pair<NSAttributedString *, UIView *>, std::__1::allocator<std::__1::pair<NSAttributedString *, UIView *> > >*)arg2 renderIdiom:(unsigned long long)arg3 renderLabelLocation:(int)arg4 ;
-(void)setDelegate:(id<FBReactionTabSwitcherWithLabelsComponentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBReactionTabSwitcherWithLabelsComponentViewDelegate>)delegate;
@end
