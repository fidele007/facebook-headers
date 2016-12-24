/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBExperimentCache.h>

@class FBExperimentManager;

@interface FBFeedComponentExperimentCache : NSObject <FBExperimentCache> {

	FBExperimentManager* _experimentManager;
	unordered_map<__unsafe_unretained Class, FBFeedComponentExperimentCacheContext, FB::HashFunctor<__unsafe_unretained Class>, FB::EqualFunctor<__unsafe_unretained Class>, std::__1::allocator<std::__1::pair<const __unsafe_unretained Class, FBFeedComponentExperimentCacheContext> > >* _experimentMap;

}
-(id)autoExposedExperimentContextWithClass:(Class)arg1 ;
-(BOOL)isGKEnabledWithSpecifier:(const mc_gatekeeper_specifier_tRef)arg1 ;
-(id)experimentContextWithClass:(Class)arg1 ;
-(BOOL)isGKEnabled:(id)arg1 ;
-(id)initWithExperimentManager:(id)arg1 experiments:(const vector<__unsafe_unretained Class, std::__1::allocator<__unsafe_unretained Class> >*)arg2 ;
@end
