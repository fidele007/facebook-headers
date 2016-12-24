/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface FBDestinationLoggingConfiguration : FBValueObject <NSCopying> {

	NSString* _name;
	NSSet* _finishConditions;
	NSSet* _failureConditions;

}

@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSSet * finishConditions;               //@synthesize finishConditions=_finishConditions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * failureConditions;              //@synthesize failureConditions=_failureConditions - In the implementation block
-(id)initWithName:(id)arg1 finishConditions:(id)arg2 failureConditions:(id)arg3 ;
-(NSSet *)finishConditions;
-(NSSet *)failureConditions;
-(NSString *)name;
@end
