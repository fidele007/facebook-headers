/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol MNBookingRequestsAdminNotesTextInputViewResizeDelegate;
@class FBTextView, UIView, NSString;

@interface MNBookingRequestsAdminNotesTextInputView : UIView <UITextViewDelegate> {

	FBTextView* _textView;
	UIView* _separatorView;
	id<MNBookingRequestsAdminNotesTextInputViewResizeDelegate> _resizeDelegate;

}

@property (nonatomic,copy,readonly) NSString * inputContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)inputContent;
-(CGSize)_textViewSize:(CGSize)arg1 ;
-(id)initWithHint:(id)arg1 content:(id)arg2 resizeDelegate:(id)arg3 ;
-(void)setInputEditable:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
@end
