/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBInlineComposerPhotoRemindersPrompt : FBValueObject <NSCopying> {

	NSArray* _photoRemindersAssets;
	unsigned long long _reloadVersion;
	long long _initialState;
	unsigned long long _numberOfNewAssetsSinceLastImpression;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) NSArray * photoRemindersAssets;                                  //@synthesize photoRemindersAssets=_photoRemindersAssets - In the implementation block
@property (nonatomic,readonly) unsigned long long reloadVersion;                                     //@synthesize reloadVersion=_reloadVersion - In the implementation block
@property (nonatomic,readonly) long long initialState;                                               //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfNewAssetsSinceLastImpression;              //@synthesize numberOfNewAssetsSinceLastImpression=_numberOfNewAssetsSinceLastImpression - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                              //@synthesize type=_type - In the implementation block
-(NSArray *)photoRemindersAssets;
-(unsigned long long)numberOfNewAssetsSinceLastImpression;
-(unsigned long long)reloadVersion;
-(id)initWithPhotoRemindersAssets:(id)arg1 reloadVersion:(unsigned long long)arg2 initialState:(long long)arg3 numberOfNewAssetsSinceLastImpression:(unsigned long long)arg4 type:(unsigned long long)arg5 ;
-(unsigned long long)type;
-(long long)initialState;
@end

