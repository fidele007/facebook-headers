/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBTarotObservable : NSObject {

	/*^block*/id _deallocBlock;
	shared_ptr<FB::Input<id> >* _input;
	shared_ptr<FB::Signal<id> >* _signal;

}

@property (nonatomic,readonly) shared_ptr<FB::Input<id> >* input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) shared_ptr<FB::Signal<id> >* signal;              //@synthesize signal=_signal - In the implementation block
@property (nonatomic,copy,readonly) id deallocBlock;                             //@synthesize deallocBlock=_deallocBlock - In the implementation block
@property (nonatomic,retain) id currentValue; 
-(id)initWithInitialValue:(id)arg1 onDeallocBlock:(/*^block*/id)arg2 ;
-(void)subscribeToChangesWithBlock:(/*^block*/id)arg1 ;
-(void)_feedBackEntityDidUpdate:(id)arg1 handle:(id)arg2 ;
-(void)_subscriptionStatusDidUpdate:(id)arg1 handle:(id)arg2 ;
-(id)deallocBlock;
-(void)dealloc;
-(shared_ptr<FB::Input<id> >*)input;
-(shared_ptr<FB::Signal<id> >*)signal;
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
@end

