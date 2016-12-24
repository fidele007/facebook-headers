/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBUIConfigBuilder.h>

@class UIColor, UIView, NSString;

@interface FBStackedViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	UIColor* _backgroundColor;
	UIView* _backgroundView;
	UIEdgeInsets _edgeInsets;
	unsigned long long _layoutType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setBackgroundColor:(id)arg1 ;
-(id)_init;
-(id)setBackgroundView:(id)arg1 ;
-(id)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)build;
-(id)setLayoutType:(unsigned long long)arg1 ;
@end
