#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentState.hpp"
#include "PatcherComponentStateAction.hpp"
namespace leagueapi {
  struct PatcherProductState_t {
    std::vector<PatcherComponentState_t> components;
    bool isUpdateAvailable;
    bool isUpToDate;
    bool isCorrupted;
    PatcherComponentStateAction_t action;
    std::string id;
    double percentPatched;
    bool isStopped;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductState_t& v) {
    j["components"] = v.components;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isUpToDate"] = v.isUpToDate;
    j["isCorrupted"] = v.isCorrupted;
    j["action"] = v.action;
    j["id"] = v.id;
    j["percentPatched"] = v.percentPatched;
    j["isStopped"] = v.isStopped;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductState_t& v) {
    v.components = j.at("components").get<std::vector<PatcherComponentState_t>>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
    v.id = j.at("id").get<std::string>();
    v.percentPatched = j.at("percentPatched").get<double>();
    v.isStopped = j.at("isStopped").get<bool>();
  }
  inline std::string to_string(const PatcherProductState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
