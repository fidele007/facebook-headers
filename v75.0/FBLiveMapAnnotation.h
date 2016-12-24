/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, FBMemFeedStory, FBMemVideo;

@interface FBLiveMapAnnotation : NSObject <MKAnnotation> {

	FBMemFeedStory* _story;
	FBMemVideo* _video;
	NSString* _title;
	NSString* _subtitle;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) FBMemFeedStory * story;                         //@synthesize story=_story - In the implementation block
@property (nonatomic,retain) FBMemVideo * video;                             //@synthesize video=_video - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMemFeedStory *)story;
-(void)setStory:(FBMemFeedStory *)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 title:(id)arg3 subtitle:(id)arg4 story:(id)arg5 video:(id)arg6 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(FBMemVideo *)video;
-(void)setVideo:(FBMemVideo *)arg1 ;
@end

