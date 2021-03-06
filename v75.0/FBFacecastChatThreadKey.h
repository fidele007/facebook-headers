/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBFacecastChatThreadKey : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _canonicalThreadKey_otherUserFBID;
	NSString* _groupThreadKey_groupThreadFBID;

}
+(id)canonicalThreadKeyWithOtherUserFBID:(id)arg1 ;
+(id)groupThreadKeyWithGroupThreadFBID:(id)arg1 ;
-(void)matchCanonicalThreadKey:(/*^block*/id)arg1 groupThreadKey:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

