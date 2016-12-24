/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSArray, NSString;

@interface FBReverseGeocodeQueryParams : FBGraphQLInput {

	NSArray* _gpsPoints;
	NSString* _language;
	NSString* _provider;

}

@property (nonatomic,copy) NSArray * gpsPoints;              //@synthesize gpsPoints=_gpsPoints - In the implementation block
@property (nonatomic,copy) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * provider;              //@synthesize provider=_provider - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)gpsPoints;
-(void)setGpsPoints:(NSArray *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
@end
