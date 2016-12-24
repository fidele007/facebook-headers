/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMThreadMuteSettingsBuilder : NSObject {

	long long _mutedUntil;
	unsigned long long _reactionMuteSetting;
	unsigned long long _mentionMuteSetting;

}
+(id)threadMuteSettings;
+(id)threadMuteSettingsFromExistingThreadMuteSettings:(id)arg1 ;
-(id)withMutedUntil:(long long)arg1 ;
-(id)withReactionMuteSetting:(unsigned long long)arg1 ;
-(id)withMentionMuteSetting:(unsigned long long)arg1 ;
-(id)build;
@end

