/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>

@protocol FBSearchSectionTitleTableViewCellDelegate;
@class UIView, UIButton, NSString;

@interface FBSearchSectionTitleTableViewCell : UITableViewCell <FBAccessibilityInvalidationEventsListener> {

	UIView* _topLineView;
	UIView* _bottomLineView;
	UIView* _topDividerView;
	UIView* _topDividerLineView;
	UIButton* _editButton;
	BOOL _displayEditButton;
	BOOL _displayTopDivider;
	unsigned long long _showSeparators;
	id<FBSearchSectionTitleTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long showSeparators;                                          //@synthesize showSeparators=_showSeparators - In the implementation block
@property (assign,nonatomic) BOOL displayEditButton;                                                     //@synthesize displayEditButton=_displayEditButton - In the implementation block
@property (assign,nonatomic) BOOL displayTopDivider;                                                     //@synthesize displayTopDivider=_displayTopDivider - In the implementation block
@property (assign,nonatomic,__weak) id<FBSearchSectionTitleTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveAccessibilityInvalidation;
-(void)_didClickEditButton:(id)arg1 ;
-(void)setShowSeparators:(unsigned long long)arg1 ;
-(void)setDisplayTopDivider:(BOOL)arg1 ;
-(void)setDisplayEditButton:(BOOL)arg1 ;
-(unsigned long long)showSeparators;
-(BOOL)displayEditButton;
-(BOOL)displayTopDivider;
-(void)setDelegate:(id<FBSearchSectionTitleTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBSearchSectionTitleTableViewCellDelegate>)delegate;
@end
