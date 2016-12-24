/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNEmojiFontPolicyListeningAnnouncer;

@interface MNEmojiFontPolicy : NSObject {

	BOOL _serverGatingValue;
	BOOL _featureDisabled;
	BOOL _hasBundledFont;
	BOOL _hasExternalFont;
	BOOL _shouldUseMessengerEmojiFont;
	unsigned long long _selectedEmojiFontImplementation;
	MNEmojiFontPolicyListeningAnnouncer* _announcer;

}
+(id)sharedInstance;
-(void)_updateShouldUseMessengerEmojiFontValue;
-(BOOL)canEnableMessengerEmojiFont;
-(BOOL)isMessengerEmojiFontEnabled;
-(BOOL)_isEmojiFontAvailable;
-(void)setFeatureDisabled:(BOOL)arg1 ;
-(void)setServerGatingValue:(BOOL)arg1 ;
-(void)setHasBundledFont:(BOOL)arg1 ;
-(void)setHasExternalFont:(BOOL)arg1 ;
-(void)selectEmojiFontImplementation:(unsigned long long)arg1 ;
-(BOOL)shouldUseMessengerEmojiFont;
-(BOOL)canUseVersion7AndAboveUnicode;
-(unsigned long long)selectedEmojiFontImplementation;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

