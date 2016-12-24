/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBFriendingStatefulWriteInterface;

@interface FBPeopleSearchDataSourceHelper : NSObject {

	FBFriendingStatefulWriteInterface* _statefulWriteInterface;

}

@property (nonatomic,readonly) FBFriendingStatefulWriteInterface * statefulWriteInterface;              //@synthesize statefulWriteInterface=_statefulWriteInterface - In the implementation block
-(FBFriendingStatefulWriteInterface *)statefulWriteInterface;
-(id)initWithStatefulWriteInterface:(id)arg1 ;
-(void)insertSearchResults:(id)arg1 ;
-(void)updateSearchResult:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)clearPreviousSearchResults;
-(void)_insertSectionIfNecessaryWithChangesetSections:(Sections*)arg1 ;
-(id)resultAtIndex:(long long)arg1 ;
@end

