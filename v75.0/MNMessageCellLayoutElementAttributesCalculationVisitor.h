/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/MNMessageCellLayoutElementVisitor.h>

@class NSMutableArray, NSIndexPath, NSArray, NSString;

@interface MNMessageCellLayoutElementAttributesCalculationVisitor : NSObject <MNMessageCellLayoutElementVisitor> {

	NSMutableArray* _allLayoutAttributes;
	CGRect _cellFrame;
	Class _layoutAttributesClass;
	NSIndexPath* _indexPath;
	CGSize _contentSize;

}

@property (nonatomic,copy) NSIndexPath * indexPath;                             //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allLayoutAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)visitVerticalSpaceElement:(id)arg1 ;
-(void)visitBlockViewLayoutElement:(id)arg1 ;
-(void)visitRelativeViewLayoutElement:(id)arg1 ;
-(id)initWithWithCollectionViewWidth:(double)arg1 layoutAttributesClass:(Class)arg2 ;
-(void)visitLayoutElements:(id)arg1 atIndexPath:(id)arg2 ;
-(NSArray *)allLayoutAttributes;
-(CGSize)contentSize;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
@end

