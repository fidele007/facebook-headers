/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@interface FBHScrollComponentCollectionViewLayout : UICollectionViewLayout {

	CGSize _contentSize;
	vector<UICollectionViewLayoutAttributes *, std::__1::allocator<UICollectionViewLayoutAttributes *> >* _itemAttributes;

}
-(void)updateLayoutForChildren:(const vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> >*)arg1 spacing:(double)arg2 ;
-(id)description;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
@end

