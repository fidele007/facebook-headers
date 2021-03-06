/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebImageNetworkFetchFirstSpecifier.h>

@protocol FBWebImageNetworkSpecifierDownloadNode, NSCopying;
@class NSArray, NSSet, NSObject, NSString;

@interface FBWebImageNetworkSpecifier : NSObject <FBWebImageNetworkFetchFirstSpecifier> {

	id<FBWebImageNetworkSpecifierDownloadNode> _targetNode;
	NSArray* _allInfoURLsSortedByDescImageFlag;
	NSSet* _downloadNodes;
	NSSet* _infoNodes;
	NSObject*<NSCopying> _logicalIdentifier;

}

@property (nonatomic,copy,readonly) NSSet * downloadNodes;                                         //@synthesize downloadNodes=_downloadNodes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * infoNodes;                                             //@synthesize infoNodes=_infoNodes - In the implementation block
@property (nonatomic,readonly) NSObject*<NSCopying> logicalIdentifier;                             //@synthesize logicalIdentifier=_logicalIdentifier - In the implementation block
@property (nonatomic,readonly) id<FBWebImageNetworkSpecifierDownloadNode> targetNode;              //@synthesize targetNode=_targetNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * allInfoURLsSortedByDescImageFlag;                    //@synthesize allInfoURLsSortedByDescImageFlag=_allInfoURLsSortedByDescImageFlag - In the implementation block
@property (nonatomic,readonly) unsigned long long targetImageFlag; 
+(id)type;
-(NSObject*<NSCopying>)logicalIdentifier;
-(id)initWithDownloadNodes:(id)arg1 infoNodes:(id)arg2 logicalIdentifier:(id)arg3 ;
-(NSArray *)allInfoURLsSortedByDescImageFlag;
-(id)infoNodeForURL:(id)arg1 ;
-(unsigned long long)targetImageFlag;
-(NSSet *)downloadNodes;
-(id)_infoNodesFlagsDescription;
-(NSSet *)infoNodes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copy;
-(id<FBWebImageNetworkSpecifierDownloadNode>)targetNode;
@end

