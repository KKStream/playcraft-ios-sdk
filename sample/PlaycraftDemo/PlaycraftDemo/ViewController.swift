//
//  ViewController.swift
//  PlaycraftDemo
//
//  Created by KKStream iOS on 2021/4/12.
//

import UIKit
import KKSPaaS

class ViewController: UIViewController {
    
    var playerVC: PlayerViewController!
    
    @IBAction func didTapPlay(_ sender: Any) {
        
        let context = AppLayerContext(
            contentId: "1",
            contentType: .videos,
            host: "<put playback api URL here>",
            access: "paas12@gmail.com",
            custom: ["X-Device-Type": "ios"],
            settingConfig: SettingConfig(resolution: nil, sourceType: nil)
        )
        
        playerVC = PlayerViewController(with: context)
        playerVC.delegate = self
        let navController = UINavigationController(rootViewController: playerVC)
        navController.modalPresentationStyle = .fullScreen
        present(navController, animated: true, completion: nil)
    }

}

extension ViewController: PlayerViewControllerDelegate {

    func playerViewController(_ controller: PlayerViewController?, didChange state: PlaybackState) {
        
    }
    
    func playerViewController(_ controller: PlayerViewController?, didChangeItem id: String, for type: ItemType) {
        
    }
    
    func playerViewController(_ controller: PlayerViewController?, didChange resolution: Int?, for reason: SettingChangedReason) {
        
    }
    
    func playerViewController(_ controller: PlayerViewController?, didChange source: String, for reason: SettingChangedReason) {
        
    }
    
    func playerViewController(_ controller: PlayerViewController?, didFinishLiveForContext context: AppLayerContext) -> Bool {
        return false
    }
    
    func playerViewControllerDidDismiss(_ controller: PlayerViewController?) {
        // User tapped the close button on `PlayerViewController`, and you have to release the instance of it manually.
        playerVC = nil
    }

}
