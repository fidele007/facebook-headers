/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBGroupsDiscoverV2ExperimentContext : FBExperimentContext {

	BOOL _negativeSwipeEnabled;
	BOOL _tagListEnabled;

}

@property (assign,nonatomic) BOOL negativeSwipeEnabled;              //@synthesize negativeSwipeEnabled=_negativeSwipeEnabled - In the implementation block
@property (assign,nonatomic) BOOL tagListEnabled;                    //@synthesize tagListEnabled=_tagListEnabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)negativeSwipeEnabled;
-(BOOL)tagListEnabled;
-(void)setNegativeSwipeEnabled:(BOOL)arg1 ;
-(void)setTagListEnabled:(BOOL)arg1 ;
@end

