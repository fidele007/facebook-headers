/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBLanguageNameFormat : FBValueObject <NSCopying> {

	BOOL _shortNameIsFullName;
	NSString* _nameSeparator;

}

@property (nonatomic,readonly) BOOL shortNameIsFullName;                   //@synthesize shortNameIsFullName=_shortNameIsFullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameSeparator;              //@synthesize nameSeparator=_nameSeparator - In the implementation block
-(NSString *)nameSeparator;
-(BOOL)shortNameIsFullName;
-(id)initWithShortNameIsFullName:(BOOL)arg1 nameSeparator:(id)arg2 ;
@end

