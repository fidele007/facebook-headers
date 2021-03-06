/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface FBMIndexedMessageSet : NSObject <NSFastEnumeration, NSCopying> {

	NSDictionary* _messageIdToMessageMap;
	NSDictionary* _offlineThreadingIdToMessageMap;
	NSArray* _messagesInNormalizedOrder;

}
-(id)oldestMessage;
-(id)newestMessage;
-(id)chronologicalEnumerator;
-(id)reverseChronologicalEnumerator;
-(id)messageMatching:(id)arg1 ;
-(id)initWithMessageIdMap:(id)arg1 offlineThreadingIdMap:(id)arg2 messagesInNormalizedOrder:(id)arg3 ;
-(id)messageByDescriptor:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_FB467*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

