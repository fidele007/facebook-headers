/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSArray;

@interface SYNSearchNullStateGroupData : NSObject {

	unsigned long long _type;
	NSArray* _results;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * results;               //@synthesize results=_results - In the implementation block
-(id)initWithNativeSearchNullStateGroupData:(SearchNullStateGroupData*)arg1 sessionUser:(id)arg2 ;
-(unsigned long long)type;
-(NSArray *)results;
@end

