/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBGroupsTableSectionDetailViewDelegate;
@class FBGroupsTableViewConfig, UIView, FBRichTextView, NSAttributedString;

@interface FBGroupsTableSectionDetailView : UIView {

	FBGroupsTableViewConfig* _config;
	UIView* _topBorderView;
	UIView* _bottomBorderView;
	double _horizInset;
	double _verticalMargin;
	double _separatorHeight;
	double _titleFontSize;
	FBRichTextView* _detailView;
	NSAttributedString* _title;
	BOOL _hasTopBorder;
	BOOL _hasBottomBorder;
	id<FBGroupsTableSectionDetailViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBGroupsTableSectionDetailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasTopBorder;                                                       //@synthesize hasTopBorder=_hasTopBorder - In the implementation block
@property (assign,nonatomic) BOOL hasBottomBorder;                                                    //@synthesize hasBottomBorder=_hasBottomBorder - In the implementation block
+(double)heightForTitle:(id)arg1 constrainedToSize:(CGSize)arg2 withViewConfig:(id)arg3 ;
+(CGSize)_footerViewSizeForTitle:(id)arg1 constrainedToSize:(CGSize)arg2 withViewConfig:(id)arg3 ;
-(id)initWithTitle:(id)arg1 viewConfig:(id)arg2 ;
-(void)attributedLabelAction:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<FBGroupsTableSectionDetailViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBGroupsTableSectionDetailViewDelegate>)delegate;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(BOOL)hasTopBorder;
-(void)setHasTopBorder:(BOOL)arg1 ;
-(BOOL)hasBottomBorder;
-(void)setHasBottomBorder:(BOOL)arg1 ;
@end

