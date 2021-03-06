/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CLLocation;

@interface SRLocation : NSObject <NSCopying, NSCoding> {

	CLLocation* _nativeLocation;
	double _longitude;
	double _latitude;

}

@property (nonatomic,copy,readonly) CLLocation * nativeLocation;              //@synthesize nativeLocation=_nativeLocation - In the implementation block
@property (nonatomic,readonly) double longitude;                              //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double latitude;                               //@synthesize latitude=_latitude - In the implementation block
+(id)locationWithCLLocation:(id)arg1 ;
+(id)locationWithLongitude:(double)arg1 latitude:(double)arg2 ;
-(id)initWithLongitude:(double)arg1 latitude:(double)arg2 ;
-(CLLocation *)nativeLocation;
-(double)distanceToLocationInKilometer:(id)arg1 ;
-(CGPoint)latLong;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(double)latitude;
-(double)longitude;
@end

