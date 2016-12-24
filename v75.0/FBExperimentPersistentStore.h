/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBExperimentManagerPolicy;
@interface FBExperimentPersistentStore : NSObject {

	id<FBExperimentManagerPolicy> _policy;

}
-(void)loadExperimentsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)loadOverridesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)persistExperimentOverrideData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)persistExperimentCatalog:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithPolicy:(id)arg1 ;
@end

