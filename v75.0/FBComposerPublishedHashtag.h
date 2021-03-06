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
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerPublishedHashtag : FBValueObject <NSCopying, NSCoding> {

	NSString* _textOfHashtag;
	NSRange _rangeOfHashtagInAllText;

}

@property (nonatomic,copy,readonly) NSString * textOfHashtag;                //@synthesize textOfHashtag=_textOfHashtag - In the implementation block
@property (nonatomic,readonly) NSRange rangeOfHashtagInAllText;              //@synthesize rangeOfHashtagInAllText=_rangeOfHashtagInAllText - In the implementation block
-(NSString *)textOfHashtag;
-(NSRange)rangeOfHashtagInAllText;
-(id)initWithTextOfHashtag:(id)arg1 rangeOfHashtagInAllText:(NSRange)arg2 ;
@end

