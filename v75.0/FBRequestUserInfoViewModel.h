/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBRequestUserInfoViewModel : FBValueObject <NSCopying> {

	NSString* _fullName;
	NSString* _firstName;
	NSString* _imageURLString;
	NSString* _appName;
	NSArray* _permissions;

}

@property (nonatomic,copy,readonly) NSString * fullName;                    //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                   //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageURLString;              //@synthesize imageURLString=_imageURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * appName;                     //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * permissions;                  //@synthesize permissions=_permissions - In the implementation block
-(NSString *)imageURLString;
-(id)initWithFullName:(id)arg1 firstName:(id)arg2 imageURLString:(id)arg3 appName:(id)arg4 permissions:(id)arg5 ;
-(NSString *)appName;
-(NSArray *)permissions;
-(NSString *)firstName;
-(NSString *)fullName;
@end

