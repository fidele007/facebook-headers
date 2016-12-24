/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBEntityTokenable;
@class NSString, UIButton, UILabel, FBKVOController, UITextView, UIImage;

@interface FBEntityTokenView : UIView {

	BOOL _selected;
	NSString* _tokenText;
	UIButton* _tokenButton;
	UILabel* _cellSeparator;
	BOOL _canBeSelected;
	FBKVOController* _KVOController;
	UITextView* _rightAccessoryImageView;
	double _tokenHeight;
	double _rightAccessoryImageDescent;
	BOOL _useKVOObservation;
	BOOL _selectable;
	BOOL _separatorSelectable;
	BOOL _parentEnabled;
	BOOL _tokenIsFocused;
	BOOL _forceBlackTintColor;
	BOOL _tail;
	id<FBEntityTokenable> _tokenableObject;
	double _tokenPadding;
	UIImage* _rightAccessoryImage;
	UIEdgeInsets _tokenContentExtraEdgeInsets;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;                       //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL selectable;                                       //@synthesize selectable=_selectable - In the implementation block
@property (assign,nonatomic) BOOL separatorSelectable;                              //@synthesize separatorSelectable=_separatorSelectable - In the implementation block
@property (assign,nonatomic) BOOL parentEnabled;                                    //@synthesize parentEnabled=_parentEnabled - In the implementation block
@property (nonatomic,retain) id<FBEntityTokenable> tokenableObject;                 //@synthesize tokenableObject=_tokenableObject - In the implementation block
@property (nonatomic,copy) NSString * tokenText; 
@property (nonatomic,readonly) UIButton * tokenButton;                              //@synthesize tokenButton=_tokenButton - In the implementation block
@property (assign,nonatomic) double tokenPadding;                                   //@synthesize tokenPadding=_tokenPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tokenContentExtraEdgeInsets;              //@synthesize tokenContentExtraEdgeInsets=_tokenContentExtraEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL tokenIsFocused;                                   //@synthesize tokenIsFocused=_tokenIsFocused - In the implementation block
@property (assign,nonatomic) BOOL forceBlackTintColor;                              //@synthesize forceBlackTintColor=_forceBlackTintColor - In the implementation block
@property (assign,nonatomic) BOOL tail;                                             //@synthesize tail=_tail - In the implementation block
@property (nonatomic,readonly) UIImage * rightAccessoryImage;                       //@synthesize rightAccessoryImage=_rightAccessoryImage - In the implementation block
+(double)tokenHeight;
+(UIEdgeInsets)tokenImageInsets;
-(NSString *)tokenText;
-(UIButton *)tokenButton;
-(id)initWithFrame:(CGRect)arg1 canBeSelected:(BOOL)arg2 useKVOObservation:(BOOL)arg3 ;
-(void)setTokenableObject:(id<FBEntityTokenable>)arg1 ;
-(id<FBEntityTokenable>)tokenableObject;
-(void)setTokenPadding:(double)arg1 ;
-(void)setRightAccessoryImage:(id)arg1 descent:(double)arg2 ;
-(void)setTokenText:(NSString *)arg1 ;
-(void)setForceBlackTintColor:(BOOL)arg1 ;
-(void)setTokenIsFocused:(BOOL)arg1 ;
-(void)setParentEnabled:(BOOL)arg1 ;
-(void)setTokenContentExtraEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)forceBlackTintColor;
-(void)_tokenButtonPressed;
-(void)_updateSelectedState;
-(void)_updateSeparatorVisibilityAndColor;
-(void)_updateStateOfSubControls;
-(void)_setTokenText:(id)arg1 ;
-(void)_syncAndObserveTokenObject;
-(void)_syncTokenButtonWithTokenImage;
-(void)_updateRightAccessoryImage;
-(void)_entityTokenViewlayoutSubviews;
-(void)_syncTokenButtonWithTokenText;
-(void)setSeparatorSelectable:(BOOL)arg1 ;
-(BOOL)separatorSelectable;
-(BOOL)parentEnabled;
-(double)tokenPadding;
-(UIEdgeInsets)tokenContentExtraEdgeInsets;
-(BOOL)tokenIsFocused;
-(UIImage *)rightAccessoryImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selectable;
-(void)setSelectable:(BOOL)arg1 ;
-(BOOL)tail;
-(void)setTail:(BOOL)arg1 ;
@end

