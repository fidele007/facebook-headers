/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRCollectionLayoutFragment.h>

@protocol SRCollectionLayoutFragment;
@class NSString, SRCollectionFragmentController;

@interface SRAddBackgroundLayoutFragment : NSObject <SRCollectionLayoutFragment> {

	id<SRCollectionLayoutFragment> _layout;
	CGRect _bounds;
	CGSize _contentSize;
	long long _countOfItems;
	SRZIndexRange _zIndexRange;
	UIEdgeInsets _currentEdgeInsets;
	BOOL _currentExtendBeyondTopOfViewport;
	BOOL _extendBeyondTopOfViewport;
	BOOL _hideBackground;
	SRCollectionFragmentController* _contentFragment;
	NSString* _debugTag;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) SRCollectionFragmentController * contentFragment;              //@synthesize contentFragment=_contentFragment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                         //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy) NSString * debugTag;                                               //@synthesize debugTag=_debugTag - In the implementation block
@property (assign,nonatomic) BOOL extendBeyondTopOfViewport;                                  //@synthesize extendBeyondTopOfViewport=_extendBeyondTopOfViewport - In the implementation block
@property (assign,nonatomic) BOOL hideBackground;                                             //@synthesize hideBackground=_hideBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CellLayoutDesc)_cellLayoutDescForBackgroundWithCountOfItem:(long long)arg1 contentSize:(CGSize)arg2 zIndex:(long long)arg3 edgeInsets:(UIEdgeInsets)arg4 bounds:(CGRect)arg5 extendBeyondTopOfViewport:(BOOL)arg6 hideBackground:(BOOL)arg7 ;
-(CellLayoutDesc)layoutAttributesForItemAtIndex:(unsigned long long)arg1 ;
-(void)setExtendBeyondTopOfViewport:(BOOL)arg1 ;
-(void)prepareLayoutWithCollectionViewBounds:(CGRect)arg1 contentInset:(UIEdgeInsets)arg2 ;
-(SRZIndexRange)zIndexRange;
-(long long)layoutAttributesForElementsInRect:(CGRect)arg1 vectorFactory:(id)arg2 ;
-(NSString *)debugTag;
-(void)setDebugTag:(NSString *)arg1 ;
-(id)initWithContentFragment:(id)arg1 ;
-(void)setHideBackground:(BOOL)arg1 ;
-(SRCollectionFragmentController *)contentFragment;
-(BOOL)extendBeyondTopOfViewport;
-(BOOL)hideBackground;
-(UIEdgeInsets)edgeInsets;
-(CGSize)collectionViewContentSize;
-(void)invalidateLayout;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end

