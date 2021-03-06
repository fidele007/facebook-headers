/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMGroupJoinRequest;

@interface FBMThreadJoinableGroupInfoUpdate : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	unsigned long long _updateJoinableMode_joinableMode;
	NSString* _updateJoinableMode_joinableLink;
	unsigned long long _updateApprovalMode_approvalMode;
	FBMGroupJoinRequest* _addToApprovalQueue_groupJoinRequest;
	NSString* _removeFromApprovalQueue_userId;

}
+(id)addToApprovalQueueWithGroupJoinRequest:(id)arg1 ;
+(id)removeFromApprovalQueueWithUserId:(id)arg1 ;
+(id)updateApprovalModeWithApprovalMode:(unsigned long long)arg1 ;
+(id)updateJoinableModeWithJoinableMode:(unsigned long long)arg1 joinableLink:(id)arg2 ;
-(void)matchUpdateJoinableMode:(/*^block*/id)arg1 updateApprovalMode:(/*^block*/id)arg2 addToApprovalQueue:(/*^block*/id)arg3 removeFromApprovalQueue:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

