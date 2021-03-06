/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBStorylineEditorSelectionBarDelegate;
@class UIView, NSArray;

@interface FBStorylineEditorSelectionBar : UIView {

	UIView* _topBorderLine;
	UIView* _bottomBorderLine;
	NSArray* _dividers;
	BOOL _showsDividerBetweenItems;
	NSArray* _items;
	id<FBStorylineEditorSelectionBarDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * items;                                                          //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<FBStorylineEditorSelectionBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedItemIndex; 
@property (assign,nonatomic) BOOL showsDividerBetweenItems;                                          //@synthesize showsDividerBetweenItems=_showsDividerBetweenItems - In the implementation block
-(void)_updateDividers;
-(void)setShowsDividerBetweenItems:(BOOL)arg1 ;
-(BOOL)showsDividerBetweenItems;
-(void)setDelegate:(id<FBStorylineEditorSelectionBarDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBStorylineEditorSelectionBarDelegate>)delegate;
-(void)reset;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(long long)selectedItemIndex;
-(void)setSelectedItemIndex:(long long)arg1 ;
@end

