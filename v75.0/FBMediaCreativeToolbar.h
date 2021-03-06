/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMediaCreativeToolbarDelegate;
@class NSMutableArray;

@interface FBMediaCreativeToolbar : UIView {

	NSMutableArray* _buttons;
	id<FBMediaCreativeToolbarDelegate> _delegate;
	unsigned long long _alignment;

}

@property (assign,nonatomic,__weak) id<FBMediaCreativeToolbarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                                    //@synthesize alignment=_alignment - In the implementation block
-(void)addButtonWithGlyph:(unsigned long long)arg1 color:(id)arg2 ;
-(void)setButtonState:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_pressedButton:(id)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMediaCreativeToolbarDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBMediaCreativeToolbarDelegate>)delegate;
-(unsigned long long)alignment;
@end

