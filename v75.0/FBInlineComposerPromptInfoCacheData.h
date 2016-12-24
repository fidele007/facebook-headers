/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary;

@interface FBInlineComposerPromptInfoCacheData : FBValueObject <NSCopying, NSCoding> {

	NSDictionary* _promptIDsToState;
	NSDictionary* _promptIDsToDate;

}

@property (nonatomic,copy,readonly) NSDictionary * promptIDsToState;              //@synthesize promptIDsToState=_promptIDsToState - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * promptIDsToDate;               //@synthesize promptIDsToDate=_promptIDsToDate - In the implementation block
-(NSDictionary *)promptIDsToDate;
-(NSDictionary *)promptIDsToState;
-(id)initWithPromptIDsToState:(id)arg1 promptIDsToDate:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
