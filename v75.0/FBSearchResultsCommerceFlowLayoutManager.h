/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSString;

@interface FBSearchResultsCommerceFlowLayoutManager : NSObject <UICollectionViewDelegateFlowLayout> {

	BOOL _hasGridLayout;
	CGSize _viewSize;

}

@property (assign,nonatomic) CGSize viewSize;                       //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) BOOL hasGridLayout;                    //@synthesize hasGridLayout=_hasGridLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHasGridLayout:(BOOL)arg1 ;
-(BOOL)hasGridLayout;
-(void)setViewSize:(CGSize)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)viewSize;
@end

