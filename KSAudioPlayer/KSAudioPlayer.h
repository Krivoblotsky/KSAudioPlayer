//
//  KSAudioPlayer.h
//  KSAudioPlayer
//
//  Created by Sergii Kryvoblotskyi on 5/20/14.
//  Copyright (c) 2014 home. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol KSAudioPlayerDelegate;
@interface KSAudioPlayer : NSObject

@property (nonatomic, weak) id <KSAudioPlayerDelegate> delegate;

/*
Play. Existing channel will be released
 */
- (BOOL)playItemWithURL:(NSURL *)url;

/*
 Player interactions
 */
- (void)pause;
- (void)resume;
- (void)stop;
- (BOOL)isPlaying;

/*
 Player values
 */
- (NSTimeInterval)duration;
- (NSTimeInterval)position;
@end

@protocol KSAudioPlayerDelegate <NSObject>
@optional

/*
 Will be called when track is over
 */

- (void)playerDidFinishPlaying:(KSAudioPlayer *)player;

/*
 Will be called when interruption occured.
 For ex. phone call.
 Basically you should call - (void)pause in this case.
 */

- (void)playerBeginInterruption:(KSAudioPlayer *)player;

/*
 Will be called when interruption ended.
 For ex. phone call ended.
 It's up to you to decide to call - (void)resume or not.
 */

- (void)playerEndInterruption:(KSAudioPlayer *)player shouldResume:(BOOL)should;

@end