#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentActionProgress.hpp"
#include "PatcherComponentStateAction.hpp"
namespace leagueapi {
  struct PatcherComponentState_t {
    PatcherComponentStateAction_t action;
    std::string id;
    bool isCorrupted;
    bool isUpToDate;
    bool isUpdateAvailable;
    std::optional<PatcherComponentActionProgress_t> progress;
    std::optional<std::string> timeOfLastUpToDateCheckISO8601;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentState_t& v) {
    j["action"] = v.action;
    j["id"] = v.id;
    j["isCorrupted"] = v.isCorrupted;
    j["isUpToDate"] = v.isUpToDate;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    if(v.progress)
      j["progress"] = *v.progress;
    if(v.timeOfLastUpToDateCheckISO8601)
      j["timeOfLastUpToDateCheckISO8601"] = *v.timeOfLastUpToDateCheckISO8601;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentState_t& v) {
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
    v.id = j.at("id").get<std::string>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    if(auto it = j.find("progress"); it != j.end() !it->is_null())
      v.progress = it->get<PatcherComponentActionProgress_t>();
    if(auto it = j.find("timeOfLastUpToDateCheckISO8601"); it != j.end() !it->is_null())
      v.timeOfLastUpToDateCheckISO8601 = it->get<std::string>();
  }
}
