/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSArray, NSDictionary, NSString, FBWebRTCConferenceParticipantInfo, FBWebRTCMediaState, NSNumber;

@interface FBWebRTCCallModel : FBValueObject <NSCopying> {

	BOOL _isOutboundCall;
	BOOL _isDirectVideoCall;
	BOOL _isConferenceCall;
	BOOL _isUsingMultiwayProtocol;
	BOOL _isVideoCallAnsweredAsAudioCall;
	BOOL _isDominantSpeakerPinned;
	BOOL _isSpeakerPhone;
	BOOL _isVideoEscalationRequired;
	BOOL _isLocalVideoSupported;
	BOOL _isRemoteVideoSupported;
	BOOL _hasConnected;
	BOOL _hasAlerted;
	BOOL _hasReceivedVideo;
	BOOL _hasSentVideo;
	BOOL _isScheduledCall;
	BOOL _isEndToEndEncrypted;
	long long _callId;
	NSUUID* _uuid;
	NSArray* _peerUsers_DEPRECATED;
	NSArray* _peerUserIds;
	NSDictionary* _participantStates;
	NSDictionary* _peerUsersInfo;
	NSString* _customCallType;
	unsigned long long _callState;
	NSString* _conferenceName;
	FBWebRTCConferenceParticipantInfo* _currentDominantSpeaker;
	FBWebRTCMediaState* _localMedia;
	FBWebRTCMediaState* _remoteMedia;
	unsigned long long _currentCamera;
	unsigned long long _maxUsersInCall;
	NSNumber* _startTimestamp;
	NSNumber* _endTimestamp;
	NSString* _callabilityStatus;
	NSDictionary* _analyticsExtra;

}

