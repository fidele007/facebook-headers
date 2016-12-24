/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSVGKitData : FBValueObject <NSCopying> {

	NSString* _bundle;
	NSString* _file;

}

@property (nonatomic,copy,readonly) NSString * bundle;              //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * file;                //@synthesize file=_file - In the implementation block
-(id)initWithBundle:(id)arg1 file:(id)arg2 ;
-(NSString *)bundle;
-(NSString *)file;
@end

