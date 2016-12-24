/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface FBGraphSearchHorizontalPhotoGalleryCollectionViewLayout : UICollectionViewLayout {

	NSMutableArray* _layoutAttributes;
	CGSize _photoSize;
	CGRect _contentsRect;
	double _photoSpacing;

}

@property (assign,nonatomic) double photoSpacing;              //@synthesize photoSpacing=_photoSpacing - In the implementation block
-(double)photoSpacing;
-(id)initWithPhotoSize:(CGSize)arg1 contentsRect:(CGRect)arg2 ;
-(void)setPhotoSpacing:(double)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
@end
