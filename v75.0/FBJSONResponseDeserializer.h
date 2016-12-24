/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBDataDeserializing.h>

@class NSSet;

@interface FBJSONResponseDeserializer : NSObject <FBDataDeserializing> {

	NSSet* _expectedTypes;

}
+(id)setForExpectedTypeEnum:(long long)arg1 ;
-(id)initWithExpectedTypes:(long long)arg1 ;
-(id)_parseJSONDataFragment:(id)arg1 error:(id*)arg2 ;
-(void)deserialize:(id)arg1 responseProcessor:(id)arg2 completionCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 ;
-(id)description;
@end

