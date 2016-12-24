/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBScenePath, NSString;


@protocol FBServiceConfigurationCoring <NSObject>
@property (nonatomic,retain) FBScenePath * scenePath; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,copy) NSString * logNamespace; 
@property (nonatomic,copy) NSString * logName; 
@property (nonatomic,retain) id<FBCallPath> callPath; 
@property (assign,nonatomic) BOOL disableCustomProtocols; 
@required
-(FBScenePath *)scenePath;
-(void)setScenePath:(id)arg1;
-(void)setCallPath:(id)arg1;
-(void)setLogNamespace:(id)arg1;
-(void)setDisableCustomProtocols:(BOOL)arg1;
-(id<FBCallPath>)callPath;
-(BOOL)disableCustomProtocols;
-(NSString *)logNamespace;
-(void)setLogName:(id)arg1;
-(NSString *)logName;
-(void)setWorkQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)workQueue;

@end
