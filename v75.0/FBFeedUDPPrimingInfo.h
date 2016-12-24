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

@class FBFeedUDPPrimingPacket, NSString;

@interface FBFeedUDPPrimingInfo : FBValueObject <NSCopying, NSCoding> {

	FBFeedUDPPrimingPacket* _packet;
	NSString* _locationIdentifier;
	NSString* _buildVersion;

}

@property (nonatomic,copy,readonly) FBFeedUDPPrimingPacket * packet;              //@synthesize packet=_packet - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationIdentifier;                //@synthesize locationIdentifier=_locationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * buildVersion;                      //@synthesize buildVersion=_buildVersion - In the implementation block
-(id)initWithPacket:(id)arg1 locationIdentifier:(id)arg2 buildVersion:(id)arg3 ;
-(FBFeedUDPPrimingPacket *)packet;
-(NSString *)buildVersion;
-(NSString *)locationIdentifier;
@end

