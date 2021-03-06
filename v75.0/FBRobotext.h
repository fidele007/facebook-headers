/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSString, NSArray;

@interface FBRobotext : NSObject <NSCoding, NSCopying> {

	NSAttributedString* _attributedStringRepresentation;
	unsigned long long _hash;
	NSString* _stringRepresentation;
	NSArray* _tags;

}

@property (nonatomic,copy,readonly) NSArray * tags;              //@synthesize tags=_tags - In the implementation block
-(void)enumerateTagsUsingBlock:(/*^block*/id)arg1 ;
-(id)attributedStringRepresentation;
-(id)initWithString:(id)arg1 tags:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tags;
-(id)stringRepresentation;
@end

