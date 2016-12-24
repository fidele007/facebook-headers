/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString;

@interface FBSearchInputSectionHeaderModel : FBValueObject <NSCopying> {

	BOOL _showAsTextLessSeparator;
	BOOL _showBottomSeparator;
	NSString* _title;
	NSString* _boldSubTitle;
	unsigned long long _actionType;
	unsigned long long _renderStyle;
	NSAttributedString* _rightAccessoryText;
	unsigned long long _skittleType;

}

@property (nonatomic,copy,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * boldSubTitle;                              //@synthesize boldSubTitle=_boldSubTitle - In the implementation block
@property (nonatomic,readonly) BOOL showAsTextLessSeparator;                              //@synthesize showAsTextLessSeparator=_showAsTextLessSeparator - In the implementation block
@property (nonatomic,readonly) BOOL showBottomSeparator;                                  //@synthesize showBottomSeparator=_showBottomSeparator - In the implementation block
@property (nonatomic,readonly) unsigned long long actionType;                             //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) unsigned long long renderStyle;                            //@synthesize renderStyle=_renderStyle - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * rightAccessoryText;              //@synthesize rightAccessoryText=_rightAccessoryText - In the implementation block
@property (nonatomic,readonly) unsigned long long skittleType;                            //@synthesize skittleType=_skittleType - In the implementation block
-(BOOL)showBottomSeparator;
-(unsigned long long)renderStyle;
-(id)initWithTitle:(id)arg1 boldSubTitle:(id)arg2 showAsTextLessSeparator:(BOOL)arg3 showBottomSeparator:(BOOL)arg4 actionType:(unsigned long long)arg5 renderStyle:(unsigned long long)arg6 rightAccessoryText:(id)arg7 skittleType:(unsigned long long)arg8 ;
-(NSString *)boldSubTitle;
-(unsigned long long)skittleType;
-(BOOL)showAsTextLessSeparator;
-(NSAttributedString *)rightAccessoryText;
-(NSString *)title;
-(unsigned long long)actionType;
@end

