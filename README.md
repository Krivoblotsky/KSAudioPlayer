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

Interface is dead-simple:

'''
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

'''
