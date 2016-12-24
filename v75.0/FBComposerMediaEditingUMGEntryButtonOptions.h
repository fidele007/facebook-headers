/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor, NSString;

@interface FBComposerMediaEditingUMGEntryButtonOptions : FBValueObject <NSCopying> {

	BOOL _animateIcons;
	BOOL _hidden;
	BOOL _showVideoUploadManualQualitySelectionNuxIfPossible;
	NSArray* _icons;
	UIColor* _borderColor;
	double _borderWidth;
	UIColor* _backgroundColorForNormalState;
	NSString* _title;
	NSString* _accessibilityLabel;

}

@property (nonatomic,copy,readonly) NSArray * icons;                                                 //@synthesize icons=_icons - In the implementation block
@property (nonatomic,readonly) BOOL animateIcons;                                                    //@synthesize animateIcons=_animateIcons - In the implementation block
@property (nonatomic,copy,readonly) UIColor * borderColor;                                           //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) double borderWidth;                                                   //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColorForNormalState;                         //@synthesize backgroundColorForNormalState=_backgroundColorForNormalState - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityLabel;                                   //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) BOOL hidden;                                                          //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) BOOL showVideoUploadManualQualitySelectionNuxIfPossible;              //@synthesize showVideoUploadManualQualitySelectionNuxIfPossible=_showVideoUploadManualQualitySelectionNuxIfPossible - In the implementation block
-(id)initWithIcons:(id)arg1 animateIcons:(BOOL)arg2 borderColor:(id)arg3 borderWidth:(double)arg4 backgroundColorForNormalState:(id)arg5 title:(id)arg6 accessibilityLabel:(id)arg7 hidden:(BOOL)arg8 showVideoUploadManualQualitySelectionNuxIfPossible:(BOOL)arg9 ;
-(BOOL)animateIcons;
-(UIColor *)backgroundColorForNormalState;
-(BOOL)showVideoUploadManualQualitySelectionNuxIfPossible;
-(NSString *)title;
-(NSString *)accessibilityLabel;
-(UIColor *)borderColor;
-(double)borderWidth;
-(NSArray *)icons;
-(BOOL)hidden;
@end

