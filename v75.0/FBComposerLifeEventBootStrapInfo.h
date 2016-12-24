/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMLESuggestion, NSString, FBComposerEventDate;

@interface FBComposerLifeEventBootStrapInfo : NSObject {

	FBMLESuggestion* _lifeEvent;
	NSString* _schoolType;
	FBComposerEventDate* _earliestDateAllowed;
	NSString* _employerHubId;
	NSString* _schoolHubId;

}

@property (nonatomic,copy) FBMLESuggestion * lifeEvent;                              //@synthesize lifeEvent=_lifeEvent - In the implementation block
@property (nonatomic,copy) NSString * schoolType;                                    //@synthesize schoolType=_schoolType - In the implementation block
@property (nonatomic,retain) FBComposerEventDate * earliestDateAllowed;              //@synthesize earliestDateAllowed=_earliestDateAllowed - In the implementation block
@property (nonatomic,copy) NSString * employerHubId;                                 //@synthesize employerHubId=_employerHubId - In the implementation block
@property (nonatomic,copy) NSString * schoolHubId;                                   //@synthesize schoolHubId=_schoolHubId - In the implementation block
-(id)initWithLifeEvent:(id)arg1 schoolType:(id)arg2 earliestDateAllowed:(id)arg3 employerHubId:(id)arg4 schoolHubId:(id)arg5 ;
-(NSString *)schoolType;
-(FBMLESuggestion *)lifeEvent;
-(void)setLifeEvent:(FBMLESuggestion *)arg1 ;
-(void)setSchoolType:(NSString *)arg1 ;
-(FBComposerEventDate *)earliestDateAllowed;
-(void)setEarliestDateAllowed:(FBComposerEventDate *)arg1 ;
-(NSString *)employerHubId;
-(void)setEmployerHubId:(NSString *)arg1 ;
-(NSString *)schoolHubId;
-(void)setSchoolHubId:(NSString *)arg1 ;
@end
