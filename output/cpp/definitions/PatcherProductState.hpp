#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentState.hpp"
#include "PatcherComponentStateAction.hpp"
namespace leagueapi {
  struct PatcherProductState_t {
    bool isUpToDate;
    std::string id;
    PatcherComponentStateAction_t action;
    double percentPatched;
    bool isUpdateAvailable;
    bool isCorrupted;
    bool isStopped;
    std::vector<PatcherComponentState_t> components;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductState_t& v) {
    j["isUpToDate"] = v.isUpToDate;
    j["id"] = v.id;
    j["action"] = v.action;
    j["percentPatched"] = v.percentPatched;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isCorrupted"] = v.isCorrupted;
    j["isStopped"] = v.isStopped;
    j["components"] = v.components;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductState_t& v) {
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
    v.percentPatched = j.at("percentPatched").get<double>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.isStopped = j.at("isStopped").get<bool>();
    v.components = j.at("components").get<std::vector<PatcherComponentState_t>>();
  }
  inline std::string to_string(const PatcherProductState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
