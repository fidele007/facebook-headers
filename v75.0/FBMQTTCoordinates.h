/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTCoordinates : NSObject <TBase, NSCoding> {

	NSString* __latitude;
	NSString* __longitude;
	NSString* __accuracy;
	BOOL __latitude_isset;
	BOOL __longitude_isset;
	BOOL __accuracy_isset;

}

@property (setter=setLatitude:,getter=latitude,nonatomic,retain) NSString * latitude; 
@property (setter=setLongitude:,getter=longitude,nonatomic,retain) NSString * longitude; 
@property (setter=setAccuracy:,getter=accuracy,nonatomic,retain) NSString * accuracy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)initWithLatitude:(id)arg1 longitude:(id)arg2 accuracy:(id)arg3 ;
-(BOOL)latitudeIsSet;
-(void)unsetLatitude;
-(BOOL)longitudeIsSet;
-(void)unsetLongitude;
-(BOOL)accuracyIsSet;
-(void)unsetAccuracy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(NSString *)accuracy;
-(void)setLatitude:(NSString *)arg1 ;
-(void)setLongitude:(NSString *)arg1 ;
-(void)setAccuracy:(NSString *)arg1 ;
-(NSString *)latitude;
-(NSString *)longitude;
-(void)write:(id)arg1 ;
@end

