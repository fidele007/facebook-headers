/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSString, NSArray, NSMutableSet;

@interface FBITunesStoreEntity : NSObject <NSCoding> {

	NSDate* _expirationDate;
	NSString* _fbid;
	NSString* _name;
	NSArray* _urlSchemes;
	NSArray* _trackingData;
	NSMutableSet* _attributionGeneratorDelegates;
	BOOL _showInstallNotification;
	NSString* _clientToken;
	NSString* _iconUrl;

}

@property (nonatomic,copy) NSDate * expirationDate;                                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * fbid;                                                    //@synthesize fbid=_fbid - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * urlSchemes;                                               //@synthesize urlSchemes=_urlSchemes - In the implementation block
@property (nonatomic,copy) NSArray * trackingData;                                             //@synthesize trackingData=_trackingData - In the implementation block
@property (nonatomic,copy) NSString * clientToken;                                             //@synthesize clientToken=_clientToken - In the implementation block
@property (nonatomic,copy) NSString * iconUrl;                                                 //@synthesize iconUrl=_iconUrl - In the implementation block
@property (assign,nonatomic) BOOL showInstallNotification;                                     //@synthesize showInstallNotification=_showInstallNotification - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * attributionGeneratorDelegates; 
+(id)createForApplication:(id)arg1 tracking:(id)arg2 attributionGeneratorDelegates:(id)arg3 ;
+(id)createForDigitalGood:(id)arg1 fbid:(id)arg2 urlSchemesCopy:(id)arg3 tracking:(id)arg4 iconUrl:(id)arg5 attributionGeneratorDelegates:(id)arg6 ;
+(id)createForDigitalGood:(id)arg1 fbid:(id)arg2 urlSchemesCopy:(id)arg3 tracking:(id)arg4 iconUrl:(id)arg5 showInstallNotification:(BOOL)arg6 attributionGeneratorDelegates:(id)arg7 ;
+(id)createForDigitalGood:(id)arg1 fbid:(id)arg2 urlSchemesCopy:(id)arg3 clientToken:(id)arg4 iconUrl:(id)arg5 attributionGeneratorDelegates:(id)arg6 ;
+(id)_createIdentity:(id)arg1 fbid:(id)arg2 urlSchemesCopy:(id)arg3 trackingData:(id)arg4 clientToken:(id)arg5 iconUrl:(id)arg6 attributionGeneratorDelegates:(id)arg7 showInstallNotification:(BOOL)arg8 ;
+(id)searchablePredicates;
-(NSString *)fbid;
-(NSArray *)trackingData;
-(void)setClientToken:(NSString *)arg1 ;
-(void)setFbid:(NSString *)arg1 ;
-(id)findEntity;
-(NSMutableSet *)attributionGeneratorDelegates;
-(void)setTrackingData:(NSArray *)arg1 ;
-(void)setIconUrl:(NSString *)arg1 ;
-(void)setAttributionGeneratorDelegates:(NSMutableSet *)arg1 ;
-(void)setShowInstallNotification:(BOOL)arg1 ;
-(NSString *)iconUrl;
-(BOOL)showInstallNotification;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)clientToken;
-(NSArray *)urlSchemes;
-(void)setUrlSchemes:(NSArray *)arg1 ;
@end
