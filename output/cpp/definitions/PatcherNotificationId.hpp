#ifndef SWAGGER_TYPES_PatcherNotificationId_HPP
#define SWAGGER_TYPES_PatcherNotificationId_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PatcherNotificationId {
    // 
    MissingFilesError = 2,
    // 
    ConnectionError = 1,
    // 
    UnspecifiedError = 0,
    // 
    FailedToWriteError = 3,
    // 
    DidRestoreClientBackup = 5,
    // 
    WillRestoreClientBackupOnRestart = 4,
  };

  inline void to_json(nlohmann::json& j, const PatcherNotificationId& v) {
    switch(v) {
      case PatcherNotificationId::MissingFilesError:
        j = "MissingFilesError";
      break;
      case PatcherNotificationId::ConnectionError:
        j = "ConnectionError";
      break;
      case PatcherNotificationId::UnspecifiedError:
        j = "UnspecifiedError";
      break;
      case PatcherNotificationId::FailedToWriteError:
        j = "FailedToWriteError";
      break;
      case PatcherNotificationId::DidRestoreClientBackup:
        j = "DidRestoreClientBackup";
      break;
      case PatcherNotificationId::WillRestoreClientBackupOnRestart:
        j = "WillRestoreClientBackupOnRestart";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherNotificationId& v) {
    const auto& s = j.get<std::string>();
    if(s == "MissingFilesError"){
      v = PatcherNotificationId::MissingFilesError;
      return;
    }
    if(s == "ConnectionError"){
      v = PatcherNotificationId::ConnectionError;
      return;
    }
    if(s == "UnspecifiedError"){
      v = PatcherNotificationId::UnspecifiedError;
      return;
    }
    if(s == "FailedToWriteError"){
      v = PatcherNotificationId::FailedToWriteError;
      return;
    }
    if(s == "DidRestoreClientBackup"){
      v = PatcherNotificationId::DidRestoreClientBackup;
      return;
    }
    if(s == "WillRestoreClientBackupOnRestart"){
      v = PatcherNotificationId::WillRestoreClientBackupOnRestart;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PatcherNotificationId_HPP
