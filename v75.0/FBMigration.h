/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMigrationConfig, NSArray;

@interface FBMigration : FBValueObject <NSCopying> {

	FBMigrationConfig* _configuration;
	NSArray* _steps;

}

@property (nonatomic,copy,readonly) FBMigrationConfig * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * steps;                                //@synthesize steps=_steps - In the implementation block
-(id)initWithConfiguration:(id)arg1 steps:(id)arg2 ;
-(FBMigrationConfig *)configuration;
-(NSArray *)steps;
@end

