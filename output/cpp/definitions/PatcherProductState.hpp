#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentState.hpp"
namespace leagueapi {
  struct PatcherProductState_t {
    double percentPatched;
    bool isUpdateAvailable;
    bool isStopped;
    std::vector<PatcherComponentState_t> components;
    PatcherComponentStateAction_t action;
    bool isUpToDate;
    std::string id;
    bool isCorrupted;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductState_t& v) {
    j["percentPatched"] = v.percentPatched;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isStopped"] = v.isStopped;
    j["components"] = v.components;
    j["action"] = v.action;
    j["isUpToDate"] = v.isUpToDate;
    j["id"] = v.id;
    j["isCorrupted"] = v.isCorrupted;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductState_t& v) {
    v.percentPatched = j.at("percentPatched").get<double>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    v.isStopped = j.at("isStopped").get<bool>();
    v.components = j.at("components").get<std::vector<PatcherComponentState_t>>();
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
  }
  inline std::string to_string(const PatcherProductState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
