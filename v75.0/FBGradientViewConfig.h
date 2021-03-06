/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <Facebook/FBUIConfig.h>

@class NSArray, UIColor, NSString;

@interface FBGradientViewConfig : FBValueObject <FBUIConfig> {

	NSArray* _colors;
	NSArray* _locations;
	UIColor* _backgroundColor;
	double _opacity;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (nonatomic,copy,readonly) NSArray * colors;                       //@synthesize colors=_colors - In the implementation block
@property (nonatomic,copy,readonly) NSArray * locations;                    //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint;                          //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,readonly) CGPoint endPoint;                            //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) double opacity;                              //@synthesize opacity=_opacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithColors:(id)arg1 locations:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 backgroundColor:(id)arg5 opacity:(double)arg6 ;
+(Class)viewClass;
-(id)_initWithColors:(id)arg1 locations:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 backgroundColor:(id)arg5 opacity:(double)arg6 ;
-(UIColor *)backgroundColor;
-(double)opacity;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)locations;
-(CGPoint)endPoint;
@end

