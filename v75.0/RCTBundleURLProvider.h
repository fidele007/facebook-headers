/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RCTBundleURLProvider : NSObject

@property (nonatomic,copy) NSString * jsLocation; 
@property (assign,nonatomic) BOOL enableLiveReload; 
@property (assign,nonatomic) BOOL enableMinification; 
@property (assign,nonatomic) BOOL enableDev; 
+(id)jsBundleURLForBundleRoot:(id)arg1 packagerHost:(id)arg2 enableDev:(BOOL)arg3 enableMinification:(BOOL)arg4 ;
+(id)resourceURLForResourcePath:(id)arg1 packagerHost:(id)arg2 query:(id)arg3 ;
+(id)sharedSettings;
-(id)jsBundleURLForBundleRoot:(id)arg1 fallbackResource:(id)arg2 ;
-(NSString *)jsLocation;
-(BOOL)enableDev;
-(BOOL)enableMinification;
-(id)packagerServerURL;
-(void)settingsUpdated;
-(id)packagerServerHost;
-(void)updateValue:(id)arg1 forKey:(id)arg2 ;
-(id)resourceURLForResourceRoot:(id)arg1 resourceName:(id)arg2 resourceExtension:(id)arg3 offlineBundle:(id)arg4 ;
-(BOOL)enableLiveReload;
-(void)setEnableDev:(BOOL)arg1 ;
-(void)setEnableLiveReload:(BOOL)arg1 ;
-(void)setJsLocation:(NSString *)arg1 ;
-(void)setEnableMinification:(BOOL)arg1 ;
-(id)init;
-(void)resetToDefaults;
-(void)setDefaults;
-(id)defaults;
@end
