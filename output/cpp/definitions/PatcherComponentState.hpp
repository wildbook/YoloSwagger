#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentActionProgress.hpp"
namespace leagueapi {
  struct PatcherComponentState_t {
    bool isUpdateAvailable;
    std::optional<PatcherComponentActionProgress_t> progress;
    bool isUpToDate;
    bool isCorrupted;
    PatcherComponentStateAction_t action;
    std::string id;
    std::optional<std::string> timeOfLastUpToDateCheckISO8601;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentState_t& v) {
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    if(v.progress)
      j["progress"] = *v.progress;
    j["isUpToDate"] = v.isUpToDate;
    j["isCorrupted"] = v.isCorrupted;
    j["action"] = v.action;
    j["id"] = v.id;
    if(v.timeOfLastUpToDateCheckISO8601)
      j["timeOfLastUpToDateCheckISO8601"] = *v.timeOfLastUpToDateCheckISO8601;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentState_t& v) {
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    if(auto it = j.find("progress"); it != j.end() && !it->is_null())
      v.progress = it->get<PatcherComponentActionProgress_t>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
    v.id = j.at("id").get<std::string>();
    if(auto it = j.find("timeOfLastUpToDateCheckISO8601"); it != j.end() && !it->is_null())
      v.timeOfLastUpToDateCheckISO8601 = it->get<std::string>();
  }
  inline std::string to_string(const PatcherComponentState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
