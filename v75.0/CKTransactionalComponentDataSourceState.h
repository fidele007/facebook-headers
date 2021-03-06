/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKTransactionalComponentDataSourceConfiguration, NSArray;

@interface CKTransactionalComponentDataSourceState : NSObject {

	CKTransactionalComponentDataSourceConfiguration* _configuration;
	NSArray* _sections;

}

@property (nonatomic,copy,readonly) NSArray * sections;                                                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) CKTransactionalComponentDataSourceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(long long)numberOfObjectsInSection:(long long)arg1 ;
-(void)enumerateObjectsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithConfiguration:(id)arg1 sections:(id)arg2 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)numberOfSections;
-(CKTransactionalComponentDataSourceConfiguration *)configuration;
-(NSArray *)sections;
@end

