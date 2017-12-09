#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentState.hpp"
namespace leagueapi {
  struct PatcherProductState_t {
    bool isCorrupted;
    bool isStopped;
    double percentPatched;
    bool isUpToDate;
    PatcherComponentStateAction_t action;
    std::string id;
    std::vector<PatcherComponentState_t> components;
    bool isUpdateAvailable;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductState_t& v) {
    j["isCorrupted"] = v.isCorrupted;
    j["isStopped"] = v.isStopped;
    j["percentPatched"] = v.percentPatched;
    j["isUpToDate"] = v.isUpToDate;
    j["action"] = v.action;
    j["id"] = v.id;
    j["components"] = v.components;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductState_t& v) {
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.isStopped = j.at("isStopped").get<bool>();
    v.percentPatched = j.at("percentPatched").get<double>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
    v.id = j.at("id").get<std::string>();
    v.components = j.at("components").get<std::vector<PatcherComponentState_t>>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
  }
  inline std::string to_string(const PatcherProductState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
