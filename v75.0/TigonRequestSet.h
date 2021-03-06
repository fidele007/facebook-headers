/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface TigonRequestSet : NSObject {

	shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken>, std::__1::hash<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> >, std::__1::equal_to<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> >, std::__1::allocator<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> > > >* _queuedBackgroundTokens;
	shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken>, std::__1::hash<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> >, std::__1::equal_to<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> >, std::__1::allocator<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> > > >* _backgroundTokens;
	shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken>, std::__1::hash<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> >, std::__1::equal_to<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> >, std::__1::allocator<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> > > >* _foregroundTokens;
	shared_ptr<std::__1::mutex>* _lock;

}

@property (assign,nonatomic) shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> queuedBackgroundTokens;              //@synthesize queuedBackgroundTokens=_queuedBackgroundTokens - In the implementation block
@property (assign,nonatomic) shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> backgroundTokens;                    //@synthesize backgroundTokens=_backgroundTokens - In the implementation block
@property (assign,nonatomic) shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken> foregroundTokens;                    //@synthesize foregroundTokens=_foregroundTokens - In the implementation block
@property (assign,nonatomic) shared_ptr<std::__1::mutex>* lock;                                                                                                       //@synthesize lock=_lock - In the implementation block
-(id)initWithLock:(const shared_ptr<std::__1::mutex>*)arg1 ;
-(shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken>)queuedBackgroundTokens;
-(void)setQueuedBackgroundTokens:(shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken>)arg1 ;
-(shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken>)backgroundTokens;
-(void)setBackgroundTokens:(shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken>)arg1 ;
-(shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken>)foregroundTokens;
-(void)setForegroundTokens:(shared_ptr<std::__1::unordered_set<std::__1::shared_ptr<facebook::tigon::TigonAppStateRequestToken>)arg1 ;
-(shared_ptr<std::__1::mutex>*)lock;
-(void)setLock:(shared_ptr<std::__1::mutex>*)arg1 ;
@end

