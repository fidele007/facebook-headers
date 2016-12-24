/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBPageEventCreateExperimentContext : FBExperimentContext {

	BOOL _showInPageUpcomingEventsSection;
	BOOL _showInPageEventsTab;
	BOOL _showInPageActionBar;

}

@property (assign,nonatomic) BOOL showInPageUpcomingEventsSection;              //@synthesize showInPageUpcomingEventsSection=_showInPageUpcomingEventsSection - In the implementation block
@property (assign,nonatomic) BOOL showInPageEventsTab;                          //@synthesize showInPageEventsTab=_showInPageEventsTab - In the implementation block
@property (assign,nonatomic) BOOL showInPageActionBar;                          //@synthesize showInPageActionBar=_showInPageActionBar - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)showInPageActionBar;
-(BOOL)showInPageEventsTab;
-(BOOL)showInPageUpcomingEventsSection;
-(void)setShowInPageUpcomingEventsSection:(BOOL)arg1 ;
-(void)setShowInPageEventsTab:(BOOL)arg1 ;
-(void)setShowInPageActionBar:(BOOL)arg1 ;
@end

