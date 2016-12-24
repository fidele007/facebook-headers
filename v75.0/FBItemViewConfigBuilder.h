/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBUIConfigBuilder.h>

@protocol FBUIConfig;
@class UIImage, FBNetworkImageView, UIView, UIColor, NSString;

@interface FBItemViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	UIImage* _image;
	FBNetworkImageView* _networkImageView;
	unsigned long long _imageSize;
	UIView* _contentView;
	id<FBUIConfig> _contentViewConfig;
	UIView* _auxView;
	id<FBUIConfig> _auxViewConfig;
	unsigned long long _contentVerticalAlign;
	unsigned long long _auxVerticalAlign;
	UIEdgeInsets _insets;
	unsigned long long _topSeparatorThickness;
	UIEdgeInsets _topSeparatorInsets;
	UIColor* _topSeparatorColor;
	unsigned long long _bottomSeparatorThickness;
	UIEdgeInsets _bottomSeparatorInsets;
	UIColor* _bottomSeparatorColor;
	UIColor* _backgroundColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setAuxView:(id)arg1 ;
-(id)setContentVerticalAlign:(unsigned long long)arg1 ;
-(id)setBottomSeparatorThickness:(unsigned long long)arg1 ;
-(id)setBottomSeparatorColor:(id)arg1 ;
-(id)setNetworkImageView:(id)arg1 ;
-(id)setBottomSeparatorInsets:(UIEdgeInsets)arg1 ;
-(id)setContentViewConfig:(id)arg1 ;
-(id)setAuxViewConfig:(id)arg1 ;
-(id)setAuxVerticalAlign:(unsigned long long)arg1 ;
-(id)setTopSeparatorColor:(id)arg1 ;
-(id)setTopSeparatorInsets:(UIEdgeInsets)arg1 ;
-(id)setTopSeparatorThickness:(unsigned long long)arg1 ;
-(id)setImage:(id)arg1 ;
-(id)setBackgroundColor:(id)arg1 ;
-(id)_init;
-(id)setContentView:(id)arg1 ;
-(id)setInsets:(UIEdgeInsets)arg1 ;
-(id)build;
-(id)setImageSize:(unsigned long long)arg1 ;
@end

