/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBEventMessageRelationshipBarModel, FBEventInvitedByRelationshipBarModel;

@interface FBEventRelationshipBarViewModel : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBEventMessageRelationshipBarModel* _messageRelationshipBar_messageRelationshipBar;
	FBEventInvitedByRelationshipBarModel* _invitedByRelationshipBar_invitedByRelationshipBar;

}
+(id)emptyRelationshipBar;
+(id)invitedByRelationshipBarWithInvitedByRelationshipBar:(id)arg1 ;
+(id)messageRelationshipBarWithMessageRelationshipBar:(id)arg1 ;
-(void)matchEmptyRelationshipBar:(/*^block*/id)arg1 messageRelationshipBar:(/*^block*/id)arg2 invitedByRelationshipBar:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

