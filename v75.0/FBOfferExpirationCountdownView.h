/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichTextView.h>

@class NSDate, FBRichTextView, FBTimer;

@interface FBOfferExpirationCountdownView : FBRichTextView {

	unsigned long long _location;
	NSDate* _expirationDate;
	FBRichTextView* _textView;
	FBTimer* _timer;

}

@property (nonatomic,retain) FBRichTextView * textView;                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) FBTimer * timer;                          //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned long long location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                  //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextView:(FBRichTextView *)arg1 ;
-(unsigned long long)location;
-(FBRichTextView *)textView;
-(void)setLocation:(unsigned long long)arg1 ;
-(void)setTimer:(FBTimer *)arg1 ;
-(FBTimer *)timer;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)_updateText;
@end

