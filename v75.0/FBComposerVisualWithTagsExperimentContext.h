/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBComposerVisualWithTagsExperimentContext : FBExperimentContext {

	BOOL _allowNux;
	BOOL _useVisualWithTagsInComposer;
	NSString* _nuxBodyContent;

}

@property (assign,nonatomic) BOOL allowNux;                                 //@synthesize allowNux=_allowNux - In the implementation block
@property (assign,nonatomic) BOOL useVisualWithTagsInComposer;              //@synthesize useVisualWithTagsInComposer=_useVisualWithTagsInComposer - In the implementation block
@property (nonatomic,copy) NSString * nuxBodyContent;                       //@synthesize nuxBodyContent=_nuxBodyContent - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)allowNux;
-(NSString *)nuxBodyContent;
-(BOOL)useVisualWithTagsInComposer;
-(void)setAllowNux:(BOOL)arg1 ;
-(void)setUseVisualWithTagsInComposer:(BOOL)arg1 ;
-(void)setNuxBodyContent:(NSString *)arg1 ;
@end

