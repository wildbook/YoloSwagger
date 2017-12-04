#ifndef SWAGGER_TYPES_PatcherStatus_HPP
#define SWAGGER_TYPES_PatcherStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PatcherStatus {
    // 
    bool connectedToPatchServer;
    // 
    bool hasUpdatesOnRestart;
    // 
    uint32_t successfullyInstalledVersion;
    // 
    bool willRestartOnSelfUpdate;
  };

  inline void to_json(nlohmann::json& j, const PatcherStatus& v) {
    j["connectedToPatchServer"] = v.connectedToPatchServer;
    j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart;
    j["successfullyInstalledVersion"] = v.successfullyInstalledVersion;
    j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate;
  }

  inline void from_json(const nlohmann::json& j, PatcherStatus& v) {
    v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool>;
    v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool>;
    v.successfullyInstalledVersion = j.at("successfullyInstalledVersion").get<uint32_t>;
    v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PatcherStatus_HPP
