/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface FBMoviesHomeLocationContext : FBValueObject <NSCopying> {

	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _radius;
	NSString* _cityName;

}

@property (nonatomic,copy,readonly) NSNumber * latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * radius;                 //@synthesize radius=_radius - In the implementation block
@property (nonatomic,copy,readonly) NSString * cityName;               //@synthesize cityName=_cityName - In the implementation block
-(id)initWithLatitude:(id)arg1 longitude:(id)arg2 radius:(id)arg3 cityName:(id)arg4 ;
-(NSNumber *)radius;
-(NSString *)cityName;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
@end

