/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBContactImporterAddressbookPersonName : NSObject {

	NSString* _fullName;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _nickname;
	NSString* _prefix;
	NSString* _suffix;
	NSString* _phoneticFirstName;
	NSString* _phoneticMiddleName;
	NSString* _phoneticLastName;
	NSString* _jobTitle;
	NSString* _department;
	NSString* _company;

}

@property (nonatomic,copy,readonly) NSString * fullName;                        //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * middleName;                      //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                        //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * nickname;                        //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy,readonly) NSString * prefix;                          //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * suffix;                          //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticFirstName;               //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticMiddleName;              //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticLastName;                //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobTitle;                        //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * department;                      //@synthesize department=_department - In the implementation block
@property (nonatomic,copy,readonly) NSString * company;                         //@synthesize company=_company - In the implementation block
-(id)asStrings;
-(void)_makeFullName;
-(id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 nickName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 phoneticFirstName:(id)arg7 phoneticMiddleName:(id)arg8 phoneticLastName:(id)arg9 jobTitle:(id)arg10 department:(id)arg11 company:(id)arg12 ;
-(NSString *)middleName;
-(id)description;
-(NSString *)prefix;
-(NSString *)phoneticMiddleName;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(NSString *)jobTitle;
-(NSString *)company;
-(NSString *)department;
-(NSString *)nickname;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithABRecord:(void*)arg1 ;
-(NSString *)fullName;
-(NSString *)suffix;
@end

