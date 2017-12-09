#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherStatus_t {
    std::optional<uint32_t> successfullyInstalledVersion;
    bool connectedToPatchServer;
    bool hasUpdatesOnRestart;
    bool willRestartOnSelfUpdate;
  };

  inline void to_json(nlohmann::json& j, const PatcherStatus_t& v) {
    if(v.successfullyInstalledVersion)
      j["successfullyInstalledVersion"] = *v.successfullyInstalledVersion;
    j["connectedToPatchServer"] = v.connectedToPatchServer;
    j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart;
    j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate;
  }

  inline void from_json(const nlohmann::json& j, PatcherStatus_t& v) {
    if(auto it = j.find("successfullyInstalledVersion"); it != j.end() && !it->is_null())
      v.successfullyInstalledVersion = it->get<uint32_t>();
    v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool>();
    v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool>();
    v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool>();
  }
  inline std::string to_string(const PatcherStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
