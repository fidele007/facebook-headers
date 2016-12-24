/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollectionAbstractCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol FBCollectionInfoRequestAskTextViewCellDelegate;
@class FBTextView, NSString;

@interface FBCollectionInfoRequestAskTextViewCell : FBCollectionAbstractCell <UITextViewDelegate> {

	FBTextView* _textView;
	id<FBCollectionInfoRequestAskTextViewCellDelegate> _infoRequestAskTextViewCellDelegate;

}

@property (nonatomic,readonly) FBTextView * textView; 
@property (assign,nonatomic,__weak) id<FBCollectionInfoRequestAskTextViewCellDelegate> infoRequestAskTextViewCellDelegate;              //@synthesize infoRequestAskTextViewCellDelegate=_infoRequestAskTextViewCellDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReuseIdentifier:(id)arg1 showCustomBorder:(BOOL)arg2 ;
-(id<FBCollectionInfoRequestAskTextViewCellDelegate>)infoRequestAskTextViewCellDelegate;
-(void)setInfoRequestAskTextViewCellDelegate:(id<FBCollectionInfoRequestAskTextViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(FBTextView *)textView;
@end
