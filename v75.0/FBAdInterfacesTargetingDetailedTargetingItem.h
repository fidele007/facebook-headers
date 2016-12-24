/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBAdInterfacesTargetingDetailedTargetingItem : FBValueObject <NSCopying> {

	NSString* _identifier;
	NSString* _name;
	NSArray* _path;
	NSString* _targetType;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetType;              //@synthesize targetType=_targetType - In the implementation block
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 path:(id)arg3 targetType:(id)arg4 ;
-(NSString *)targetType;
-(NSString *)name;
-(NSString *)identifier;
-(NSArray *)path;
@end
