import 'window_to_front_platform_interface.dart';

class WindowToFront {
  // Remove the getPlatformVersion() implementation and add the following
  static Future<void> activate() {
    return WindowToFrontPlatform.instance.activate();
  }
}
