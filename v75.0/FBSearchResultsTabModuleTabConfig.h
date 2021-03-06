/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBSearchResultsTabModuleTabConfig : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _semantic;
	NSArray* _initialResults;

}

@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * semantic;                   //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,copy,readonly) NSArray * initialResults;              //@synthesize initialResults=_initialResults - In the implementation block
-(id)initWithTitle:(id)arg1 semantic:(id)arg2 initialResults:(id)arg3 ;
-(NSArray *)initialResults;
-(NSString *)title;
-(NSString *)semantic;
@end

