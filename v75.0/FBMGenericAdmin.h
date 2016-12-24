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

@class NSString, NSArray, FBStringWithRedactedDescription;

@interface FBMGenericAdmin : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	NSString* _gameAdminMessage_foldedText;
	NSString* _gameAdminMessage_unfoldedText;
	NSString* _gameAdminMessage_gameType;
	NSString* _gameAdminMessage_gameId;
	NSString* _gameAdminMessage_gameName;
	NSString* _gameAdminMessage_gameLogoUri;
	NSArray* _gameAdminMessage_leaderboardItems;
	NSString* _pollAdminMessage_questionId;
	NSString* _pollAdminMessage_questionText;
	long long _pollAdminMessage_totalOptionCount;
	NSArray* _pollAdminMessage_options;
	BOOL _pollAdminMessage_viewerHasVoted;
	NSString* _mediaSubscriptionManageAdminMessage_pageId;
	NSString* _mediaSubscriptionManageAdminMessage_pageName;
	NSString* _mediaSubscriptionManageAdminMessage_pageProfilePicUri;
	NSString* _mediaSubscriptionManageAdminMessage_messageState;
	NSArray* _mediaSubscriptionManageAdminMessage_callToActions;
	FBStringWithRedactedDescription* _mediaSubscriptionManageAdminMessage_messageText;
	NSString* _mediaSubscriptionManageAdminMessage_unfoldCTAText;
	NSString* _omniMFlowStateAdminMessage_stateObjectId;
	NSArray* _omniMFlowStateAdminMessage_directives;
	NSString* _rtcMultiwayCallAdminMessage_notificationType;
	NSString* _rtcMultiwayCallAdminMessage_serverInfoData;
	BOOL _rtcMultiwayCallAdminMessage_video;

}
+(id)gameAdminMessageWithFoldedText:(id)arg1 unfoldedText:(id)arg2 gameType:(id)arg3 gameId:(id)arg4 gameName:(id)arg5 gameLogoUri:(id)arg6 leaderboardItems:(id)arg7 ;
+(id)mediaSubscriptionManageAdminMessageWithPageId:(id)arg1 pageName:(id)arg2 pageProfilePicUri:(id)arg3 messageState:(id)arg4 callToActions:(id)arg5 messageText:(id)arg6 unfoldCTAText:(id)arg7 ;
+(id)omniMFlowStateAdminMessageWithStateObjectId:(id)arg1 directives:(id)arg2 ;
+(id)pollAdminMessageWithQuestionId:(id)arg1 questionText:(id)arg2 totalOptionCount:(long long)arg3 options:(id)arg4 viewerHasVoted:(BOOL)arg5 ;
+(id)rtcMultiwayCallAdminMessageWithNotificationType:(id)arg1 serverInfoData:(id)arg2 video:(BOOL)arg3 ;
-(void)matchGameAdminMessage:(/*^block*/id)arg1 pollAdminMessage:(/*^block*/id)arg2 mediaSubscriptionManageAdminMessage:(/*^block*/id)arg3 omniMFlowStateAdminMessage:(/*^block*/id)arg4 rtcMultiwayCallAdminMessage:(/*^block*/id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

