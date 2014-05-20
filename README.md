KSAudioPlayer
=============
v 0.0.1

Drop-in iOS Audio Player built on top of BASS-library. 

<b>Supported file formats:</b>

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

```objc- (BOOL)playItemWithURL:(NSURL *)url;```

Pause:

`- (void)pause;`

Resume:

`- (void)resume;`

Is playing?:

`- (BOOL)isPlaying;`

Get current track duration:

`- (NSTimeInterval)duration;`

Get current track position:

`- (NSTimeInterval)position;`


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
