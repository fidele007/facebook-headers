/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSArray;

@interface FBSearchTableViewData : NSObject {

	unique_ptr<std::__1::vector<Section, std::__1::allocator<Section> >, std::__1::default_delete<std::__1::vector<Section, std::__1::allocator<Section> > > >* _sectionsPtr;
	NSArray* _objects;
	unsigned long long _objectCount;

}

@property (nonatomic,readonly) unsigned long long objectCount;              //@synthesize objectCount=_objectCount - In the implementation block
+(id)dataFromTitleAndObjectArrayTuple:(id)arg1 ;
+(id)dataFromObjectArray:(id)arg1 ;
-(BOOL)rowIsSectionTitle:(id)arg1 ;
-(id)titleModelForSection:(unsigned long long)arg1 ;
-(unsigned long long)objectIndexForIndexPath:(id)arg1 ;
-(unsigned long long)objectCount;
-(id)filterObjects:(/*^block*/id)arg1 ;
-(void)_shredTuple:(id)arg1 ;
-(id)initWithTuple:(id)arg1 objects:(id)arg2 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfRowsInSection:(long long)arg1 ;
-(id)firstObject;
-(unsigned long long)numberOfSections;
-(id)allObjects;
-(BOOL)hasSectionHeader;
@end
