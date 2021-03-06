/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBRichStoryEntity.h>

@class NSString, NSURL, NSArray;

@interface FBEmailCTAViewModel : NSObject <FBRichStoryEntity> {

	NSString* _headerTitle;
	NSString* _headerDescription;
	NSURL* _userProfilePictureURL;
	NSURL* _publisherLogoURL;
	NSArray* _emails;
	NSString* _privacyPolicyDisplayString;
	NSString* _privacyPolicyLinkedSubstring;
	NSURL* _privacyPolicyURL;
	NSString* _confirmationMessage;
	NSString* _ctaID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * headerTitle;                               //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerDescription;                         //@synthesize headerDescription=_headerDescription - In the implementation block
@property (nonatomic,readonly) NSURL * userProfilePictureURL;                             //@synthesize userProfilePictureURL=_userProfilePictureURL - In the implementation block
@property (nonatomic,readonly) NSURL * publisherLogoURL;                                  //@synthesize publisherLogoURL=_publisherLogoURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * emails;                                     //@synthesize emails=_emails - In the implementation block
@property (nonatomic,copy,readonly) NSString * privacyPolicyDisplayString;                //@synthesize privacyPolicyDisplayString=_privacyPolicyDisplayString - In the implementation block
@property (nonatomic,copy,readonly) NSString * privacyPolicyLinkedSubstring;              //@synthesize privacyPolicyLinkedSubstring=_privacyPolicyLinkedSubstring - In the implementation block
@property (nonatomic,readonly) NSURL * privacyPolicyURL;                                  //@synthesize privacyPolicyURL=_privacyPolicyURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmationMessage;                       //@synthesize confirmationMessage=_confirmationMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaID;                                     //@synthesize ctaID=_ctaID - In the implementation block
+(id)_privacyPolicyDisplayStringForPublisher:(id)arg1 ;
+(id)fakeViewModel;
+(id)viewModelForSubscriptionOption:(id)arg1 userProfilePictureURL:(id)arg2 ;
-(NSString *)confirmationMessage;
-(NSString *)ctaID;
-(NSURL *)privacyPolicyURL;
-(NSString *)privacyPolicyDisplayString;
-(NSURL *)userProfilePictureURL;
-(NSURL *)publisherLogoURL;
-(NSString *)privacyPolicyLinkedSubstring;
-(id)initWithHeaderTitle:(id)arg1 headerDescription:(id)arg2 userProfilePictureURL:(id)arg3 publisherLogoURL:(id)arg4 emails:(id)arg5 privacyPolicyDisplayString:(id)arg6 privacyPolicyLinkedSubstring:(id)arg7 privacyPolicyURL:(id)arg8 confirmationMessage:(id)arg9 ctaID:(id)arg10 ;
-(NSString *)headerTitle;
-(NSArray *)emails;
-(NSString *)headerDescription;
@end

