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

@class FBExtensibleMessageCustomizationData, FBExtensibleMessagePlatformData, FBExtensibleMessageMontageData, FBExtensibleMessageSourceData, FBExtensibleMessageProfileRangeData, FBExtensibleMessageMetaRangeData;

@interface FBExtensibleMessageData : FBValueObject <NSCoding, NSCopying> {

	FBExtensibleMessageCustomizationData* _customizationData;
	FBExtensibleMessagePlatformData* _platformData;
	FBExtensibleMessageMontageData* _montageData;
	FBExtensibleMessageSourceData* _messageSourceData;
	FBExtensibleMessageProfileRangeData* _profileRangeData;
	FBExtensibleMessageMetaRangeData* _metaRangeData;

}

@property (nonatomic,copy,readonly) FBExtensibleMessageCustomizationData * customizationData;              //@synthesize customizationData=_customizationData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessagePlatformData * platformData;                        //@synthesize platformData=_platformData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageMontageData * montageData;                          //@synthesize montageData=_montageData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageSourceData * messageSourceData;                     //@synthesize messageSourceData=_messageSourceData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageProfileRangeData * profileRangeData;                //@synthesize profileRangeData=_profileRangeData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageMetaRangeData * metaRangeData;                      //@synthesize metaRangeData=_metaRangeData - In the implementation block
-(FBExtensibleMessageSourceData *)messageSourceData;
-(id)initWithCustomizationData:(id)arg1 platformData:(id)arg2 montageData:(id)arg3 messageSourceData:(id)arg4 profileRangeData:(id)arg5 metaRangeData:(id)arg6 ;
-(FBExtensibleMessageCustomizationData *)customizationData;
-(FBExtensibleMessagePlatformData *)platformData;
-(FBExtensibleMessageMontageData *)montageData;
-(FBExtensibleMessageProfileRangeData *)profileRangeData;
-(FBExtensibleMessageMetaRangeData *)metaRangeData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

