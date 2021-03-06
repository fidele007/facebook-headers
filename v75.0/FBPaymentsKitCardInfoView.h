/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBPaymentsKitCardTextAndImageViewDelegate.h>

@protocol FBPaymentsKitCardInfoViewDelegate;
@class UIView, NSMapTable, NSMutableDictionary, FBPaymentsKitCardTextAndImageView, NSString;

@interface FBPaymentsKitCardInfoView : UIView <FBPaymentsKitCardTextAndImageViewDelegate> {

	UIView* _horizontalSeparatorViewTop;
	UIView* _horizontalSeparatorViewBottom;
	UIView* _verticalSeparatorViewLeftMiddle;
	UIView* _verticalSeparatorViewRightMiddle;
	NSMapTable* _nextTextAndImageViewsMap;
	NSMutableDictionary* _viewByIdentifier;
	FBPaymentsKitCardTextAndImageView* _numberTextAndImageView;
	FBPaymentsKitCardTextAndImageView* _expirationDateTextAndImageView;
	FBPaymentsKitCardTextAndImageView* _securityCodeTextAndImageView;
	FBPaymentsKitCardTextAndImageView* _zipCodeTextAndImageView;
	long long _numberOfRows;
	id<FBPaymentsKitCardInfoViewDelegate> _delegate;
	long long _cardAssociation;

}

@property (nonatomic,readonly) FBPaymentsKitCardTextAndImageView * numberTextAndImageView;                      //@synthesize numberTextAndImageView=_numberTextAndImageView - In the implementation block
@property (nonatomic,readonly) FBPaymentsKitCardTextAndImageView * expirationDateTextAndImageView;              //@synthesize expirationDateTextAndImageView=_expirationDateTextAndImageView - In the implementation block
@property (nonatomic,readonly) FBPaymentsKitCardTextAndImageView * securityCodeTextAndImageView;                //@synthesize securityCodeTextAndImageView=_securityCodeTextAndImageView - In the implementation block
@property (nonatomic,readonly) FBPaymentsKitCardTextAndImageView * zipCodeTextAndImageView;                     //@synthesize zipCodeTextAndImageView=_zipCodeTextAndImageView - In the implementation block
@property (assign,nonatomic) long long numberOfRows;                                                            //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsKitCardInfoViewDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long cardAssociation;                                                         //@synthesize cardAssociation=_cardAssociation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textAndImageViewDidChange:(id)arg1 isUserInput:(BOOL)arg2 isCompleted:(BOOL)arg3 errorDescription:(id)arg4 shouldAlert:(BOOL)arg5 ;
-(void)setCardAssociation:(long long)arg1 ;
-(long long)cardAssociation;
-(id)viewByIdentifier:(id)arg1 ;
-(id)_nextTextAndImageViewAfter:(id)arg1 ;
-(CGRect)_rowRectForContentRect:(CGRect)arg1 currentRow:(long long)arg2 numberOfRows:(long long)arg3 ;
-(CGRect)_horizontalSeparatorRectForContentRect:(CGRect)arg1 currentSeparator:(long long)arg2 numberOfRows:(long long)arg3 ;
-(CGRect)_componentRectInRow:(CGRect)arg1 currentComponent:(long long)arg2 numberOfComponents:(long long)arg3 ;
-(CGRect)_componentFrameWithRect:(CGRect)arg1 forView:(id)arg2 ;
-(CGRect)_verticalSeparatorInRow:(CGRect)arg1 currentSeparator:(long long)arg2 numberOfComponents:(long long)arg3 ;
-(FBPaymentsKitCardTextAndImageView *)numberTextAndImageView;
-(FBPaymentsKitCardTextAndImageView *)expirationDateTextAndImageView;
-(FBPaymentsKitCardTextAndImageView *)securityCodeTextAndImageView;
-(FBPaymentsKitCardTextAndImageView *)zipCodeTextAndImageView;
-(long long)getCurrentCardAssociation:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBPaymentsKitCardInfoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBPaymentsKitCardInfoViewDelegate>)delegate;
-(long long)numberOfRows;
-(void)setNumberOfRows:(long long)arg1 ;
@end

