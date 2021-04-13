# playcraft-ios-sdk

Playcraft is a Swift library for streaming video playback.


## Installation

Drag all the files in the folder *sdk* in to your project bundle. Including 4 files as below:
1. KKSLocalization.xcframework
2. KKSNetwork.xcframework
3. KKSPaaS.framework
4. SDWebImage.xcframework


## Usage

Present `PlayerViewController` and conform `PlayerViewControllerDelegate` for handling release the instance.

```swift
import KKSPaaS

// prepare to present `PlayerViewController`
let context = AppLayerContext(
    contentId: "1",
    contentType: .videos,
    host: "https://mock-playback.tfc.kkv-test.com",
    access: "timchen",
    custom: ["X-Device-Type": "ios"],
    settingConfig: SettingConfig(resolution: nil, sourceType: nil)
)
playerVC = PlayerViewController(with: context)
playerVC.delegate = self
let navController = UINavigationController(rootViewController: playerVC)
navController.modalPresentationStyle = .fullScreen
present(navController, animated: true, completion: nil)
```

Release instance of `PlayerViewController` while delegate function is invoked.

```swift
extension ViewController: PlayerViewControllerDelegate {

    func playerViewController(_ controller: PlayerViewController?, didChange state: PlaybackState) { }
    func playerViewController(_ controller: PlayerViewController?, didChangeItem id: String, for type: ItemType) { }
    func playerViewController(_ controller: PlayerViewController?, didChange resolution: Int?, for reason: SettingChangedReason) { }
    func playerViewController(_ controller: PlayerViewController?, didChange source: String, for reason: SettingChangedReason) { }
    func playerViewController(_ controller: PlayerViewController?, didFinishLiveForContext context: AppLayerContext) -> Bool { false }
    func playerViewControllerDidDismiss(_ controller: PlayerViewController?) {
        // User tapped the close button on `PlayerViewController`, and you have to release the instance of it manually.
        playerVC = nil
    }

}
```


## Reporting

Please open an issue to discuss what problem you would face to.

