/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MNCollectionViewLayoutAttributesMap : NSObject {

	NSMutableDictionary* _attributesByIndexPath;

}
-(void)_addLayoutAttributes:(id)arg1 ;
-(id)layoutAttributesForElementWithCategory:(unsigned long long)arg1 kind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_layoutAttributesAtIndexPath:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithLayoutAttributes:(id)arg1 ;
-(id)layoutAttributesPassingTest:(/*^block*/id)arg1 ;
-(id)layoutAttributesAtIndexPath:(id)arg1 ;
-(void)enumerateIndexPathsAndLayoutAttributesUsingBlock:(/*^block*/id)arg1 ;
-(id)description;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
@end

