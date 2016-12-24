/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBEventActionHistory : FBGraphQLInput {

	NSString* _surface;
	NSString* _mechanism;
	NSString* _extraData;
	NSString* _eventTracking;

}

@property (nonatomic,copy) NSString * surface;                    //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSString * mechanism;                  //@synthesize mechanism=_mechanism - In the implementation block
@property (nonatomic,copy) NSString * extraData;                  //@synthesize extraData=_extraData - In the implementation block
@property (nonatomic,copy) NSString * eventTracking;              //@synthesize eventTracking=_eventTracking - In the implementation block
-(void)setSurface:(NSString *)arg1 ;
-(void)setEventTracking:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)eventTracking;
-(void)setMechanism:(NSString *)arg1 ;
-(NSString *)mechanism;
-(NSString *)surface;
-(void)setExtraData:(NSString *)arg1 ;
-(NSString *)extraData;
@end
