/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <Facebook/MNCollectionViewLayoutAttributesTracking.h>

@class UIView, UICollectionViewLayoutAttributes, NSString;

@interface MNMountableCollectionReusableView : UICollectionReusableView <MNCollectionViewLayoutAttributesTracking> {

	UIView* _contentView;
	UICollectionViewLayoutAttributes* _layoutAttributes;

}

@property (nonatomic,copy) UICollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                           //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(void)setAnchorPointWithoutChangingFrame:(CGPoint)arg1 ;
-(BOOL)_isParentCollectionViewBeingUpdated;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
@end

