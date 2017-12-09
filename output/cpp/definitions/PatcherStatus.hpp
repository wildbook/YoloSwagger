#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherStatus_t {
    bool connectedToPatchServer;
    std::optional<uint32_t> successfullyInstalledVersion;
    bool willRestartOnSelfUpdate;
    bool hasUpdatesOnRestart;
  };

  inline void to_json(nlohmann::json& j, const PatcherStatus_t& v) {
    j["connectedToPatchServer"] = v.connectedToPatchServer;
    if(v.successfullyInstalledVersion)
      j["successfullyInstalledVersion"] = *v.successfullyInstalledVersion;
    j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate;
    j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart;
  }

  inline void from_json(const nlohmann::json& j, PatcherStatus_t& v) {
    v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool>();
    if(auto it = j.find("successfullyInstalledVersion"); it != j.end() && !it->is_null())
      v.successfullyInstalledVersion = it->get<uint32_t>();
    v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool>();
    v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool>();
  }
  inline std::string to_string(const PatcherStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
