/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBFriendAcceptedNotificationExperimentContext : FBExperimentContext {

	BOOL _isAcceptNotificationsExperiment;
	BOOL _pymkSectionEnabled;
	BOOL _isPymkExperimentEnabled;
	BOOL _acceptNotificationRequestTabEnabled;

}

@property (assign,nonatomic) BOOL isAcceptNotificationsExperiment;                  //@synthesize isAcceptNotificationsExperiment=_isAcceptNotificationsExperiment - In the implementation block
@property (assign,nonatomic) BOOL pymkSectionEnabled;                               //@synthesize pymkSectionEnabled=_pymkSectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL isPymkExperimentEnabled;                          //@synthesize isPymkExperimentEnabled=_isPymkExperimentEnabled - In the implementation block
@property (assign,nonatomic) BOOL acceptNotificationRequestTabEnabled;              //@synthesize acceptNotificationRequestTabEnabled=_acceptNotificationRequestTabEnabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)acceptNotificationRequestTabEnabled;
-(BOOL)isAcceptNotificationsExperiment;
-(BOOL)isPymkExperimentEnabled;
-(BOOL)pymkSectionEnabled;
-(void)setIsAcceptNotificationsExperiment:(BOOL)arg1 ;
-(void)setPymkSectionEnabled:(BOOL)arg1 ;
-(void)setIsPymkExperimentEnabled:(BOOL)arg1 ;
-(void)setAcceptNotificationRequestTabEnabled:(BOOL)arg1 ;
@end

