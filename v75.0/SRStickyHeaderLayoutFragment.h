/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRCollectionLayoutFragment.h>

@class SRCollectionFragmentController, NSNumber, NSString;

@interface SRStickyHeaderLayoutFragment : NSObject <SRCollectionLayoutFragment> {

	SRCollectionFragmentController* _headerFrag;
	SRCollectionFragmentController* _contentFrag;
	SRStickyHeaderLayoutData _layoutData;
	CGSize _overallContentSize;
	SRZIndexRange _zIndexRange;
	BOOL _hidden;
	SRStickyHeaderLayoutFragment* _parentStickyHeader;
	NSNumber* _ensureTallerThanBoundsWithAdjustment;
	NSString* _debugTag;

}

@property (nonatomic,readonly) CGSize headerSize; 
@property (nonatomic,readonly) double headerOriginYShift; 
@property (assign,nonatomic,__weak) SRStickyHeaderLayoutFragment * parentStickyHeader;              //@synthesize parentStickyHeader=_parentStickyHeader - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                                           //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSNumber * ensureTallerThanBoundsWithAdjustment;                         //@synthesize ensureTallerThanBoundsWithAdjustment=_ensureTallerThanBoundsWithAdjustment - In the implementation block
@property (nonatomic,copy) NSString * debugTag;                                                     //@synthesize debugTag=_debugTag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHeaderFragment:(id)arg1 contentFragment:(id)arg2 ;
-(void)setParentStickyHeader:(SRStickyHeaderLayoutFragment *)arg1 ;
-(CellLayoutDesc)layoutAttributesForItemAtIndex:(unsigned long long)arg1 ;
-(void)prepareLayoutWithCollectionViewBounds:(CGRect)arg1 contentInset:(UIEdgeInsets)arg2 ;
-(SRZIndexRange)zIndexRange;
-(long long)layoutAttributesForElementsInRect:(CGRect)arg1 vectorFactory:(id)arg2 ;
-(NSString *)debugTag;
-(void)setDebugTag:(NSString *)arg1 ;
-(double)headerOriginYShift;
-(SRStickyHeaderLayoutFragment *)parentStickyHeader;
-(NSNumber *)ensureTallerThanBoundsWithAdjustment;
-(void)setEnsureTallerThanBoundsWithAdjustment:(NSNumber *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)invalidateLayout;
-(BOOL)hidden;
-(CGSize)headerSize;
@end
