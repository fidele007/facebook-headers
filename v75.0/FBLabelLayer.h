/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, UIFont;

@interface FBLabelLayer : CALayer {

	long long _horizontalAlignment;

}

@property (nonatomic,copy) NSString * string; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) CGColorRef foregroundColor; 
@property (assign,nonatomic) unsigned long long verticalAlignment; 
@property (assign,nonatomic) long long horizontalAlignment;                     //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long lineBreakMode; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(CGSize)sizeThatFitsWithConstraint:(CGSize)arg1 ;
-(CGSize)sizeConstrainedToWidth:(double)arg1 ;
-(long long)_lineBreakModeForTextTruncation:(unsigned long long)arg1 ;
-(id)init;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

