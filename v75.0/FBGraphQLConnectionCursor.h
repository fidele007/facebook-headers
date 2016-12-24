/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBGraphQLConnectionCursor : FBValueObject <NSCopying> {

	NSString* _cursorString;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) NSString * cursorString;              //@synthesize cursorString=_cursorString - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                   //@synthesize type=_type - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(NSString *)cursorString;
-(id)initWithCursorString:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)type;
@end

