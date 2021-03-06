/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBSearchResultsFiltersPriceSelectorCellDelegate;
@class NSArray, FBButtonConfigBuilder;

@interface FBSearchResultsFiltersPriceSelectorCell : UITableViewCell {

	NSArray* _buttons;
	FBButtonConfigBuilder* _buttonBuilder;
	id<FBSearchResultsFiltersPriceSelectorCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSearchResultsFiltersPriceSelectorCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setButtonAtIndex:(long long)arg1 toState:(BOOL)arg2 ;
-(void)setDelegate:(id<FBSearchResultsFiltersPriceSelectorCellDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBSearchResultsFiltersPriceSelectorCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)_buttonPressed:(id)arg1 ;
-(void)_setup;
@end

