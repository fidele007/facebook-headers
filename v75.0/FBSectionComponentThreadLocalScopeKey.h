/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObject;
@interface FBSectionComponentThreadLocalScopeKey : NSObject <NSCopying> {

	Class _componentClass;
	id<NSObject> _identifier;

}

@property (nonatomic,readonly) Class componentClass;                 //@synthesize componentClass=_componentClass - In the implementation block
@property (nonatomic,readonly) id<NSObject> identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)initWithComponentClass:(Class)arg1 identifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSObject>)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)componentClass;
@end

