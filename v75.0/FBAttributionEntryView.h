/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBAttributionEntryViewDelegate;
@class FBMemAttributionEntry, UIImageView, FBRichTextView, FBAttributionEntryViewTraits;

@interface FBAttributionEntryView : UIView {

	FBMemAttributionEntry* _attributionEntry;
	UIImageView* _sourceIcon;
	FBRichTextView* _attributionLabel;
	FBAttributionEntryViewTraits* _traits;
	id<FBAttributionEntryViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAttributionEntryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)estimatedSizeForAttributionEntry:(id)arg1 withConstrainedSize:(CGSize)arg2 ;
+(id)defaultTraits;
-(id)_decoratedTextForAttributedString:(id)arg1 ;
-(void)_handleLinkTap:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithAttributionEntry:(id)arg1 ;
-(id)initWithAttributionEntry:(id)arg1 traits:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<FBAttributionEntryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBAttributionEntryViewDelegate>)delegate;
@end

