#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentActionProgress.hpp"
namespace leagueapi {
  struct PatcherComponentState_t {
    std::optional<std::string> timeOfLastUpToDateCheckISO8601;
    std::string id;
    bool isUpdateAvailable;
    bool isUpToDate;
    std::optional<PatcherComponentActionProgress_t> progress;
    bool isCorrupted;
    PatcherComponentStateAction_t action;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentState_t& v) {
    if(v.timeOfLastUpToDateCheckISO8601)
      j["timeOfLastUpToDateCheckISO8601"] = *v.timeOfLastUpToDateCheckISO8601;
    j["id"] = v.id;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isUpToDate"] = v.isUpToDate;
    if(v.progress)
      j["progress"] = *v.progress;
    j["isCorrupted"] = v.isCorrupted;
    j["action"] = v.action;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentState_t& v) {
    if(auto it = j.find("timeOfLastUpToDateCheckISO8601"); it != j.end() !it->is_null())
      v.timeOfLastUpToDateCheckISO8601 = it->get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    if(auto it = j.find("progress"); it != j.end() !it->is_null())
      v.progress = it->get<PatcherComponentActionProgress_t>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
  }
}
