/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBImageOverlayFilter.h>
#import <Facebook/FBFilterNeedsPrepareForRender.h>

@class NSString, UIColor;

@interface FBTextOverlayFilter : FBImageOverlayFilter <FBFilterNeedsPrepareForRender> {

	NSString* _text;
	double _textSize;
	UIColor* _textColor;

}

@property (nonatomic,copy,readonly) NSString * text;                //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) double textSize;                     //@synthesize textSize=_textSize - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                 //@synthesize textColor=_textColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFont;
+(id)defaultTextColor;
-(void)prepareForRender;
-(id)initWithText:(id)arg1 location:(CGPoint)arg2 textSize:(double)arg3 textColor:(id)arg4 outputSize:(CGSize)arg5 ;
-(void)processCommand:(id)arg1 ;
-(id)_drawText;
-(id)init;
-(NSString *)text;
-(UIColor *)textColor;
-(double)textSize;
@end

