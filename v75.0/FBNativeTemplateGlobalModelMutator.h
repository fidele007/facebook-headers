/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/NTNativeTemplateGlobalDataModelMutator.h>
#import <Facebook/FBNativeTemplateIDModelMapJSExports.h>

@class NSMutableDictionary, NSMutableSet;

@interface FBNativeTemplateGlobalModelMutator : NSObject <NTNativeTemplateGlobalDataModelMutator, FBNativeTemplateIDModelMapJSExports> {

	NSMutableDictionary* _prefixToMutatorsMap;
	long long _currentBatchCount;
	NSMutableSet* _mutatorsInCurrentBatchThatHaveReceivedBegins;

}
-(id)componentForID:(id)arg1 ;
-(void)_cleanupEmptyHashTables;
-(id)_mutatorForID:(id)arg1 ;
-(void)_sendBeginForMutatorIfNeeded:(id)arg1 debugTemplateID:(id)arg2 ;
-(void)appendChildren:(id)arg1 toTemplateWithId:(id)arg2 ;
-(void)prependChildren:(id)arg1 toTemplateWithId:(id)arg2 ;
-(void)insertTemplateModels:(id)arg1 afterTemplateWithId:(id)arg2 ;
-(void)insertTemplateModels:(id)arg1 beforeTemplateWithId:(id)arg2 ;
-(void)replaceTemplateModels:(id)arg1 forTemplateWithId:(id)arg2 ;
-(void)removeTemplateModelWithTemplateWithId:(id)arg1 ;
-(void)setAttributes:(id)arg1 forKeys:(id)arg2 onTemplateWithId:(id)arg3 ;
-(void)nilAttributesWithNames:(id)arg1 onTemplateWithId:(id)arg2 ;
-(id)modelForID:(id)arg1 ;
-(void)addMutator:(id)arg1 forID:(id)arg2 ;
-(id)init;
-(void)beginUpdates;
-(void)endUpdates;
@end

