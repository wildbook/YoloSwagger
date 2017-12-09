#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentActionProgress.hpp"
#include "PatcherComponentStateAction.hpp"
namespace leagueapi {
  struct PatcherComponentState_t {
    PatcherComponentStateAction_t action;
    bool isUpdateAvailable;
    bool isUpToDate;
    std::string id;
    std::optional<std::string> timeOfLastUpToDateCheckISO8601;
    std::optional<PatcherComponentActionProgress_t> progress;
    bool isCorrupted;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentState_t& v) {
    j["action"] = v.action;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isUpToDate"] = v.isUpToDate;
    j["id"] = v.id;
    if(v.timeOfLastUpToDateCheckISO8601)
      j["timeOfLastUpToDateCheckISO8601"] = *v.timeOfLastUpToDateCheckISO8601;
    if(v.progress)
      j["progress"] = *v.progress;
    j["isCorrupted"] = v.isCorrupted;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentState_t& v) {
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.id = j.at("id").get<std::string>();
    if(auto it = j.find("timeOfLastUpToDateCheckISO8601"); it != j.end() && !it->is_null())
      v.timeOfLastUpToDateCheckISO8601 = it->get<std::string>();
    if(auto it = j.find("progress"); it != j.end() && !it->is_null())
      v.progress = it->get<PatcherComponentActionProgress_t>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
  }
  inline std::string to_string(const PatcherComponentState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
