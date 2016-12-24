/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBComponentCollectionViewDataSourceEventListener.h>
#import <Facebook/CKComponentSizeRangeProviding.h>

@class FBDBLUserChooserCollectionViewLayout, UIView, UICollectionView, NSString;

@interface FBDBLUserChooserView : UIView <FBComponentCollectionViewDataSourceEventListener, CKComponentSizeRangeProviding> {

	FBDBLUserChooserCollectionViewLayout* _collectionViewLayout;
	CGSize _maximumAccountTileSize;
	UIView* _header;
	UICollectionView* _collectionView;
	UIView* _footer;
	UIEdgeInsets _minimumEdgeInsets;

}

@property (nonatomic,readonly) UIView * header;                                //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UIView * footer;                                //@synthesize footer=_footer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets minimumEdgeInsets;                   //@synthesize minimumEdgeInsets=_minimumEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKSizeRange)sizeRangeForBoundingSize:(CGSize)arg1 ;
-(void)setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)minimumEdgeInsets;
-(id)initWithHeaderView:(id)arg1 footerView:(id)arg2 collectionViewSizeProvider:(id)arg3 configuration:(id)arg4 ;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(UIView *)header;
-(UIView *)footer;
@end

