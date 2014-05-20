KSAudioPlayer
=============

Drop-in iOS Audio Player built on top of BASS-library. 


###Supported formats:

*.m4a,
*.mp3,
*.mp2, 
*.mp1,
*.ogg,
*.wav, 
*.aiff,
*.opus,
*.flac,
*.wv.
... and even more I haven't tested.

###Dead-simple interface:


Play:

```objc
- (BOOL)playItemWithURL:(NSURL *)url;
```

Pause:

```objc
- (void)pause;
```

Resume:

```objc
- (void)resume;
```

Is playing?:

```objc
- (BOOL)isPlaying;
```

Get current track duration:

```objc
- (NSTimeInterval)duration;
```

Get current track position:

```objc
- (NSTimeInterval)position;
```

###Dead-simple protocol:

```objc
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

```
