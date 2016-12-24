/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Facebook/CKComponentHostingCell.h>

@class UIView, CKComponentRootView, NSString;

@interface FBComponentHostingCollectionViewCell : UICollectionViewCell <CKComponentHostingCell> {

	CKComponentRootView* _componentContainerView;
	BOOL _accessibilityElementIsFocusedInternal;
	BOOL _canBecomeFocused;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * componentContainerView; 
-(UIView *)componentContainerView;
-(void)setCanBecomeFocused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(id)accessibilityLabel;
-(CGPoint)accessibilityActivationPoint;
-(BOOL)isAccessibilityElement;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(BOOL)accessibilityElementIsFocused;
-(BOOL)accessibilityPerformMagicTap;
-(BOOL)accessibilityActivate;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
@end

