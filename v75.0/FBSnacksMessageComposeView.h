/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol FBSnacksMessageComposeViewDelegate;
@class UIToolbar, FBProfileAvatarView, FBGrowingTextView, FBSnacksMessageViewConfiguration, NSString, UIButton, UITextView;

@interface FBSnacksMessageComposeView : UIView <UITextViewDelegate> {

	UIToolbar* _backgroundView;
	FBProfileAvatarView* _avatarView;
	FBGrowingTextView* _textView;
	FBSnacksMessageViewConfiguration* _configuration;
	BOOL _backgroundHidden;
	BOOL _hideWhenDismissed;
	NSString* _placeholder;
	id<FBSnacksMessageComposeViewDelegate> _delegate;
	UIButton* _sendButton;

}

@property (nonatomic,readonly) FBSnacksMessageViewConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                                             //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                                //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL hideWhenDismissed;                                              //@synthesize hideWhenDismissed=_hideWhenDismissed - In the implementation block
@property (assign,nonatomic,__weak) id<FBSnacksMessageComposeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                                             //@synthesize sendButton=_sendButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAvatarGraphQLID:(id)arg1 session:(id)arg2 ;
-(void)setBackgroundHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_handleSendButtonTapped:(id)arg1 ;
-(void)setHideWhenDismissed:(BOOL)arg1 ;
-(BOOL)hideWhenDismissed;
-(void)setDelegate:(id<FBSnacksMessageComposeViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBSnacksMessageComposeViewDelegate>)delegate;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(NSString *)placeholder;
-(UITextView *)textView;
-(FBSnacksMessageViewConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(UIButton *)sendButton;
-(void)_setupConfiguration;
@end

