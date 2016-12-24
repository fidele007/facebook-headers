/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFragmentModelProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBFragmentModel : NSObject <FBFragmentModelProtocol, NSCopying> {

	FBTree* _fbtree;

}
+(const NodeFactory*)nodeFactory;
+(id)builderForProtocol:(id)arg1 ;
+(id)builderForProtocol:(id)arg1 type:(const char*)arg2 ;
+(Class)classForField:(const StringPiece*)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(const GeneratedGraphSchema*)schema;
-(id)graphQLTypeName;
-(BOOL)isInstanceOfConcreteGraphQLType:(id)arg1 ;
-(id)copyBuilder;
-(id)updateBuilder;
-(id)downcastToProtocol:(id)arg1 ;
-(id)asFBFragmentModelProtocol:(id)arg1 ;
-(const shared_ptr<facebook::mobile::graphstore::Tree>*)tree;
-(id)initWithTree:(const shared_ptr<facebook::mobile::graphstore::Tree>*)arg1 ;
-(id)initWithFBTree:(FBTree*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const shared_ptr<const facebook::mobile::graphstore::NodeSource>*)snapshot;
-(const shared_ptr<facebook::mobile::graphstore::TreeShape>*)fragment;
-(const shared_ptr<const facebook::mobile::graphstore::Record>*)record;
@end
