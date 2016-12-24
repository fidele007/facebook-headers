/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBSegmentedViewDelegate.h>

@protocol FBPagingContainerSwitcherViewDelegate;
@class NSArray, FBSegmentedView, UIView, NSString;

@interface FBPagingContainerSwitcherView : UIView <FBSegmentedViewDelegate> {

	id<FBPagingContainerSwitcherViewDelegate> _delegate;
	NSArray* _items;
	FBSegmentedView* _contentView;
	UIView* _shadowView;
	BOOL _contentHidden;
	double _contentViewAlpha;

}

@property (nonatomic,readonly) unsigned long long itemCount; 
@property (assign,nonatomic) BOOL contentHidden;                          //@synthesize contentHidden=_contentHidden - In the implementation block
@property (assign,nonatomic) double contentViewAlpha;                     //@synthesize contentViewAlpha=_contentViewAlpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSegmentItems:(id)arg1 ;
-(void)segmentedView:(id)arg1 didSelectItemAtIndex:(long long)arg2 withSelectionType:(int)arg3 ;
-(void)scrollToItemAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setContentHidden:(BOOL)arg1 ;
-(id)segmentForItemAtIndex:(long long)arg1 ;
-(void)reloadItems;
-(void)itemAtIndexWasSelected:(long long)arg1 ;
-(id)indicesForVisibleItems;
-(id)initWithSegmentItems:(id)arg1 style:(long long)arg2 delegate:(id)arg3 ;
-(void)selectItemAtIndex:(long long)arg1 ;
-(void)setContentViewAlpha:(double)arg1 ;
-(BOOL)contentHidden;
-(double)contentViewAlpha;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)itemCount;
@end
