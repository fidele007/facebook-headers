/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBExperimentDebugInfoProvider;
@class FBExperimentCatalog, NSString;

@interface FBExperimentDebugHelper : NSObject {

	FBExperimentCatalog* _experimentCatalog;
	id<FBExperimentDebugInfoProvider> _debugInfoProvider;
	/*^block*/id _shakeHandler;

}

@property (nonatomic,copy,readonly) NSString * allExperimentsInCatalogAsShortDescription; 
+(BOOL)_isEligibleForLogging:(id)arg1 ;
-(id)_additionalDebugInfoStringForExperimentName:(id)arg1 ;
-(NSString *)allExperimentsInCatalogAsShortDescription;
-(void)_doHandler:(id)arg1 ;
-(id)initWithExperimentCatalog:(id)arg1 debugInfoProvider:(id)arg2 shakeHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