@property (nonatomic,readonly) BOOL hasConnectedWithVideo; 
@property (nonatomic,readonly) BOOL isInstantVideoCall; 
@property (nonatomic,readonly) long long callId;                                                             //@synthesize callId=_callId - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * peerUsers_DEPRECATED;                                          //@synthesize peerUsers_DEPRECATED=_peerUsers_DEPRECATED - In the implementation block
@property (nonatomic,copy,readonly) NSArray * peerUserIds;                                                   //@synthesize peerUserIds=_peerUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * participantStates;                                        //@synthesize participantStates=_participantStates - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * peerUsersInfo;                                            //@synthesize peerUsersInfo=_peerUsersInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * customCallType;                                               //@synthesize customCallType=_customCallType - In the implementation block
@property (nonatomic,readonly) unsigned long long callState;                                                 //@synthesize callState=_callState - In the implementation block
@property (nonatomic,readonly) BOOL isOutboundCall;                                                          //@synthesize isOutboundCall=_isOutboundCall - In the implementation block
@property (nonatomic,readonly) BOOL isDirectVideoCall;                                                       //@synthesize isDirectVideoCall=_isDirectVideoCall - In the implementation block
@property (nonatomic,readonly) BOOL isConferenceCall;                                                        //@synthesize isConferenceCall=_isConferenceCall - In the implementation block
@property (nonatomic,readonly) BOOL isUsingMultiwayProtocol;                                                 //@synthesize isUsingMultiwayProtocol=_isUsingMultiwayProtocol - In the implementation block
@property (nonatomic,copy,readonly) NSString * conferenceName;                                               //@synthesize conferenceName=_conferenceName - In the implementation block
@property (nonatomic,readonly) BOOL isVideoCallAnsweredAsAudioCall;                                          //@synthesize isVideoCallAnsweredAsAudioCall=_isVideoCallAnsweredAsAudioCall - In the implementation block
@property (nonatomic,copy,readonly) FBWebRTCConferenceParticipantInfo * currentDominantSpeaker;              //@synthesize currentDominantSpeaker=_currentDominantSpeaker - In the implementation block
@property (nonatomic,readonly) BOOL isDominantSpeakerPinned;                                                 //@synthesize isDominantSpeakerPinned=_isDominantSpeakerPinned - In the implementation block
@property (nonatomic,copy,readonly) FBWebRTCMediaState * localMedia;                                         //@synthesize localMedia=_localMedia - In the implementation block
@property (nonatomic,copy,readonly) FBWebRTCMediaState * remoteMedia;                                        //@synthesize remoteMedia=_remoteMedia - In the implementation block
@property (nonatomic,readonly) BOOL isSpeakerPhone;                                                          //@synthesize isSpeakerPhone=_isSpeakerPhone - In the implementation block
@property (nonatomic,readonly) unsigned long long currentCamera;                                             //@synthesize currentCamera=_currentCamera - In the implementation block
@property (nonatomic,readonly) BOOL isVideoEscalationRequired;                                               //@synthesize isVideoEscalationRequired=_isVideoEscalationRequired - In the implementation block
@property (nonatomic,readonly) BOOL isLocalVideoSupported;                                                   //@synthesize isLocalVideoSupported=_isLocalVideoSupported - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteVideoSupported;                                                  //@synthesize isRemoteVideoSupported=_isRemoteVideoSupported - In the implementation block
@property (nonatomic,readonly) BOOL hasConnected;                                                            //@synthesize hasConnected=_hasConnected - In the implementation block
@property (nonatomic,readonly) BOOL hasAlerted;                                                              //@synthesize hasAlerted=_hasAlerted - In the implementation block
@property (nonatomic,readonly) BOOL hasReceivedVideo;                                                        //@synthesize hasReceivedVideo=_hasReceivedVideo - In the implementation block
@property (nonatomic,readonly) BOOL hasSentVideo;                                                            //@synthesize hasSentVideo=_hasSentVideo - In the implementation block
@property (nonatomic,readonly) unsigned long long maxUsersInCall;                                            //@synthesize maxUsersInCall=_maxUsersInCall - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * startTimestamp;                                               //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * endTimestamp;                                                 //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * callabilityStatus;                                            //@synthesize callabilityStatus=_callabilityStatus - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analyticsExtra;                                           //@synthesize analyticsExtra=_analyticsExtra - In the implementation block
@property (nonatomic,readonly) BOOL isScheduledCall;                                                         //@synthesize isScheduledCall=_isScheduledCall - In the implementation block
@property (nonatomic,readonly) BOOL isEndToEndEncrypted;                                                     //@synthesize isEndToEndEncrypted=_isEndToEndEncrypted - In the implementation block
-(NSNumber *)endTimestamp;
-(NSDictionary *)participantStates;
-(NSArray *)peerUserIds;
-(BOOL)isOutboundCall;
-(BOOL)isConferenceCall;
-(BOOL)isDirectVideoCall;
-(BOOL)isVideoCallAnsweredAsAudioCall;
-(FBWebRTCMediaState *)localMedia;
-(FBWebRTCMediaState *)remoteMedia;
-(BOOL)isSpeakerPhone;
-(BOOL)isVideoEscalationRequired;
-(BOOL)isLocalVideoSupported;
-(BOOL)isRemoteVideoSupported;
-(BOOL)hasSentVideo;
-(BOOL)hasReceivedVideo;
-(NSString *)callabilityStatus;
-(BOOL)isUsingMultiwayProtocol;
-(NSString *)conferenceName;
-(NSDictionary *)analyticsExtra;
-(NSDictionary *)peerUsersInfo;
-(NSString *)customCallType;
-(NSArray *)peerUsers_DEPRECATED;
-(BOOL)isDominantSpeakerPinned;
-(BOOL)hasConnectedWithVideo;
-(BOOL)isInstantVideoCall;
-(id)initWithCallId:(long long)arg1 uuid:(id)arg2 peerUsers_DEPRECATED:(id)arg3 peerUserIds:(id)arg4 participantStates:(id)arg5 peerUsersInfo:(id)arg6 customCallType:(id)arg7 callState:(unsigned long long)arg8 isOutboundCall:(BOOL)arg9 isDirectVideoCall:(BOOL)arg10 isConferenceCall:(BOOL)arg11 isUsingMultiwayProtocol:(BOOL)arg12 conferenceName:(id)arg13 isVideoCallAnsweredAsAudioCall:(BOOL)arg14 currentDominantSpeaker:(id)arg15 isDominantSpeakerPinned:(BOOL)arg16 localMedia:(id)arg17 remoteMedia:(id)arg18 isSpeakerPhone:(BOOL)arg19 currentCamera:(unsigned long long)arg20 isVideoEscalationRequired:(BOOL)arg21 isLocalVideoSupported:(BOOL)arg22 isRemoteVideoSupported:(BOOL)arg23 hasConnected:(BOOL)arg24 hasAlerted:(BOOL)arg25 hasReceivedVideo:(BOOL)arg26 hasSentVideo:(BOOL)arg27 maxUsersInCall:(unsigned long long)arg28 startTimestamp:(id)arg29 endTimestamp:(id)arg30 callabilityStatus:(id)arg31 analyticsExtra:(id)arg32 isScheduledCall:(BOOL)arg33 isEndToEndEncrypted:(BOOL)arg34 ;
-(FBWebRTCConferenceParticipantInfo *)currentDominantSpeaker;
-(unsigned long long)maxUsersInCall;
-(BOOL)isScheduledCall;
-(BOOL)isEndToEndEncrypted;
-(NSUUID *)uuid;
-(unsigned long long)callState;
-(double)callDuration;
-(BOOL)hasConnected;
-(NSNumber *)startTimestamp;
-(long long)callId;
-(unsigned long long)currentCamera;
-(BOOL)hasAlerted;
@end

