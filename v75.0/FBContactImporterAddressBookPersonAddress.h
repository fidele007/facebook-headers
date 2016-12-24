/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBContactImporterAddressBookPersonProperty.h>

@class NSString;

@interface FBContactImporterAddressBookPersonAddress : NSObject <FBContactImporterAddressBookPersonProperty> {

	NSString* _label;
	NSString* _street;
	NSString* _city;
	NSString* _state;
	NSString* _zipCode;
	NSString* _country;
	NSString* _countryCode;

}

@property (nonatomic,copy,readonly) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * street;                   //@synthesize street=_street - In the implementation block
@property (nonatomic,copy,readonly) NSString * city;                     //@synthesize city=_city - In the implementation block
@property (nonatomic,copy,readonly) NSString * state;                    //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSString * zipCode;                  //@synthesize zipCode=_zipCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;                  //@synthesize country=_country - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyFromABLabelRef:(CFStringRef)arg1 ABValueRef:(void*)arg2 ;
-(NSString *)zipCode;
-(id)initWithLabel:(id)arg1 dictionary:(id)arg2 ;
-(id)asStrings;
-(NSString *)description;
-(NSString *)state;
-(NSString *)label;
-(NSString *)countryCode;
-(NSString *)country;
-(NSString *)street;
-(NSString *)city;
@end

