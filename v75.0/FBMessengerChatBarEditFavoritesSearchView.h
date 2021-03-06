/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBSearchBar, UIButton, UIImageView;

@interface FBMessengerChatBarEditFavoritesSearchView : UIView {

	int _style;
	FBSearchBar* _searchBar;
	UIButton* _rightButton;
	UIImageView* _rightButtonView;

}

@property (nonatomic,retain) FBSearchBar * searchBar;                    //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                     //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) UIImageView * rightButtonView;              //@synthesize rightButtonView=_rightButtonView - In the implementation block
@property (assign,nonatomic) int style;                                  //@synthesize style=_style - In the implementation block
-(UIImageView *)rightButtonView;
-(void)setRightButtonView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(FBSearchBar *)searchBar;
-(void)setSearchBar:(FBSearchBar *)arg1 ;
-(void)setRightButton:(UIButton *)arg1 ;
-(UIButton *)rightButton;
@end

