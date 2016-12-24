/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBComposerUpdate, UIImage;

@interface FBComposerInlineSproutTextItemHScrollData : FBValueObject <NSCopying> {

	NSString* _text;
	FBComposerUpdate* _composerUpdate;
	UIImage* _icon;

}

@property (nonatomic,copy,readonly) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) FBComposerUpdate * composerUpdate;              //@synthesize composerUpdate=_composerUpdate - In the implementation block
@property (nonatomic,copy,readonly) UIImage * icon;                                 //@synthesize icon=_icon - In the implementation block
-(FBComposerUpdate *)composerUpdate;
-(id)initWithText:(id)arg1 composerUpdate:(id)arg2 icon:(id)arg3 ;
-(NSString *)text;
-(UIImage *)icon;
@end

