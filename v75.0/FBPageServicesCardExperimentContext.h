/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBPageServicesCardExperimentContext : FBExperimentContext {

	BOOL _useReaction;
	BOOL _showServices;

}

@property (assign,nonatomic) BOOL useReaction;               //@synthesize useReaction=_useReaction - In the implementation block
@property (assign,nonatomic) BOOL showServices;              //@synthesize showServices=_showServices - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)showServices;
-(BOOL)useReaction;
-(void)setUseReaction:(BOOL)arg1 ;
-(void)setShowServices:(BOOL)arg1 ;
@end
