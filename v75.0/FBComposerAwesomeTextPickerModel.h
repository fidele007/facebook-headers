/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBComposerAwesomeTextStyle;

@interface FBComposerAwesomeTextPickerModel : FBValueObject <NSCopying> {

	unsigned long long _state;
	NSArray* _items;
	FBComposerAwesomeTextStyle* _currentStyle;
	SEL _togglePickerAction;
	SEL _tapStyleOptionItemAction;

}

@property (nonatomic,readonly) unsigned long long state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                                        //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAwesomeTextStyle * currentStyle;              //@synthesize currentStyle=_currentStyle - In the implementation block
@property (nonatomic,readonly) SEL togglePickerAction;                                      //@synthesize togglePickerAction=_togglePickerAction - In the implementation block
@property (nonatomic,readonly) SEL tapStyleOptionItemAction;                                //@synthesize tapStyleOptionItemAction=_tapStyleOptionItemAction - In the implementation block
-(id)initWithState:(unsigned long long)arg1 items:(id)arg2 currentStyle:(id)arg3 togglePickerAction:(SEL)arg4 tapStyleOptionItemAction:(SEL)arg5 ;
-(SEL)togglePickerAction;
-(SEL)tapStyleOptionItemAction;
-(unsigned long long)state;
-(FBComposerAwesomeTextStyle *)currentStyle;
-(NSArray *)items;
@end

