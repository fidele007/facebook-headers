/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPrivacyEntity, NSString;

@interface FBComposerPrivacySettingBuilder : NSObject {

	FBPrivacyEntity* _privacyEntity;
	NSString* _name;
	NSString* _explanation;
	unsigned long long _iconType;
	long long _restrictiveness;

}
+(id)composerPrivacySetting;
+(id)composerPrivacySettingFromExistingComposerPrivacySetting:(id)arg1 ;
-(id)withName:(id)arg1 ;
-(id)withPrivacyEntity:(id)arg1 ;
-(id)withExplanation:(id)arg1 ;
-(id)withIconType:(unsigned long long)arg1 ;
-(id)withRestrictiveness:(long long)arg1 ;
-(id)build;
@end
