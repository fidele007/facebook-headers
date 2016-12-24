/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBPageCTAGetQuoteCreateDataModel : FBValueObject <NSCopying> {

	NSString* _formTitle;
	NSString* _formDescription;
	NSArray* _userInfos;
	NSArray* _customizedQuestions;

}

@property (nonatomic,copy,readonly) NSString * formTitle;                       //@synthesize formTitle=_formTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * formDescription;                 //@synthesize formDescription=_formDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userInfos;                        //@synthesize userInfos=_userInfos - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customizedQuestions;              //@synthesize customizedQuestions=_customizedQuestions - In the implementation block
-(NSString *)formTitle;
-(NSString *)formDescription;
-(NSArray *)customizedQuestions;
-(id)initWithFormTitle:(id)arg1 formDescription:(id)arg2 userInfos:(id)arg3 customizedQuestions:(id)arg4 ;
-(NSArray *)userInfos;
@end

