/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBFunnelPayload;

@interface FBComposerFunnelEvent : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _addActionToFunnel_actionName;
	NSString* _addActionToFunnel_actionTag;
	FBFunnelPayload* _addActionToFunnel_actionPayload;
	NSString* _addTagToFunnel_tag;

}
+(id)addTagToFunnelWithTag:(id)arg1 ;
+(id)addActionToFunnelWithActionName:(id)arg1 actionTag:(id)arg2 actionPayload:(id)arg3 ;
-(void)matchAddActionToFunnel:(/*^block*/id)arg1 addTagToFunnel:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

