/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol FBMinimizedTabBarBrowserColletionViewCellDelegate;
@class UIView, UIButton, UILabel;

@interface FBMinimizedTabBarBrowserColletionViewCell : UICollectionViewCell {

	UIView* _headerCornerView;
	UIView* _backgroundView;
	UIButton* _deleteButton;
	UILabel* _titleLabel;
	UIView* _contentView;
	id<FBMinimizedTabBarBrowserColletionViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMinimizedTabBarBrowserColletionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMinimizedTabBarBrowserColletionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id<FBMinimizedTabBarBrowserColletionViewCellDelegate>)delegate;
-(void)setContentView:(id)arg1 ;
@end
