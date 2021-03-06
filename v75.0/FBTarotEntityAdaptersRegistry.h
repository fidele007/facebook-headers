/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBTarotEntityAdaptersRegistry : NSObject {

	unordered_map<Class, id<FBTarotCardEntityProtocol> (*)(FBMemModelObject *, FBMemTarotDigest *, FBUserSession *), std::__1::hash<Class>, std::__1::equal_to<Class>, std::__1::allocator<std::__1::pair<const Class, id<FBTarotCardEntityProtocol> (*)(FBMemModelObject *, FBMemTarotDigest *, FBUserSession *)> > >* _entityAdapters;

}

@property (nonatomic,readonly) unordered_map<Class entityAdapters;              //@synthesize entityAdapters=_entityAdapters - In the implementation block
-(unordered_map<Class)entityAdapters;
-(id)initWithEntityAdapters:(const unordered_map<Class, id<FBTarotCardEntityProtocol> (*)(FBMemModelObject *, FBMemTarotDigest *, FBUserSession *), std::__1::hash<Class>, std::__1::equal_to<Class>, std::__1::allocator<std::__1::pair<const Class, id<FBTarotCardEntityProtocol> (*)(FBMemModelObject *, FBMemTarotDigest *, FBUserSession *)> > >*)arg1 ;
-(id)entityForMemModel:(id)arg1 memDigest:(id)arg2 session:(id)arg3 ;
@end

