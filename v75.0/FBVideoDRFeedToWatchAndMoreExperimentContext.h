/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBVideoDRFeedToWatchAndMoreExperimentContext : FBExperimentContext {

	BOOL _enableWatchAndLead;
	BOOL _enableWatchAndBrowse;
	BOOL _enableWatchAndInstall;

}

@property (assign,nonatomic) BOOL enableWatchAndLead;                 //@synthesize enableWatchAndLead=_enableWatchAndLead - In the implementation block
@property (assign,nonatomic) BOOL enableWatchAndBrowse;               //@synthesize enableWatchAndBrowse=_enableWatchAndBrowse - In the implementation block
@property (assign,nonatomic) BOOL enableWatchAndInstall;              //@synthesize enableWatchAndInstall=_enableWatchAndInstall - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enableWatchAndBrowse;
-(BOOL)enableWatchAndInstall;
-(BOOL)enableWatchAndLead;
-(void)setEnableWatchAndLead:(BOOL)arg1 ;
-(void)setEnableWatchAndBrowse:(BOOL)arg1 ;
-(void)setEnableWatchAndInstall:(BOOL)arg1 ;
@end

