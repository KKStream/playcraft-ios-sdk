# Playcraft

*Playcraft* is a Swift library for streaming video playback.


## Getting Started

1. Download repository.
2. Drag all the files under folder *sdk* into your project's bundle.
3. Initialize and present `PlayerViewController`.
4. Conform `PlayerViewControllerDelegate` and release instance of `PlayerViewController` manually in `func playerViewControllerDidDismiss(_:)`.

```swift
import KKSPaaS

// prepare to present `PlayerViewController`
let context = AppLayerContext(
    contentId: { VIDEO_CONTENT_ID },
    contentType: { VIDEO_CONTENT_TYPE },
    host: { VIDEO_HOST_SERVER_URL_PATH },
    access: { ACCESS_TOKEN },
    settingConfig: { PLAYBACK_SETTING_CONFIGURATION }
)

playerVC = PlayerViewController(with: context)
playerVC.delegate = self
let navController = UINavigationController(rootViewController: playerVC)
navController.modalPresentationStyle = .fullScreen
present(navController, animated: true, completion: nil)
```

More description about parameters:

- `contentId`: The id is unique and it is used to fetch content data and related resources
- `contentType`: An enum value that includes Video, Live and Offline
- `host`: The host url, the player will auto verify that the url is available or not.
- `accessToken`: Authorization token
- `settingConfig`: Use specific the resolution and source type to playback

