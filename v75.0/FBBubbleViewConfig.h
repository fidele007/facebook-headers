/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBUIConfig.h>

@class NSString, UIColor;

@interface FBBubbleViewConfig : FBValueObject <FBUIConfig> {

	unsigned long long _arrowPosition;
	NSString* _text;
	double _arrowApexX;
	double _arrowApexY;
	UIColor* _fillColor;

}

@property (nonatomic,readonly) unsigned long long arrowPosition;              //@synthesize arrowPosition=_arrowPosition - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) double arrowApexX;                             //@synthesize arrowApexX=_arrowApexX - In the implementation block
@property (nonatomic,readonly) double arrowApexY;                             //@synthesize arrowApexY=_arrowApexY - In the implementation block
@property (nonatomic,copy,readonly) UIColor * fillColor;                      //@synthesize fillColor=_fillColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithArrowPosition:(unsigned long long)arg1 text:(id)arg2 arrowApexX:(double)arg3 arrowApexY:(double)arg4 fillColor:(id)arg5 ;
+(Class)viewClass;
-(unsigned long long)arrowPosition;
-(id)_initWithArrowPosition:(unsigned long long)arg1 text:(id)arg2 arrowApexX:(double)arg3 arrowApexY:(double)arg4 fillColor:(id)arg5 ;
-(double)arrowApexX;
-(double)arrowApexY;
-(NSString *)text;
-(UIColor *)fillColor;
@end
