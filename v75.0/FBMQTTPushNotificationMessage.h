/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMQTTAndroidNotificationPayload, NSString;

@interface FBMQTTPushNotificationMessage : NSObject <TBase, NSCoding> {

	FBMQTTAndroidNotificationPayload* __fbpushdata;
	BOOL __fbpushdata_isset;

}

@property (setter=setFbpushdata:,getter=fbpushdata,nonatomic,retain) FBMQTTAndroidNotificationPayload * fbpushdata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setFbpushdata:(FBMQTTAndroidNotificationPayload *)arg1 ;
-(id)initWithFbpushdata:(id)arg1 ;
-(FBMQTTAndroidNotificationPayload *)fbpushdata;
-(BOOL)fbpushdataIsSet;
-(void)unsetFbpushdata;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

