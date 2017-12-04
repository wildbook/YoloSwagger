#ifndef SWAGGER_TYPES_PatcherComponentState_HPP
#define SWAGGER_TYPES_PatcherComponentState_HPP
#include <json.hpp>
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentActionProgress.hpp"
namespace leagueapi {
  // 
  struct PatcherComponentState {
    // 
    PatcherComponentStateAction action;
    // 
    std::string id;
    // 
    bool isCorrupted;
    // 
    bool isUpToDate;
    // 
    bool isUpdateAvailable;
    // 
    PatcherComponentActionProgress progress;
    // 
    std::string timeOfLastUpToDateCheckISO8601;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentState& v) {
    j["action"] = v.action;
    j["id"] = v.id;
    j["isCorrupted"] = v.isCorrupted;
    j["isUpToDate"] = v.isUpToDate;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["progress"] = v.progress;
    j["timeOfLastUpToDateCheckISO8601"] = v.timeOfLastUpToDateCheckISO8601;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentState& v) {
    v.action = j.at("action").get<PatcherComponentStateAction>;
    v.id = j.at("id").get<std::string>;
    v.isCorrupted = j.at("isCorrupted").get<bool>;
    v.isUpToDate = j.at("isUpToDate").get<bool>;
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>;
    v.progress = j.at("progress").get<PatcherComponentActionProgress>;
    v.timeOfLastUpToDateCheckISO8601 = j.at("timeOfLastUpToDateCheckISO8601").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PatcherComponentState_HPP
