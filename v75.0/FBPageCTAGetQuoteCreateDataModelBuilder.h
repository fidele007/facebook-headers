/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBPageCTAGetQuoteCreateDataModelBuilder : NSObject {

	NSString* _formTitle;
	NSString* _formDescription;
	NSArray* _userInfos;
	NSArray* _customizedQuestions;

}
+(id)pageCTAGetQuoteCreateDataModel;
+(id)pageCTAGetQuoteCreateDataModelFromExistingPageCTAGetQuoteCreateDataModel:(id)arg1 ;
-(id)withFormTitle:(id)arg1 ;
-(id)withFormDescription:(id)arg1 ;
-(id)withUserInfos:(id)arg1 ;
-(id)withCustomizedQuestions:(id)arg1 ;
-(id)build;
@end
