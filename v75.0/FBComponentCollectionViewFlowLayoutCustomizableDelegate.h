/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol FBComponentsCollectionViewItemSizeProvider;
@class NSString;

@interface FBComponentCollectionViewFlowLayoutCustomizableDelegate : NSObject <UICollectionViewDelegateFlowLayout> {

	id<FBComponentsCollectionViewItemSizeProvider> _componentsCollectionViewItemSizeProvider;
	double _lineSpacing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItemSizeProvider:(id)arg1 lineSpacing:(double)arg2 ;
-(id)initWithItemSizeProvider:(id)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

