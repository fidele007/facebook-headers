/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:54 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWildeMemModelObject.h>
#import <Facebook/FBAvatarProtocol.h>
#import <Facebook/FBOpenGraphEntity.h>
#import <Facebook/FBOpenGraphAvatarEntity.h>
#import <Facebook/FBTimelineAppCollectionEntityProtocol.h>
#import <Facebook/FBQueriedEntityFieldsProtocol.h>
#import <Facebook/FBQueriedNodeFieldsProtocol.h>
#import <Facebook/FBQueriedPlaceFieldsProtocol.h>
#import <Facebook/FBQueriedProfileFieldsProtocol.h>
#import <Facebook/FBQueriedSavableFieldsProtocol.h>
#import <Facebook/FBQueriedSearchCombinedResultFieldsProtocol.h>
#import <Facebook/FBQueriedSearchResultFieldsProtocol.h>

@class NSString;

@interface FBMemOpenGraphObject : FBWildeMemModelObject <FBAvatarProtocol, FBOpenGraphEntity, FBOpenGraphAvatarEntity, FBTimelineAppCollectionEntityProtocol, FBQueriedEntityFieldsProtocol, FBQueriedNodeFieldsProtocol, FBQueriedPlaceFieldsProtocol, FBQueriedProfileFieldsProtocol, FBQueriedSavableFieldsProtocol, FBQueriedSearchCombinedResultFieldsProtocol, FBQueriedSearchResultFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * descriptionText; 
@property (nonatomic,readonly) NSString * name; 
-(id)fbid;
-(id)entityURL;
-(BOOL)hasNativeIOSApp;
@end

