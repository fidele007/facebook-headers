/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont, UIColor;

@interface FBPageMetadataTraits : FBValueObject <NSCopying> {

	BOOL _hasTriangleView;
	unsigned long long _arrangement;
	UIFont* _valueFont;
	UIColor* _valueTextColor;
	UIFont* _contextFont;
	UIColor* _contextTextColor;
	long long _contextMaxNumberOfLines;

}

@property (nonatomic,readonly) unsigned long long arrangement;                 //@synthesize arrangement=_arrangement - In the implementation block
@property (nonatomic,readonly) BOOL hasTriangleView;                           //@synthesize hasTriangleView=_hasTriangleView - In the implementation block
@property (nonatomic,copy,readonly) UIFont * valueFont;                        //@synthesize valueFont=_valueFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * valueTextColor;                  //@synthesize valueTextColor=_valueTextColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * contextFont;                      //@synthesize contextFont=_contextFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * contextTextColor;                //@synthesize contextTextColor=_contextTextColor - In the implementation block
@property (nonatomic,readonly) long long contextMaxNumberOfLines;              //@synthesize contextMaxNumberOfLines=_contextMaxNumberOfLines - In the implementation block
-(id)initWithArrangement:(unsigned long long)arg1 hasTriangleView:(BOOL)arg2 valueFont:(id)arg3 valueTextColor:(id)arg4 contextFont:(id)arg5 contextTextColor:(id)arg6 contextMaxNumberOfLines:(long long)arg7 ;
-(UIColor *)contextTextColor;
-(UIFont *)contextFont;
-(long long)contextMaxNumberOfLines;
-(UIColor *)valueTextColor;
-(unsigned long long)arrangement;
-(BOOL)hasTriangleView;
-(UIFont *)valueFont;
@end
