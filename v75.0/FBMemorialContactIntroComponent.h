/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBIntentHandler;
@class NSString;

@interface FBMemorialContactIntroComponent : CKCompositeComponent {

	NSString* _FBID;
	NSString* _memorializedPersonShortName;
	NSString* _memorialContactName;
	NSString* _gender;
	id<FBIntentHandler> _intentHandler;

}

@property (nonatomic,copy,readonly) NSString * FBID;                                     //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * memorializedPersonShortName;              //@synthesize memorializedPersonShortName=_memorializedPersonShortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * memorialContactName;                      //@synthesize memorialContactName=_memorialContactName - In the implementation block
@property (nonatomic,copy,readonly) NSString * gender;                                   //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                        //@synthesize intentHandler=_intentHandler - In the implementation block
+(id)newWithFBID:(id)arg1 memorializedPersonShortName:(id)arg2 memorialContactName:(id)arg3 gender:(id)arg4 intentHandler:(id)arg5 ;
-(id<FBIntentHandler>)intentHandler;
-(NSString *)FBID;
-(void)didTapNextButtonAction:(id)arg1 ;
-(NSString *)memorialContactName;
-(NSString *)memorializedPersonShortName;
-(NSString *)gender;
@end

