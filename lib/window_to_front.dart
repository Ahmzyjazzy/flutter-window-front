
import 'window_to_front_platform_interface.dart';

class WindowToFront {
  Future<String?> getPlatformVersion() {
    return WindowToFrontPlatform.instance.getPlatformVersion();
  }
}
