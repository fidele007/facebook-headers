/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventDiscoveryCategoryModelProtocol.h>

@class NSString, UIColor, NSURL, FBEventDiscoveryTimeFilterKey, NSArray;

@interface FBEventDiscoveryCategoryModel : NSObject <FBEventDiscoveryCategoryModelProtocol> {

	NSString* _title;
	UIColor* _textColor;
	UIColor* _backgroundColor;
	UIColor* _glyphColor;
	unsigned long long _glyphName;
	NSURL* _glyphURL;
	FBEventDiscoveryTimeFilterKey* _timeFilter;
	NSArray* _categories;

}

@property (nonatomic,copy,readonly) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;                                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * glyphColor;                               //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,readonly) unsigned long long glyphName;                            //@synthesize glyphName=_glyphName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * glyphURL;                                   //@synthesize glyphURL=_glyphURL - In the implementation block
@property (nonatomic,readonly) FBEventDiscoveryTimeFilterKey * timeFilter;              //@synthesize timeFilter=_timeFilter - In the implementation block
@property (nonatomic,copy,readonly) NSArray * categories;                               //@synthesize categories=_categories - In the implementation block
-(NSURL *)glyphURL;
-(FBEventDiscoveryTimeFilterKey *)timeFilter;
-(id)initWithTitle:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3 glyphColor:(id)arg4 glyphName:(unsigned long long)arg5 glyphURL:(id)arg6 timeFilter:(id)arg7 categories:(id)arg8 ;
-(unsigned long long)glyphName;
-(UIColor *)backgroundColor;
-(NSString *)title;
-(UIColor *)textColor;
-(NSArray *)categories;
-(UIColor *)glyphColor;
@end
