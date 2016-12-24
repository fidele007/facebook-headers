/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBWebRTCCallConnectionStatus : FBValueObject <NSCopying> {

	BOOL _isConnected;
	BOOL _isPoorAudioConnection;
	BOOL _isPoorVideoConnection;
	BOOL _isH264Video;
	long long _audioBitrate;
	long long _videoBitrate;
	unsigned long long _localVideoState;
	unsigned long long _remoteVideoState;
	unsigned long long _connectionQuality;

}

@property (nonatomic,readonly) BOOL isConnected;                                  //@synthesize isConnected=_isConnected - In the implementation block
@property (nonatomic,readonly) long long audioBitrate;                            //@synthesize audioBitrate=_audioBitrate - In the implementation block
@property (nonatomic,readonly) long long videoBitrate;                            //@synthesize videoBitrate=_videoBitrate - In the implementation block
@property (nonatomic,readonly) BOOL isPoorAudioConnection;                        //@synthesize isPoorAudioConnection=_isPoorAudioConnection - In the implementation block
@property (nonatomic,readonly) BOOL isPoorVideoConnection;                        //@synthesize isPoorVideoConnection=_isPoorVideoConnection - In the implementation block
@property (nonatomic,readonly) unsigned long long localVideoState;                //@synthesize localVideoState=_localVideoState - In the implementation block
@property (nonatomic,readonly) unsigned long long remoteVideoState;               //@synthesize remoteVideoState=_remoteVideoState - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionQuality;              //@synthesize connectionQuality=_connectionQuality - In the implementation block
@property (nonatomic,readonly) BOOL isH264Video;                                  //@synthesize isH264Video=_isH264Video - In the implementation block
-(unsigned long long)connectionQuality;
-(long long)videoBitrate;
-(BOOL)isPoorAudioConnection;
-(BOOL)isPoorVideoConnection;
-(unsigned long long)localVideoState;
-(unsigned long long)remoteVideoState;
-(id)initWithIsConnected:(BOOL)arg1 audioBitrate:(long long)arg2 videoBitrate:(long long)arg3 isPoorAudioConnection:(BOOL)arg4 isPoorVideoConnection:(BOOL)arg5 localVideoState:(unsigned long long)arg6 remoteVideoState:(unsigned long long)arg7 connectionQuality:(unsigned long long)arg8 isH264Video:(BOOL)arg9 ;
-(BOOL)isH264Video;
-(long long)audioBitrate;
-(BOOL)isConnected;
@end

