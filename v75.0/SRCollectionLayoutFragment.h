/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SRCollectionLayoutFragment <NSObject>
@property (nonatomic,copy) NSString * debugTag; 
@required
-(CellLayoutDesc*)layoutAttributesForItemAtIndex:(unsigned long long)arg1;
-(void)prepareLayoutWithCollectionViewBounds:(CGRect)arg1 contentInset:(UIEdgeInsets)arg2;
-(SRZIndexRange*)zIndexRange;
-(long long)layoutAttributesForElementsInRect:(CGRect)arg1 vectorFactory:(id)arg2;
-(NSString *)debugTag;
-(void)setDebugTag:(id)arg1;
-(CGSize*)collectionViewContentSize;
-(void)invalidateLayout;

@end
