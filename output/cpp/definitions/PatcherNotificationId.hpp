#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PatcherNotificationId_t {
    UnspecifiedError_E = 0,
    WillRestoreClientBackupOnRestart_E = 4,
    ConnectionError_E = 1,
    DidRestoreClientBackup_E = 5,
    FailedToWriteError_E = 3,
    MissingFilesError_E = 2,
  };

  inline void to_json(nlohmann::json& j, const PatcherNotificationId_t& v) {
    switch(v) {
      case PatcherNotificationId_t::UnspecifiedError_E:
        j = "UnspecifiedError";
      break;
      case PatcherNotificationId_t::WillRestoreClientBackupOnRestart_E:
        j = "WillRestoreClientBackupOnRestart";
      break;
      case PatcherNotificationId_t::ConnectionError_E:
        j = "ConnectionError";
      break;
      case PatcherNotificationId_t::DidRestoreClientBackup_E:
        j = "DidRestoreClientBackup";
      break;
      case PatcherNotificationId_t::FailedToWriteError_E:
        j = "FailedToWriteError";
      break;
      case PatcherNotificationId_t::MissingFilesError_E:
        j = "MissingFilesError";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherNotificationId_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "UnspecifiedError"){
      v = PatcherNotificationId_t::UnspecifiedError_E;
      return;
    }
    if(s == "WillRestoreClientBackupOnRestart"){
      v = PatcherNotificationId_t::WillRestoreClientBackupOnRestart_E;
      return;
    }
    if(s == "ConnectionError"){
      v = PatcherNotificationId_t::ConnectionError_E;
      return;
    }
    if(s == "DidRestoreClientBackup"){
      v = PatcherNotificationId_t::DidRestoreClientBackup_E;
      return;
    }
    if(s == "FailedToWriteError"){
      v = PatcherNotificationId_t::FailedToWriteError_E;
      return;
    }
    if(s == "MissingFilesError"){
      v = PatcherNotificationId_t::MissingFilesError_E;
      return;
    }
  }
  inline std::string to_string(const PatcherNotificationId_t& v) {
    switch(v) {
      case PatcherNotificationId_t::UnspecifiedError_E:
        return "UnspecifiedError";
      case PatcherNotificationId_t::WillRestoreClientBackupOnRestart_E:
        return "WillRestoreClientBackupOnRestart";
      case PatcherNotificationId_t::ConnectionError_E:
        return "ConnectionError";
      case PatcherNotificationId_t::DidRestoreClientBackup_E:
        return "DidRestoreClientBackup";
      case PatcherNotificationId_t::FailedToWriteError_E:
        return "FailedToWriteError";
      case PatcherNotificationId_t::MissingFilesError_E:
        return "MissingFilesError";
    }
  }

}
