/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKStatefulViewComponentController.h>
#import <UIKit/UITextViewDelegate.h>

@class FBTextView, NSString;

@interface FBTextViewComponentController : CKStatefulViewComponentController <UITextViewDelegate>

@property (nonatomic,readonly) FBTextView * textView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
-(void)didMount;
-(void)didRemount;
-(id)textViewComponent;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(BOOL)canRelinquishStatefulView;
-(void)configureInputAccessoryView;
-(void)dealloc;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(FBTextView *)textView;
@end

