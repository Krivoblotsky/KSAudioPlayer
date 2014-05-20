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

###Interface is dead-simple:


Play:

`- (BOOL)playItemWithURL:(NSURL *)url;`

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
