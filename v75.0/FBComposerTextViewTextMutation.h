/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerTextViewTextMutation : FBValueObject <NSCopying> {

	NSString* _fromText;
	NSString* _replacementText;
	NSRange _range;

}

@property (nonatomic,copy,readonly) NSString * fromText;                     //@synthesize fromText=_fromText - In the implementation block
@property (nonatomic,readonly) NSRange range;                                //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
-(id)initWithFromText:(id)arg1 range:(NSRange)arg2 replacementText:(id)arg3 ;
-(NSString *)fromText;
-(NSString *)replacementText;
-(NSRange)range;
@end

