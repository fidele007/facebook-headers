/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMThreadMuteSettings : FBValueObject <NSCoding, NSCopying> {

	long long _mutedUntil;
	unsigned long long _reactionMuteSetting;
	unsigned long long _mentionMuteSetting;

}

@property (nonatomic,readonly) long long mutedUntil;                                //@synthesize mutedUntil=_mutedUntil - In the implementation block
@property (nonatomic,readonly) unsigned long long reactionMuteSetting;              //@synthesize reactionMuteSetting=_reactionMuteSetting - In the implementation block
@property (nonatomic,readonly) unsigned long long mentionMuteSetting;               //@synthesize mentionMuteSetting=_mentionMuteSetting - In the implementation block
-(long long)mutedUntil;
-(unsigned long long)reactionMuteSetting;
-(unsigned long long)mentionMuteSetting;
-(id)initWithMutedUntil:(long long)arg1 reactionMuteSetting:(unsigned long long)arg2 mentionMuteSetting:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

