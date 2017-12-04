#ifndef SWAGGER_TYPES_PatcherComponentState_HPP
#define SWAGGER_TYPES_PatcherComponentState_HPP
#include <json.hpp>
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentActionProgress.hpp"
namespace leagueapi {
  // 
  struct PatcherComponentState {
    // 
    std::string timeOfLastUpToDateCheckISO8601;
    // 
    bool isUpdateAvailable;
    // 
    PatcherComponentStateAction action;
    // 
    PatcherComponentActionProgress progress;
    // 
    bool isUpToDate;
    // 
    std::string id;
    // 
    bool isCorrupted;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentState& v) {
    j["timeOfLastUpToDateCheckISO8601"] = v.timeOfLastUpToDateCheckISO8601;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["action"] = v.action;
    j["progress"] = v.progress;
    j["isUpToDate"] = v.isUpToDate;
    j["id"] = v.id;
    j["isCorrupted"] = v.isCorrupted;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentState& v) {
    v.timeOfLastUpToDateCheckISO8601 = j.at("timeOfLastUpToDateCheckISO8601").get<std::string>;
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>;
    v.action = j.at("action").get<PatcherComponentStateAction>;
    v.progress = j.at("progress").get<PatcherComponentActionProgress>;
    v.isUpToDate = j.at("isUpToDate").get<bool>;
    v.id = j.at("id").get<std::string>;
    v.isCorrupted = j.at("isCorrupted").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PatcherComponentState_HPP
