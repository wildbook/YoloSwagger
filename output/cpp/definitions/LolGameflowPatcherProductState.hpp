#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowPatcherProductStateAction.hpp"
namespace leagueapi {
  struct LolGameflowPatcherProductState_t {
    bool isUpdateAvailable;
    bool isUpToDate;
    bool isCorrupted;
    bool isStopped;
    LolGameflowPatcherProductStateAction_t action;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowPatcherProductState_t& v) {
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isUpToDate"] = v.isUpToDate;
    j["isCorrupted"] = v.isCorrupted;
    j["isStopped"] = v.isStopped;
    j["action"] = v.action;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowPatcherProductState_t& v) {
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.isStopped = j.at("isStopped").get<bool>();
    v.action = j.at("action").get<LolGameflowPatcherProductStateAction_t>();
  }
  inline std::string to_string(const LolGameflowPatcherProductState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
