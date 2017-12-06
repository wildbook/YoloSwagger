#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherStatus_t {
    bool connectedToPatchServer;
    bool hasUpdatesOnRestart;
    bool willRestartOnSelfUpdate;
    std::optional<uint32_t> successfullyInstalledVersion;
  };

  inline void to_json(nlohmann::json& j, const PatcherStatus_t& v) {
    j["connectedToPatchServer"] = v.connectedToPatchServer;
    j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart;
    j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate;
    if(v.successfullyInstalledVersion)
      j["successfullyInstalledVersion"] = *v.successfullyInstalledVersion;
  }

  inline void from_json(const nlohmann::json& j, PatcherStatus_t& v) {
    v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool>();
    v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool>();
    v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool>();
    if(auto it = j.find("successfullyInstalledVersion"); it != j.end() !it->is_null())
      v.successfullyInstalledVersion = it->get<uint32_t>();
  }
}
