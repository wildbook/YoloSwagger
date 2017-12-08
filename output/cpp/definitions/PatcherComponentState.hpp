#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentActionProgress.hpp"
namespace leagueapi {
  struct PatcherComponentState_t {
    std::optional<std::string> timeOfLastUpToDateCheckISO8601;
    bool isUpdateAvailable;
    PatcherComponentStateAction_t action;
    std::optional<PatcherComponentActionProgress_t> progress;
    bool isUpToDate;
    std::string id;
    bool isCorrupted;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentState_t& v) {
    if(v.timeOfLastUpToDateCheckISO8601)
      j["timeOfLastUpToDateCheckISO8601"] = *v.timeOfLastUpToDateCheckISO8601;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["action"] = v.action;
    if(v.progress)
      j["progress"] = *v.progress;
    j["isUpToDate"] = v.isUpToDate;
    j["id"] = v.id;
    j["isCorrupted"] = v.isCorrupted;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentState_t& v) {
    if(auto it = j.find("timeOfLastUpToDateCheckISO8601"); it != j.end() && !it->is_null())
      v.timeOfLastUpToDateCheckISO8601 = it->get<std::string>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
    if(auto it = j.find("progress"); it != j.end() && !it->is_null())
      v.progress = it->get<PatcherComponentActionProgress_t>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
  }
  inline std::string to_string(const PatcherComponentState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
