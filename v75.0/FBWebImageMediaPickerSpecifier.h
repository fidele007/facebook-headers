/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBWebImageSpecifier.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMediaDataSourceProtocolWrapper, NSString;

@interface FBWebImageMediaPickerSpecifier : FBValueObject <FBWebImageSpecifier, NSCopying> {

	unsigned long long _index;
	FBMediaDataSourceProtocolWrapper* _dataSourceWrapper;
	long long _assetSizes;
	NSString* _logicalIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long index;                                               //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) FBMediaDataSourceProtocolWrapper * dataSourceWrapper;              //@synthesize dataSourceWrapper=_dataSourceWrapper - In the implementation block
@property (nonatomic,readonly) long long assetSizes;                                                   //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,copy,readonly) NSString * logicalIdentifier;                                      //@synthesize logicalIdentifier=_logicalIdentifier - In the implementation block
+(id)type;
-(FBMediaDataSourceProtocolWrapper *)dataSourceWrapper;
-(NSString *)logicalIdentifier;
-(id)initWithIndex:(unsigned long long)arg1 dataSourceWrapper:(id)arg2 assetSizes:(long long)arg3 logicalIdentifier:(id)arg4 ;
-(long long)assetSizes;
-(unsigned long long)index;
@end

