/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWildeMemModelObject.h>

@class NSDictionary, NSString, NSArray;

@interface FBMemSearchCombinedResultsEdge : FBWildeMemModelObject

@property (nonatomic,copy) NSDictionary * clientModuleLoggingExtras; 
@property (nonatomic,copy) NSString * clientVPVLoggingIdentifier; 
@property (nonatomic,copy) NSArray * clientModuleLoggingOverrideResultEdges; 
-(id)_subTypeForNewsContextModule;
-(BOOL)shouldLogSubType;
-(NSDictionary *)clientModuleLoggingExtras;
-(NSArray *)clientModuleLoggingOverrideResultEdges;
-(NSString *)clientVPVLoggingIdentifier;
-(void)setClientModuleLoggingExtras:(NSDictionary *)arg1 ;
-(void)setClientVPVLoggingIdentifier:(NSString *)arg1 ;
-(void)setClientModuleLoggingOverrideResultEdges:(NSArray *)arg1 ;
-(unsigned long long)resultType;
-(id)subType;
@end

