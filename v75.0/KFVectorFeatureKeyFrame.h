/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface KFVectorFeatureKeyFrame : NSObject <NSCopying, NSCoding> {

	NSString* _type;
	NSArray* _paths;
	long long _startFrame;

}

@property (nonatomic,copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * paths;              //@synthesize paths=_paths - In the implementation block
@property (nonatomic,readonly) long long startFrame;              //@synthesize startFrame=_startFrame - In the implementation block
-(id)initWithType:(id)arg1 paths:(id)arg2 startFrame:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startFrame;
-(NSArray *)paths;
@end

