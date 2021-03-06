/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont, UIColor;

@interface FBAttributionEntryViewTraits : FBValueObject <NSCopying> {

	BOOL _hasIcon;
	UIFont* _labelFont;
	UIColor* _labelColor;
	UIFont* _decoratedTextFont;
	UIColor* _decoratedTextColor;
	UIEdgeInsets _edgeInset;

}

@property (nonatomic,readonly) UIEdgeInsets edgeInset;                         //@synthesize edgeInset=_edgeInset - In the implementation block
@property (nonatomic,readonly) BOOL hasIcon;                                   //@synthesize hasIcon=_hasIcon - In the implementation block
@property (nonatomic,copy,readonly) UIFont * labelFont;                        //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * labelColor;                      //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * decoratedTextFont;                //@synthesize decoratedTextFont=_decoratedTextFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * decoratedTextColor;              //@synthesize decoratedTextColor=_decoratedTextColor - In the implementation block
-(id)initWithEdgeInset:(UIEdgeInsets)arg1 hasIcon:(BOOL)arg2 labelFont:(id)arg3 labelColor:(id)arg4 decoratedTextFont:(id)arg5 decoratedTextColor:(id)arg6 ;
-(UIFont *)decoratedTextFont;
-(UIColor *)decoratedTextColor;
-(UIEdgeInsets)edgeInset;
-(BOOL)hasIcon;
-(UIFont *)labelFont;
-(UIColor *)labelColor;
@end

