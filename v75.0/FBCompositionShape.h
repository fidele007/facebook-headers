/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositionBase.h>

@class NSString, NSArray;

@interface FBCompositionShape : FBCompositionBase {

	BOOL _filled;
	NSString* _name;
	NSString* _klass;
	NSString* _color;
	double _lineWidth;
	double _rotation;
	NSArray* _properties;
	double _cornerRadius;

}

@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * klass;                  //@synthesize klass=_klass - In the implementation block
@property (nonatomic,copy,readonly) NSString * color;                  //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) double lineWidth;                       //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,readonly) double rotation;                        //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,readonly) BOOL filled;                            //@synthesize filled=_filled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(NSString *)klass;
-(BOOL)filled;
-(id)initWithName:(id)arg1 klass:(id)arg2 color:(id)arg3 lineWidth:(double)arg4 rotation:(double)arg5 filled:(BOOL)arg6 properties:(id)arg7 cornerRadius:(double)arg8 ;
-(id)init;
-(NSString *)name;
-(double)lineWidth;
-(double)cornerRadius;
-(NSString *)color;
-(double)rotation;
-(NSArray *)properties;
@end

