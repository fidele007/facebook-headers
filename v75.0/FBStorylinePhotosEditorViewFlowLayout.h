/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath;

@interface FBStorylinePhotosEditorViewFlowLayout : UICollectionViewFlowLayout {

	NSIndexPath* _indexForItemCreatedOffScreen;
	NSIndexPath* _indexBeingDeleted;

}

@property (nonatomic,retain) NSIndexPath * indexBeingDeleted;              //@synthesize indexBeingDeleted=_indexBeingDeleted - In the implementation block
-(NSIndexPath *)indexBeingDeleted;
-(void)setIndexBeingDeleted:(NSIndexPath *)arg1 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
@end

