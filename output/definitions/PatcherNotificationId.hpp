#ifndef SWAGGER_TYPES_PatcherNotificationId_HPP
#define SWAGGER_TYPES_PatcherNotificationId_HPP
#include <json.hpp>
namespace test {
  // 
  enum class PatcherNotificationId {
'    // 
    ConnectionError = 1,
    // 
    DidRestoreClientBackup = 5,
    // 
    FailedToWriteError = 3,
    // 
    MissingFilesError = 2,
    // 
    UnspecifiedError = 0,
    // 
    WillRestoreClientBackupOnRestart = 4,
  };

  void to_json(nlohmann::json& j, const PatcherNotificationId& v) {
    switch(v) {
      case PatcherNotificationId::ConnectionError:
        j = "ConnectionError";
      break;
      case PatcherNotificationId::DidRestoreClientBackup:
        j = "DidRestoreClientBackup";
      break;
      case PatcherNotificationId::FailedToWriteError:
        j = "FailedToWriteError";
      break;
      case PatcherNotificationId::MissingFilesError:
        j = "MissingFilesError";
      break;
      case PatcherNotificationId::UnspecifiedError:
        j = "UnspecifiedError";
      break;
      case PatcherNotificationId::WillRestoreClientBackupOnRestart:
        j = "WillRestoreClientBackupOnRestart";
      break;
    }
  }

  void from_json(const nlohmann::json& j, PatcherNotificationId& v) {
    const auto s& = j.get<std::string>();
    if(s == "ConnectionError"){
      v = PatcherNotificationId::ConnectionError;
      return;
    }
    if(s == "DidRestoreClientBackup"){
      v = PatcherNotificationId::DidRestoreClientBackup;
      return;
    }
    if(s == "FailedToWriteError"){
      v = PatcherNotificationId::FailedToWriteError;
      return;
    }
    if(s == "MissingFilesError"){
      v = PatcherNotificationId::MissingFilesError;
      return;
    }
    if(s == "UnspecifiedError"){
      v = PatcherNotificationId::UnspecifiedError;
      return;
    }
    if(s == "WillRestoreClientBackupOnRestart"){
      v = PatcherNotificationId::WillRestoreClientBackupOnRestart;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PatcherNotificationId_HPP
