/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBAdInterfacesShowLeavePromotionConfirmationExperimentContext : FBExperimentContext {

	NSString* _confirmationMessage;
	BOOL _showOnlyOnEdit;
	NSString* _stayButtonTitle;
	BOOL _enabled;
	NSString* _leaveButtonTitle;
	BOOL _showReachEstimations;
	NSString* _confirmationTitle;

}

@property (nonatomic,copy) NSString * confirmationMessage;              //@synthesize confirmationMessage=_confirmationMessage - In the implementation block
@property (assign,nonatomic) BOOL showOnlyOnEdit;                       //@synthesize showOnlyOnEdit=_showOnlyOnEdit - In the implementation block
@property (nonatomic,copy) NSString * stayButtonTitle;                  //@synthesize stayButtonTitle=_stayButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSString * leaveButtonTitle;                 //@synthesize leaveButtonTitle=_leaveButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL showReachEstimations;                 //@synthesize showReachEstimations=_showReachEstimations - In the implementation block
@property (nonatomic,copy) NSString * confirmationTitle;                //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)confirmationMessage;
-(NSString *)leaveButtonTitle;
-(BOOL)showOnlyOnEdit;
-(BOOL)showReachEstimations;
-(NSString *)stayButtonTitle;
-(void)setConfirmationMessage:(NSString *)arg1 ;
-(void)setShowOnlyOnEdit:(BOOL)arg1 ;
-(void)setStayButtonTitle:(NSString *)arg1 ;
-(void)setLeaveButtonTitle:(NSString *)arg1 ;
-(void)setShowReachEstimations:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)confirmationTitle;
-(void)setConfirmationTitle:(NSString *)arg1 ;
@end

