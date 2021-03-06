/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBPaymentsEdgeInsetsConfigurable.h>
#import <Facebook/FBPaymentsExpandableItem.h>

@protocol FBPaymentsExpandableViewControllerExpandingDelegate;
@class UIView, FBRichTextView, NSString;

@interface FBPaymentsCheckoutEntityExplanationView : UIView <FBPaymentsEdgeInsetsConfigurable, FBPaymentsExpandableItem> {

	UIView* _containerView;
	FBRichTextView* _entityExplanationTextView;
	FBRichTextView* _expandedentityExplanationTextView;
	BOOL _shouldExpand;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;
	NSString* _entityExplanationText;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) NSString * entityExplanationText;                                                                //@synthesize entityExplanationText=_entityExplanationText - In the implementation block
@property (assign,nonatomic) BOOL shouldExpand;                                                                             //@synthesize shouldExpand=_shouldExpand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                                       //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
-(double)preferredHeightWithWidth:(double)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(void)setEntityExplanationText:(NSString *)arg1 ;
-(NSString *)entityExplanationText;
-(void)_onTappingText:(id)arg1 event:(id)arg2 ;
-(void)_updateViewVisibility;
-(BOOL)shouldExpand;
-(void)setShouldExpand:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end

