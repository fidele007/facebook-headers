/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPageCreationPageAddress : FBValueObject <NSCopying> {

	NSString* _street;
	NSString* _phone;
	NSString* _cityId;
	NSString* _cityName;
	NSString* _zip;

}

@property (nonatomic,copy,readonly) NSString * street;                //@synthesize street=_street - In the implementation block
@property (nonatomic,copy,readonly) NSString * phone;                 //@synthesize phone=_phone - In the implementation block
@property (nonatomic,copy,readonly) NSString * cityId;                //@synthesize cityId=_cityId - In the implementation block
@property (nonatomic,copy,readonly) NSString * cityName;              //@synthesize cityName=_cityName - In the implementation block
@property (nonatomic,copy,readonly) NSString * zip;                   //@synthesize zip=_zip - In the implementation block
-(NSString *)cityId;
-(id)initWithStreet:(id)arg1 phone:(id)arg2 cityId:(id)arg3 cityName:(id)arg4 zip:(id)arg5 ;
-(NSString *)zip;
-(NSString *)street;
-(NSString *)cityName;
-(NSString *)phone;
@end
