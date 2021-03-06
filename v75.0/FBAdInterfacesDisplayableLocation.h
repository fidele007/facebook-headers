/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemAdGeoLocation, NSString, NSURL;

@interface FBAdInterfacesDisplayableLocation : FBValueObject <NSCopying> {

	FBMemAdGeoLocation* _geoLocation;
	NSString* _locationDescription;
	NSURL* _iconURL;

}

@property (nonatomic,copy,readonly) FBMemAdGeoLocation * geoLocation;              //@synthesize geoLocation=_geoLocation - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationDescription;                //@synthesize locationDescription=_locationDescription - In the implementation block
@property (nonatomic,copy,readonly) NSURL * iconURL;                               //@synthesize iconURL=_iconURL - In the implementation block
-(id)initWithGeoLocation:(id)arg1 locationDescription:(id)arg2 iconURL:(id)arg3 ;
-(NSURL *)iconURL;
-(NSString *)locationDescription;
-(FBMemAdGeoLocation *)geoLocation;
@end

