/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface FBDBLUserChooserCollectionViewLayout : UICollectionViewFlowLayout {

	NSMutableArray* _indexPathsToAnimate;
	double _minimumWidth;
	UIEdgeInsets _minimumContentInset;

}

@property (assign,nonatomic) double minimumWidth;                           //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets minimumContentInset;              //@synthesize minimumContentInset=_minimumContentInset - In the implementation block
-(void)_updateInsetsToCenterInWidth:(double)arg1 ;
-(void)setMinimumContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)minimumContentInset;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)setMinimumWidth:(double)arg1 ;
-(double)minimumWidth;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end

