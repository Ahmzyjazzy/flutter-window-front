#ifndef FLUTTER_PLUGIN_WINDOW_TO_FRONT_PLUGIN_H_
#define FLUTTER_PLUGIN_WINDOW_TO_FRONT_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace window_to_front {

class WindowToFrontPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  WindowToFrontPlugin();

  virtual ~WindowToFrontPlugin();

  // Disallow copy and assign.
  WindowToFrontPlugin(const WindowToFrontPlugin&) = delete;
  WindowToFrontPlugin& operator=(const WindowToFrontPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace window_to_front

#endif  // FLUTTER_PLUGIN_WINDOW_TO_FRONT_PLUGIN_H_
