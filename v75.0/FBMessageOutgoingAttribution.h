/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMessageOutgoingAttribution : FBValueObject <NSCopying, NSCoding> {

	BOOL _fromTrustedExternalURL;
	BOOL _renderAsSticker;
	NSString* _sourceAppFBID;
	NSString* _bundleID;
	NSString* _attributedAppMetadata;

}

@property (nonatomic,copy,readonly) NSString * sourceAppFBID;                      //@synthesize sourceAppFBID=_sourceAppFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * attributedAppMetadata;              //@synthesize attributedAppMetadata=_attributedAppMetadata - In the implementation block
@property (nonatomic,readonly) BOOL fromTrustedExternalURL;                        //@synthesize fromTrustedExternalURL=_fromTrustedExternalURL - In the implementation block
@property (nonatomic,readonly) BOOL renderAsSticker;                               //@synthesize renderAsSticker=_renderAsSticker - In the implementation block
-(BOOL)fromTrustedExternalURL;
-(BOOL)renderAsSticker;
-(id)initWithSourceAppFBID:(id)arg1 bundleID:(id)arg2 attributedAppMetadata:(id)arg3 fromTrustedExternalURL:(BOOL)arg4 renderAsSticker:(BOOL)arg5 ;
-(NSString *)sourceAppFBID;
-(NSString *)attributedAppMetadata;
-(NSString *)bundleID;
@end

