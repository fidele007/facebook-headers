/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBLocationKitPolicyEngineExperimentContext : FBExperimentContext {

	BOOL _sendConfigChecksum;
	BOOL _enablePolicyEngine;

}

@property (assign,nonatomic) BOOL sendConfigChecksum;              //@synthesize sendConfigChecksum=_sendConfigChecksum - In the implementation block
@property (assign,nonatomic) BOOL enablePolicyEngine;              //@synthesize enablePolicyEngine=_enablePolicyEngine - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)sendConfigChecksum;
-(void)setSendConfigChecksum:(BOOL)arg1 ;
-(void)setEnablePolicyEngine:(BOOL)arg1 ;
-(BOOL)enablePolicyEngine;
@end
